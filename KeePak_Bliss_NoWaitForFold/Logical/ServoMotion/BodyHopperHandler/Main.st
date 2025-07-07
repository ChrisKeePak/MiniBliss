
PROGRAM _INIT
	(* Insert code here *)
	
	gHMI.Parameters.BodyHopperJogVelocity := 3.35;
	gHMI.Parameters.BodyHopperVelocity := 3.35;
	gHMI.Parameters.BodyHopperAccel := 180.0;
	
    gHMI.Parameters.BodyHopperTorqueLimit := 2.5;
	
	gHMI.Parameters.BodyHopperDwellTime := 1500; //1 s
	gHMI.Parameters.AtTorqueTime := 500; //1 s
	
	gHMI.Parameters.BodyHopperTimeoutTime := 600000; //10 mintues
	 
END_PROGRAM

PROGRAM _CYCLIC

	IF gNumActiveAlarms  > 0 THEN
		state := SERVOHOPPER_ERROR;
	END_IF
	
	IF gHighSeverityAlarmActive THEN
		state := SERVOHOPPER_ERROR;
	END_IF
	
	//make sure that torque limiting is turned on while jogging
	//	IF EDGEPOS(gHMI.Commands.JogBodyHopperPos) THEN
	//		gBodyHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE;
	//	END_IF
	//	IF EDGEPOS(gHMI.Commands.JogBodyHopperNeg) THEN
	//		gBodyHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE;
	//	END_IF
	
	StartDwellTimer.IN := FALSE; //clear otuside state machine. will  e set true in appropriate state
	AtTorqueTimer.IN := FALSE;
	ResetTimeoutTimer.IN := FALSE; 
	
	// If the hopper has been reset but the machine isn't running, only let the hopper run for an alotted time to protect the motor
	IF gIO.DIs.BodyHopperMotor_RUN AND NOT gLeftHopperInterface.Status.Error AND (NOT gHMI.Commands.RequestVFDRun) THEN
		ResetTimeoutTimer.IN := TRUE;
	END_IF
	IF ResetTimeoutTimer.Q THEN
		ResetTimeoutAlarm := TRUE;
	END_IF

	// Resetting clears the timeout alarms
	IF gHMI.Commands.RequestReset THEN
		ResetTimeoutAlarm := FALSE;
	END_IF
		
	CASE state OF
		
		SERVOHOPPER_WAIT_FOR_HOME:
			
			//servo ram should home automatically on machine start up. This is a direct home axis and should not rquire a home command
			IF gServoFeedInterface.Status.Homed THEN
				gBodyHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE;
				state := SERVOHOPPER_IDLE;
			END_IF
		
		SERVOHOPPER_IDLE:
		
			IF gIO.DIs.BodyHopperMotor_RUN AND BodyHopperFirstHomeExecuted THEN
				gBodyHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				
				gBodyHopperInterface.Commands.RequestMoveVelocity := TRUE;
				gBodyHopperInterface.Parameters.MovementParameters.Direction := 0;
				
				state := SERVOHOPPER_MOVE_VELOCITY;
			END_IF
		
		
		SERVOHOPPER_MOVE_VELOCITY:
			
			AtTorqueTimer.IN := (gBodyHopperInterface.Status.ActualTorque >= gHMI.Parameters.BodyHopperTorqueLimit *0.90);
		
			IF gIO.DIs.BodyHopperMotor_OFF = TRUE THEN
				gBodyHopperInterface.Commands.RequestMoveVelocity := FALSE;
				state := SERVOHOPPER_IDLE;
			ELSIF AtTorqueTimer.Q THEN
				gBodyHopperInterface.Parameters.MovementParameters.Direction := 1;
				gBodyHopperInterface.Commands.ToMapp.Update := TRUE;
				gBodyHopperInterface.Commands.RequestMoveVelocity := TRUE;
				state := SERVOHOPPER_COOLDOWN;
			END_IF
			
		SERVOHOPPER_COOLDOWN:
		
			StartDwellTimer.IN := TRUE;
			
			IF gIO.DIs.BodyHopperMotor_OFF = TRUE THEN
				gBodyHopperInterface.Commands.RequestMoveVelocity := FALSE;
				state := SERVOHOPPER_IDLE;
			ELSIF StartDwellTimer.Q THEN
				gBodyHopperInterface.Parameters.MovementParameters.Direction := 0;
				gBodyHopperInterface.Commands.ToMapp.Update := TRUE;
				gBodyHopperInterface.Commands.RequestMoveVelocity := TRUE;
				state := SERVOHOPPER_MOVE_VELOCITY;
			END_IF
		
		SERVOHOPPER_ERROR:
			
			gBodyHopperInterface.Status.MoveComplete := TRUE;
			gHMI.Commands.StartBodyHopper := FALSE;
		
			gBodyHopperInterface.Commands.RequestMoveVelocity := FALSE;
			
			ResetTimeoutTimer.IN := FALSE;
				
			IF (gNumActiveAlarms = 0) THEN
				state := SERVOHOPPER_WAIT_FOR_HOME;
			END_IF
		
	END_CASE;
	
	// Call FUBs
	StartDwellTimer.PT := gHMI.Parameters.BodyHopperDwellTime; //500 ms
	StartDwellTimer();
	AtTorqueTimer.PT := gHMI.Parameters.AtTorqueTime; //500 ms
	AtTorqueTimer();
	ResetTimeoutTimer.PT := gHMI.Parameters.BodyHopperTimeoutTime;
	ResetTimeoutTimer();
	
END_PROGRAM

PROGRAM _EXIT
				(* Insert code here *)
	 
END_PROGRAM
