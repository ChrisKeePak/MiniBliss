
PROGRAM _INIT
	
	// Velocities and Accels
	gHMI.Parameters.ServoPnPJogVelocity := 10;
	gHMI.Parameters.ServoPnPPositiveVelocity := 90.0;
	gHMI.Parameters.ServoPnPNegativeVelocity := 90.0;
	gHMI.Parameters.ServoPnPAccel := 1000.0;
	
	// Positions
	gHMI.Parameters.ServoPnPStartPosition := 0;
	gHMI.Parameters.ServoPnPVacuumOffPosition := 80; //this is the position where the vacuum will be turned off on the way down to horizontal
	gHMI.Parameters.ServoPnPEndPosition := 100; //105 was the original position. Found that the box was rubbing the suction cups
	
	// Times
	gHMI.Parameters.ServoPnPStartDwellTime := 100;
	gHMI.Parameters.BodyKickerTime := 250;			//500 is original setting
	gHMI.Parameters.BodyKickerRetractTime := 100;	//500 is original setting
	
	// Other
	gHMI.Parameters.ServoPnPTorqueLimit := 8.0;	//3 is original setting.
	//Made adjustments for running 20-22 BPM 01-17-2025 
END_PROGRAM

PROGRAM _CYCLIC

	
	IF gHighSeverityAlarmActive THEN
		state := SERVOPNP_ERROR;
	END_IF
	
	StartDwellTimer.IN := FALSE; //Set in state machine if needed
	BodyKickerTimer.IN := FALSE;
	BodyKickerRetractTimer.IN := FALSE;
	
//	IF (NOT gHMI.Commands.CycleServoPnP AND NOT SingleCyclePnP) AND state <> SERVOPNP_ERROR AND gServoPnPInterface.Status.Homed THEN
//		state := SERVOPNP_IDLE;
//	END_IF
	
	// Resetting clears the grab alarm
	IF gHMI.Commands.RequestReset THEN
		BodyGrabFailAlarm := FALSE;
	END_IF
	
	CASE state OF
		
		SERVOPNP_WAIT_FOR_HOME:
			
            // Pick and place should home automatically on machine start up.
			IF gServoPnPInterface.Status.Homed AND ServoPnPFirstHomeExecuted THEN
				ServoPnPAutoHome := FALSE;
				gPnPAtStopPosition := TRUE;
				gHMI.Commands.CycleServoPnP := FALSE;
				gServoPnPInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				state := SERVOPNP_IDLE;
			ELSIF gServoPnPInterface.Status.PoweredOn AND NOT ServoPnPFirstHomeExecuted THEN
                ServoPnPAutoHome := TRUE;
                //GuideCylinder    := FALSE;
				state := SERVOPNP_WAIT_FOR_AUTO_HOME;
			END_IF
			
		SERVOPNP_WAIT_FOR_AUTO_HOME:
			
			IF gServoPnPInterface.Status.Homed AND ServoPnPFirstHomeExecuted THEN
				ServoPnPAutoHome := FALSE;
				gPnPAtStopPosition := TRUE;
				gHMI.Commands.CycleServoPnP := FALSE;
				gServoPnPInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				state := SERVOPNP_IDLE;
			END_IF
		
		SERVOPNP_IDLE:
		
			ServoPnPAutoHome := FALSE;
			gServoPnPInterface.Status.MoveComplete := FALSE;

            // Wait for the run command, then go to the start position
			IF (gHMI.Commands.CycleServoPnP OR (SingleCyclePnP)) AND ServoPnPFirstHomeExecuted THEN	
				gCyclesToFinish := gCyclesToFinish + 1;
				gServoPnPInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoPnPStartPosition;
				gServoPnPInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoPnPPositiveVelocity;
				gServoPnPInterface.Commands.RequestMoveAbs := TRUE;				
				state := SERVOPNP_MOVE_TO_HOPPER;
			END_IF        
		
		SERVOPNP_MOVE_TO_HOPPER:
		
            GuideCylinder    := FALSE;

			// At the hopper position, if the body hopper is on, turn on the vacuum and dwell if there is a dwell time, or move to horizontal
			IF gServoPnPInterface.Status.MoveComplete AND gIO.DIs.BodyHopperMotor_RUN THEN
				gIO.DOs.BodyVacuumOn := TRUE;
				gServoPnPInterface.Status.MoveComplete := FALSE;
				IF gHMI.Parameters.ServoPnPStartDwellTime > 0 THEN
					state := SERVOPNP_DWELL_AT_HOPPER;
				ELSE	
					gServoPnPInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoPnPEndPosition;
					gServoPnPInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoPnPNegativeVelocity;
					gServoPnPInterface.Commands.RequestMoveAbs := TRUE;					
					state := SERVOPNP_MOVE_TO_HORIZONTAL;		
				END_IF					
			END_IF
		
		SERVOPNP_DWELL_AT_HOPPER:
		
            // Wait for the timer to finish, then start the move towards horizontal
            StartDwellTimer.IN := TRUE;		
			IF StartDwellTimer.Q THEN
				StartDwellTimer.IN := FALSE;				
				gServoPnPInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoPnPEndPosition;
				gServoPnPInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoPnPNegativeVelocity;
				gServoPnPInterface.Commands.RequestMoveAbs := TRUE;				
				state := SERVOPNP_CHECK_FOR_BOX;			
			END_IF
		
			
		SERVOPNP_CHECK_FOR_BOX:
			
			// After rotating 20 degrees, check that a box is actually grabbed
			IF gServoPnPInterface.Status.ActualPosition > 20 THEN
				IF gIO.DIs.BodyVacuumAchieved THEN
					// If the vacuum was achieved, then continue the move to horizontal
					FailureCount := 0;
					state := SERVOPNP_MOVE_TO_HORIZONTAL;
				ELSE
					FailureCount := FailureCount + 1;
					// If the vacuum failed, a box was not grabbed. Unless this was the third failure, try again
					IF FailureCount = NUM_PNP_TRIES THEN
						BodyGrabFailAlarm := TRUE;
						// Return home
						gServoPnPInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoPnPStartPosition;
						gServoPnPInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoPnPPositiveVelocity;
						gServoPnPInterface.Commands.RequestMoveAbs := TRUE;
						state := SERVOPNP_ERROR;
                    ELSE
						state := SERVOPNP_ABORT_AND_RETURN;
					END_IF
				END_IF
			END_IF		
		
		SERVOPNP_MOVE_TO_HORIZONTAL:
			
			IF gServoPnPInterface.Status.ActualPosition > gHMI.Parameters.ServoPnPVacuumOffPosition THEN
				gIO.DOs.BodyVacuumOn := FALSE;
			END_IF
			
			// At the horizontal position, cut off the vacuum
			IF gServoPnPInterface.Status.MoveComplete THEN
				gIO.DOs.BodyVacuumOn := FALSE;
				// Wait for the ram to be ready (sucessful side folds) then push the box to the feeder and wait for it to clear 
				IF (SingleCyclePnP) THEN
					SingleCyclePnP := FALSE;
					state := SERVOPNP_IDLE;
				ELSIF (*gIO.DIs.SideFoldVacuumAchieved AND *) gServoRamInterface.Status.ClearOfRoller AND gRamWaitingOnBox THEN
					gServoPnPInterface.Status.MoveComplete := FALSE;
					gIO.DOs.BodyKicker := TRUE;
					state := SERVOPNP_REMOVE_BOX;
				END_IF
			END_IF
					
					
        SERVOPNP_REMOVE_BOX:
            
            GuideCylinder := TRUE;
			// After the delay, turn off the kicker and start the retract timer
			BodyKickerTimer.IN := TRUE;
			IF BodyKickerTimer.Q THEN
				gIO.DOs.BodyKicker := FALSE;
				BodyKickerRetractTimer.IN := TRUE;
			END_IF
			// When the retract timer is done and the adhesive photoeye falls, send the pick and place home
			FTrig_AdhesivePhotoeye(CLK:=gIO.DIs.AdhesivePhotoEye);
			IF FTrig_AdhesivePhotoeye.Q AND BodyKickerRetractTimer.Q THEN
				BodyKickerTimer.IN := FALSE;
				BodyKickerRetractTimer.IN := FALSE;
				
				IF (NOT gHMI.Commands.CycleServoPnP) THEN
					state := SERVOPNP_IDLE;		
				ELSE
					// On the falling edge of the adhesive photoeye, send the pick and place back to the hopper
					gCyclesToFinish := gCyclesToFinish + 1;
					gServoPnPInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoPnPStartPosition;
					gServoPnPInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoPnPPositiveVelocity;
                    gServoPnPInterface.Commands.RequestMoveAbs := TRUE;	
                    //GuideCylinder := TRUE;
					state := SERVOPNP_MOVE_TO_HOPPER;
				END_IF
			END_IF
		
        SERVOPNP_ABORT_AND_RETURN:
            IF gServoPnPInterface.Status.MoveComplete THEN	
                gServoPnPInterface.Status.MoveComplete := FALSE;			
                gServoPnPInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoPnPStartPosition;
                gServoPnPInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoPnPNegativeVelocity;
                gServoPnPInterface.Commands.RequestMoveAbs := TRUE;				
                state := SERVOPNP_MOVE_TO_HOPPER;
            END_IF
                
            
		SERVOPNP_ERROR:
            // Error response
			gServoPnPInterface.Status.MoveComplete := FALSE;
			gHMI.Commands.CycleServoPnP := FALSE;
			ServoPnPAutoHome := FALSE;	
			gServoPnPInterface.Commands.RequestMoveAbs := FALSE;
			gIO.DOs.BodyVacuumOn := FALSE;
			gIO.DOs.BodyKicker := FALSE;
			SingleCyclePnP := FALSE;
			IF (gNumActiveAlarms = 0) THEN
				FailureCount := 0;
				state := SERVOPNP_WAIT_FOR_HOME;
			END_IF
		
	END_CASE;
			
	//The kicker is not allowed to be on if the servo PNP is below 97 degrees (Smaller number => further from horizontal)
	IF gServoPnPInterface.Status.ActualPosition < 97.0 THEN
		gIO.DOs.BodyKicker := FALSE;
	END_IF
	
	StartDwellTimer.PT := gHMI.Parameters.ServoPnPStartDwellTime;
	StartDwellTimer();
	BodyKickerTimer.PT := gHMI.Parameters.BodyKickerTime;
	BodyKickerTimer();
	BodyKickerRetractTimer.PT := gHMI.Parameters.BodyKickerRetractTime;
    BodyKickerRetractTimer();
    
//    IF gForceBodyKicker THEN
//        gIO.DOs.BodyKicker := TRUE;
//    ELSE
//        gIO.DOs.BodyKicker := FALSE;
//    END_IF
	
	END_PROGRAM

PROGRAM _EXIT
				(* Insert code here *)
	 
				END_PROGRAM

