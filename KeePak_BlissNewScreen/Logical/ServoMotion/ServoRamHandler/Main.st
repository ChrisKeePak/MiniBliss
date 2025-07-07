
PROGRAM _INIT
	
	// Velocities and Accels
	gHMI.Parameters.ServoRamJogVelocity := 50;
	
	gHMI.Parameters.ServoRamSideFormingVelocity := 500.0;
	gHMI.Parameters.ServoRamBoxFormingVelocity := 750.0;
	gHMI.Parameters.ServoRamNegativeVelocity := 750.0;
	
	gHMI.Parameters.ServoRamAccel := 2000.0; //values much higher than this create an audible pop sound as tension changes direction in the belt at end of travel
	
	// Positions
	gHMI.Parameters.ServoRamStartPosition := 14.72;
	gHMI.Parameters.ServoRamMiddlePosition := 255.0;
	gHMI.Parameters.ServoRamFoldStartPos := 75.0;
	gHMI.Parameters.ServoRamFoldEndPos := 290.0;
	gHMI.Parameters.ServoRamEndPosition := 805.0;
	
	// Times
	gHMI.Parameters.ServoRamEndDwellTime := 100;
	gHMI.Parameters.ServoRamStartDwellTime := 100;
	gHMI.Parameters.ServoRamSidePickTime:= 300;
	gHMI.Parameters.ServoRamSidePickRetractTime := 300;
	gHMI.Parameters.ServoRamSideFoldTime:= 100;
	gHMI.Parameters.ServoRamSideFoldRetractTime := 50;
	gHMI.Parameters.RamDelay := 100;
	
	// Other
	gHMI.Parameters.ServoRamTorqueLimit := 6.0;
	gHMI.Parameters.ServoRamClearPosition := 300;
	
	//	gHMI.Parameters.ServoRamTimeoutTime := T#3s;
	
	gPassword; //need to use this somewhere. Was getting thrown out in slimmed down test code for servo ram
	
	
	
	 
END_PROGRAM

PROGRAM _CYCLIC

	
	IF gHighSeverityAlarmActive THEN
		state := SERVORAM_ERROR;
	END_IF
	
	gIO.DOs.ResetSafety := gHMI.Commands.RequestReset OR ForceSafetyReset;
	
	// Resetting clears the grab and fold alarms
	IF gHMI.Commands.RequestReset THEN
		SideGrabFailAlarm := FALSE;
		SideFoldFailAlarm := FALSE;
		ResetTimeoutAlarm := FALSE;
	END_IF
	
	// Automatically disable all timers. Explicitly set them in state machine when needed
	EndDwellTimer.IN := FALSE;
	SidePickTimer.IN := FALSE;
	SidePickRetractTimer.IN := FALSE;
	SideFoldTimer.IN := FALSE;
	SideFoldRetractTimer.IN := FALSE;
	RamDelayTimer.IN := FALSE;
	ResetTimeoutTimer.IN := FALSE; 
	
	// If the hopper has been reset but the machine isn't running, only let the hopper run for an alotted time to protect the motor
	IF NOT gHMI.Commands.CycleServoRam AND NOT gServoRamInterface.Status.Error THEN
		ResetTimeoutTimer.IN := TRUE;
	END_IF
	IF ResetTimeoutTimer.Q THEN
		//	ResetTimeoutAlarm := TRUE;
	END_IF
	
	IF gServoRamInterface.Status.ActualPosition <= gHMI.Parameters.ServoRamClearPosition THEN
		gServoRamInterface.Status.ClearOfRoller := TRUE;
	ELSE
		gServoRamInterface.Status.ClearOfRoller := FALSE;
	END_IF
	
//	IF NOT gHMI.Commands.CycleServoRam AND NOT ExerciseRam AND state <> SERVORAM_ERROR AND gServoRamInterface.Status.Homed THEN
//		state := SERVORAM_IDLE;
//	END_IF
	
	
	
	CASE state OF
		
		SERVORAM_WAIT_FOR_HOME:
			
			// Servo ram should home automatically on machine start up.
			IF gServoRamInterface.Status.Homed AND ServoRamFirstHomeExecuted THEN
				ServoRamAutoHome := FALSE;
				gRamAtStopPosition := TRUE;
				gHMI.Commands.CycleServoRam := FALSE;
				gServoRamInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				state := SERVORAM_IDLE;
			ELSIF gServoRamInterface.Status.PoweredOn AND NOT ServoRamFirstHomeExecuted THEN
				ServoRamAutoHome := TRUE;
				state := SERVORAM_WAIT_FOR_AUTO_HOME;
			END_IF
			
		SERVORAM_WAIT_FOR_AUTO_HOME:
			
			IF gServoRamInterface.Status.Homed AND ServoRamFirstHomeExecuted THEN
				ServoRamAutoHome := FALSE;
				gRamAtStopPosition := TRUE;
				gHMI.Commands.CycleServoRam := FALSE;
				gServoRamInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				state := SERVORAM_IDLE;
			END_IF
		
		SERVORAM_IDLE:
		
			ServoRamAutoHome := FALSE;
			gServoRamInterface.Status.MoveComplete := FALSE; //if we force a transition to IDLE while moving, we may have a stuck move complete flag. clear it here
			
			gCyclesToFinish := 0;
			
			// Wait for the ram to be homed and for run to be pressed, then move to the starting position
			IF gHMI.Commands.CycleServoRam AND ServoRamFirstHomeExecuted THEN
				ServoRamBusy := TRUE;
				gRamWaitingOnBox := TRUE; //tell the PnP that we are waiting on a box
				gServoRamInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamStartPosition;
				gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamNegativeVelocity;
				gServoRamInterface.Commands.RequestMoveAbs := TRUE;
				gRamAtStopPosition := FALSE;
				ServoRamBusy := TRUE;	
				state := SERVORAM_MOVE_TO_START;
				
				//allow the ram to cycle through the start, middle, and end positions. Lets us exercise the movements without using actuators
				//this should only be used to test the machine
			ELSIF ExerciseRam THEN 
				gServoRamInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamStartPosition;
				gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamNegativeVelocity;
				gServoRamInterface.Commands.RequestMoveAbs := TRUE;
				state := SERVORAM_MOVE_TO_START_EX;
			END_IF
			
		SERVORAM_MOVE_TO_START:
			
			// At the starting position, turn on the side vacuum and push the cylinders out to grab the side panels
			// The left and right hoppers must be on, the feed wheels must be running, and the PNP must have left its home position
			IF NOT gHMI.Commands.CycleServoRam AND gServoRamInterface.Status.MoveComplete AND (gCyclesToFinish = 0) THEN
				gServoRamInterface.Status.MoveComplete := FALSE;
				state := SERVORAM_IDLE;
			ELSIF gServoRamInterface.Status.MoveComplete AND gIO.DIs.LeftHopperMotor_RUN AND gIO.DIs.RightHopperMotor_RUN AND gIO.DIs.BodyHopperMotor_RUN AND 
				gServoFeedInterface.Status.InMotion AND NOT gIO.DIs.BodyPickHome (*AND gIO.DIs.BodyVacuumAchieved*) AND (gCyclesToFinish > 0) THEN
				gRamAtStopPosition := TRUE;
				gServoRamInterface.Status.MoveComplete := FALSE;
				ServoRamBusy := FALSE;				
				gIO.DOs.SidePanelVacOn := TRUE;
				gIO.DOs.SidePanelHoldVacuum := TRUE;
				gIO.DOs.SidePickCylinder := TRUE;
				state := SERVORAM_PICK_SIDES;
			END_IF
			
		SERVORAM_PICK_SIDES:
			SidePickTimer.IN := TRUE;
			// Wait for the side pick timer, then retract the side pick
			IF SidePickTimer.Q THEN
				gIO.DOs.SidePickCylinder := FALSE;
				SidePickRetractTimer.IN := TRUE;
			END_IF
			// When the side pick is retracted, check for side panels
			IF SidePickRetractTimer.Q THEN
				SidePickTimer.IN := FALSE;
				SidePickRetractTimer.IN := FALSE;
				state := SERVORAM_CHECK_FOR_SIDES;
			END_IF
			
		SERVORAM_CHECK_FOR_SIDES:
			IF gIO.DIs.SidePickVacuumAchieved THEN
				// If the side pick has vacuum, then the sides were picked, move to middle position
				SideFailureCount := 0;
				state := SERVORAM_WAITING_ON_BOX;
			ELSE
				// If vacuum was not achieved, then the side pick failed. Increment the fail counter
				SideFailureCount := SideFailureCount + 1;
				IF SideFailureCount = NUM_SIDE_TRIES THEN
					// If the side fails too many times, raise an error
					SideGrabFailAlarm := TRUE;
					state := SERVORAM_ERROR;
				ELSE
					// Otherwise, try again
					gIO.DOs.SidePickCylinder := TRUE;
					state := SERVORAM_PICK_SIDES;
				END_IF
			END_IF
			
		SERVORAM_WAITING_ON_BOX:
			// Run the delay timer when a box is seen
			RamDelayTimer.IN := gIO.DIs.BodyDetect;
			// When the delay finishes, move the ram to the end position
			IF gIO.DIs.SidePickVacuumAchieved AND RamDelayTimer.Q THEN
				gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamEndPosition;
				gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamBoxFormingVelocity;
				gRamAtStopPosition := FALSE;
				gServoRamInterface.Commands.RequestMoveAbs := TRUE;
				ServoRamBusy := TRUE ;
				gRamWaitingOnBox := FALSE;
				state := SERVORAM_TRIGGER_FOLD;
			ELSE
				IF NOT gIO.DIs.SidePickVacuumAchieved THEN
				SideGrabFailAlarm := TRUE;
				state := SERVORAM_ERROR;
			END_IF
		END_IF
			
		SERVORAM_TRIGGER_FOLD:
			IF gServoRamInterface.Status.ActualPosition > gHMI.Parameters.ServoRamFoldStartPos THEN
				gIO.DOs.FoldingHoldVacuum := TRUE;
				gIO.DOs.LeftSideFoldCylinder := TRUE;
				gIO.DOs.RightSideFoldCylinder := TRUE;
				state := SERVORAM_RELEASE_FOLD;
			END_IF
				
		SERVORAM_RELEASE_FOLD:
			IF gServoRamInterface.Status.ActualPosition > gHMI.Parameters.ServoRamFoldEndPos THEN
				gIO.DOs.LeftSideFoldCylinder := FALSE;
				gIO.DOs.RightSideFoldCylinder := FALSE;
				state := SERVORAM_MOVE_TO_END;
			END_IF			
		
		SERVORAM_MOVE_TO_END:
			// When the move is complete, check if there is a configured dwell time
			IF gIO.DIs.SidePickVacuumAchieved AND gServoRamInterface.Status.MoveComplete THEN
				gServoRamInterface.Status.MoveComplete := FALSE;
				gRamAtStopPosition := TRUE;
				ServoRamBusy := FALSE;
				gServoRamInterface.Commands.ToMapp.Update := TRUE; //This forces update of the torque limit. This will be cleared automatically
				IF gHMI.Parameters.ServoRamEndDwellTime > 0 THEN
					// If there is a dwell time, execute the dwell
					EndDwellTimer.IN := TRUE;
					state := SERVORAM_DWELL_AT_END;
				ELSE
					// Otherwise, release the vaccuum and move back to the starting position
					gCyclesToFinish := gCyclesToFinish - 1;
					
					CycleCount := CycleCount + 1;
					LubeCount := LubeCount + 1;
					gIO.DOs.SidePanelVacOn := FALSE;
					gIO.DOs.SidePanelHoldVacuum := FALSE;
					gIO.DOs.FoldingHoldVacuum := FALSE;
					gIO.DOs.LeftSideFoldCylinder := FALSE;
					gIO.DOs.RightSideFoldCylinder := FALSE;
					gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamStartPosition;
					gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamNegativeVelocity;
					gServoRamInterface.Commands.RequestMoveAbs := TRUE;
					gRamAtStopPosition := FALSE;
					ServoRamBusy := TRUE;
					gRamWaitingOnBox := TRUE;
					state := SERVORAM_MOVE_TO_START;
				END_IF
				ELSE
					IF NOT gIO.DIs.SidePickVacuumAchieved THEN
					SideGrabFailAlarm := TRUE;
					state := SERVORAM_ERROR;
				END_IF
			END_IF
		
		SERVORAM_DWELL_AT_END:
			
			// Wait for the timer to finish
			EndDwellTimer.IN := TRUE;
			IF EndDwellTimer.Q THEN
				gCyclesToFinish := gCyclesToFinish - 1;
				
				// Release the vacuum and move back to the starting position
				EndDwellTimer.IN := FALSE;
				CycleCount := CycleCount + 1;
				LubeCount := LubeCount + 1;
				gIO.DOs.SidePanelVacOn := FALSE;
				gIO.DOs.SidePanelHoldVacuum := FALSE;
				gIO.DOs.FoldingHoldVacuum := FALSE;
				gIO.DOs.LeftSideFoldCylinder := FALSE;
				gIO.DOs.RightSideFoldCylinder := FALSE;
				gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamStartPosition;
				gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamNegativeVelocity;
				gServoRamInterface.Commands.RequestMoveAbs := TRUE;
				gRamAtStopPosition := FALSE;
				ServoRamBusy := TRUE;
				gRamWaitingOnBox := TRUE;
				state := SERVORAM_MOVE_TO_START;
			END_IF
			
			
			//these EX states are a copy the states above, but with no actuators being used and no evluation of inputs to know if it is OK to continue
		SERVORAM_MOVE_TO_START_EX:
			
			IF gServoRamInterface.Status.MoveComplete THEN
				gServoRamInterface.Status.MoveComplete := FALSE;
				ServoRamBusy := FALSE;	
				IF NOT ExerciseRam THEN
					state := SERVORAM_IDLE;
				ELSE
					state := SERVORAM_PICK_SIDES_EX;
				END_IF
				
			END_IF
			
		SERVORAM_PICK_SIDES_EX:
			SidePickTimer.IN := TRUE;
			// Wait for the side pick timer, then retract the side pick
			IF SidePickTimer.Q THEN
				SidePickRetractTimer.IN := TRUE;
			END_IF
			// When the side pick is retracted, check for side panels
			IF SidePickRetractTimer.Q THEN
				SidePickTimer.IN := FALSE;
				SidePickRetractTimer.IN := FALSE;
				state := SERVORAM_CHECK_FOR_SIDES_EX;
			END_IF
			
		SERVORAM_CHECK_FOR_SIDES_EX:
			// If the side pick has vacuum, then the sides were picked, move to middle position
			gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamMiddlePosition;
			gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamSideFormingVelocity;
			gServoRamInterface.Commands.RequestMoveAbs := TRUE;
			state := SERVORAM_MOVE_TO_MIDDLE_EX;
			
		SERVORAM_MOVE_TO_MIDDLE_EX:
			// When the ram gets to the middle position, extend the folders
			IF gServoRamInterface.Status.MoveComplete THEN
				gServoRamInterface.Status.MoveComplete := FALSE;
				state := SERVORAM_FOLD_SIDES_EX;
			END_IF
			
		SERVORAM_FOLD_SIDES_EX:
			SideFoldTimer.IN := TRUE;
			// Wait for the side fold timer, then retract the side folders
			IF SideFoldTimer.Q THEN
				SideFoldRetractTimer.IN := TRUE;
			END_IF
			// When the side fold is retracted, check that the fold was successful
			IF SideFoldRetractTimer.Q THEN
				state := SERVORAM_CHECK_FOR_FOLDS_EX;
			END_IF
			
		SERVORAM_CHECK_FOR_FOLDS_EX:
			state := SERVORAM_WAITING_ON_BOX_EX;
			
		SERVORAM_WAITING_ON_BOX_EX:
			RamDelayTimer.IN := TRUE;
			// When the delay finishes, move the ram to the end position
			IF RamDelayTimer.Q THEN
				gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamEndPosition;
				gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamBoxFormingVelocity;
				gServoRamInterface.Commands.RequestMoveAbs := TRUE;
				state := SERVORAM_MOVE_TO_END_EX;
			END_IF
			
		SERVORAM_MOVE_TO_END_EX:
			// When the move is complete, check if there is a configured dwell time
			IF gServoRamInterface.Status.MoveComplete THEN
				gServoRamInterface.Status.MoveComplete := FALSE;
				IF gHMI.Parameters.ServoRamEndDwellTime > 0 THEN
					// If there is a dwell time, execute the dwell
					EndDwellTimer.IN := TRUE;
					state := SERVORAM_DWELL_AT_END_EX;
				ELSE
					// Otherwise, release the vaccuum and move back to the starting position
					CycleCount := CycleCount + 1;
					LubeCount := LubeCount + 1;
					gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamStartPosition;
					gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamNegativeVelocity;
					gServoRamInterface.Commands.RequestMoveAbs := TRUE;
					state := SERVORAM_MOVE_TO_START_EX;
				END_IF
			END_IF
			
		SERVORAM_DWELL_AT_END_EX:
			
			// Wait for the timer to finish
			EndDwellTimer.IN := TRUE;
			IF EndDwellTimer.Q THEN
				// Release the vacuum and move back to the starting position
				EndDwellTimer.IN := FALSE;
				CycleCount := CycleCount + 1;
				LubeCount := LubeCount + 1;
				gServoRamInterface.Parameters.MovementParameters.Position := gHMI.Parameters.ServoRamStartPosition;
				gServoRamInterface.Parameters.MovementParameters.Velocity := gHMI.Parameters.ServoRamNegativeVelocity;
				gServoRamInterface.Commands.RequestMoveAbs := TRUE;
				state := SERVORAM_MOVE_TO_START_EX;
			END_IF
				
		SERVORAM_ERROR:
			
			gCyclesToFinish := 0;
			
			ServoRamAutoHome := FALSE;
			gServoRamInterface.Status.MoveComplete := FALSE;
			gHMI.Commands.CycleServoRam := FALSE;
			ServoRamBusy := FALSE;
			ServoRamAutoHome := FALSE;
			gIO.DOs.SidePanelHoldVacuum := FALSE;
			gIO.DOs.LeftSideFoldCylinder := FALSE;
			gIO.DOs.RightSideFoldCylinder := FALSE;
			gIO.DOs.SidePickCylinder := FALSE;
			gIO.DOs.SidePanelHoldVacuum := FALSE;
			gIO.DOs.BodyVacuumOn := FALSE;
			gIO.DOs.FoldingHoldVacuum := FALSE;
			gRamWaitingOnBox := FALSE;
			
			IF (gNumActiveAlarms = 0) THEN
				SideFailureCount := 0;
				FoldFailureCount := 0;
				state := SERVORAM_WAIT_FOR_HOME;
			END_IF
		
	END_CASE;
	
	// FUB Calls
	EndDwellTimer.PT := gHMI.Parameters.ServoRamEndDwellTime; //Use existing dwell time from HMI
	EndDwellTimer();
	SidePickTimer.PT := gHMI.Parameters.ServoRamSidePickTime;
	SidePickTimer();
	SidePickRetractTimer.PT := gHMI.Parameters.ServoRamSidePickRetractTime;
	SidePickRetractTimer();
	SideFoldTimer.PT := gHMI.Parameters.ServoRamSideFoldTime;
	SideFoldTimer();
	SideFoldRetractTimer.PT := gHMI.Parameters.ServoRamSideFoldRetractTime;
	SideFoldRetractTimer();
	RamDelayTimer.PT := gHMI.Parameters.RamDelay;
	RamDelayTimer();
	ResetTimeoutTimer.PT := gHMI.Parameters.ServoRamTimeoutTime;
	ResetTimeoutTimer();
	
END_PROGRAM

PROGRAM _EXIT
				(* Insert code here *)
	 
END_PROGRAM

