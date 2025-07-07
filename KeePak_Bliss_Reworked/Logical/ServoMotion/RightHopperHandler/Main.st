
PROGRAM _INIT
	(* Insert code here *)
	
	gHMI.Parameters.RightHopperJogVelocity := 3.35;
	gHMI.Parameters.RightHopperVelocity := 3.35;
	gHMI.Parameters.RightHopperAccel := 180.0;
	
	gHMI.Parameters.RightHopperTorqueLimit := 1.0;
	
	gHMI.Parameters.RightHopperDwellTime := 1500; //1 s
	gHMI.Parameters.AtTorqueTime := 500; //1 s
	
	gHMI.Parameters.RightHopperTimeoutTime := 600000;
	 
END_PROGRAM

PROGRAM _CYCLIC

	IF gNumActiveAlarms  > 0 THEN
		state := SERVOHOPPER_ERROR;
	END_IF
	
	IF gHighSeverityAlarmActive THEN
		state := SERVOHOPPER_ERROR;
	END_IF
	
	//make sure that torque limiting is turned on while jogging
	//	IF EDGEPOS(gHMI.Commands.JogRightHopperPos) THEN
	//		gRightHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE;
	//	END_IF
	//	IF EDGEPOS(gHMI.Commands.JogRightHopperNeg) THEN
	//		gRightHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE;
	//	END_IF
	
	StartDwellTimer.IN := FALSE; //clear otuside state machine. will  e set true in appropriate state
	AtTorqueTimer.IN := FALSE;
	ResetTimeoutTimer.IN := FALSE; 
	
	// If the hopper has been reset but the machine isn't running, only let the hopper run for an alotted time to protect the motor
	IF gIO.DIs.RightHopperMotor_RUN AND NOT gLeftHopperInterface.Status.Error AND (NOT gHMI.Commands.RequestVFDRun) THEN
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
				gRightHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE;
				state := SERVOHOPPER_IDLE;
			END_IF
		
		SERVOHOPPER_IDLE:
		
			IF gIO.DIs.RightHopperMotor_RUN AND RightHopperFirstHomeExecuted THEN
				gRightHopperInterface.Commands.ToMapp.TorqueLimitingOn := TRUE; //turn torque limiting on
				
				gRightHopperInterface.Commands.RequestMoveVelocity := TRUE;
				gRightHopperInterface.Parameters.MovementParameters.Direction := 0;
				
				state := SERVOHOPPER_MOVE_VELOCITY;
			END_IF
		
		
		SERVOHOPPER_MOVE_VELOCITY:
			
			AtTorqueTimer.IN := (gRightHopperInterface.Status.ActualTorque >= gHMI.Parameters.RightHopperTorqueLimit *0.90);
		
			IF gIO.DIs.RightHopperMotor_OFF = TRUE THEN
				gRightHopperInterface.Commands.RequestMoveVelocity := FALSE;
				state := SERVOHOPPER_IDLE;
			ELSIF AtTorqueTimer.Q THEN
//				gRightHopperInterface.Parameters.MovementParameters.Direction := 1;
				gRightHopperInterface.Commands.ToMapp.Update := TRUE;
				gRightHopperInterface.Commands.RequestMoveVelocity := TRUE;
				state := SERVOHOPPER_COOLDOWN;
			END_IF
			
		SERVOHOPPER_COOLDOWN:
		
			StartDwellTimer.IN := TRUE;
			
			IF gIO.DIs.RightHopperMotor_OFF = TRUE THEN
				gRightHopperInterface.Commands.RequestMoveVelocity := FALSE;
				state := SERVOHOPPER_IDLE;
			ELSIF StartDwellTimer.Q THEN
				gRightHopperInterface.Parameters.MovementParameters.Direction := 0;
				gRightHopperInterface.Commands.ToMapp.Update := TRUE;
				gRightHopperInterface.Commands.RequestMoveVelocity := TRUE;
				state := SERVOHOPPER_MOVE_VELOCITY;
			END_IF
		
		SERVOHOPPER_ERROR:
			
			gRightHopperInterface.Status.MoveComplete := TRUE;
			gHMI.Commands.StartRightHopper := FALSE;
		
			gRightHopperInterface.Commands.RequestMoveVelocity := FALSE;
			
			ResetTimeoutTimer.IN := FALSE;
				
			IF (gNumActiveAlarms = 0) THEN
				state := SERVOHOPPER_WAIT_FOR_HOME;
			END_IF
		
	END_CASE;
	
	StartDwellTimer.PT := gHMI.Parameters.RightHopperDwellTime; //500 ms
	StartDwellTimer();
	AtTorqueTimer.PT := gHMI.Parameters.AtTorqueTime; //500 ms
	AtTorqueTimer();
	ResetTimeoutTimer.PT := gHMI.Parameters.RightHopperTimeoutTime;
	ResetTimeoutTimer();
	
END_PROGRAM

PROGRAM _EXIT
				(* Insert code here *)
	 
END_PROGRAM
