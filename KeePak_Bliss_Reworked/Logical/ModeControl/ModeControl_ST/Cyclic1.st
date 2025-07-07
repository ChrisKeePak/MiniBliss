
PROGRAM _CYCLIC
	(* Insert code here *)

    // HMI Glue pattern inputs are in inches, but the code needs mm
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].DelayDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].DelayDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].DelayDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].DelayDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].DelayDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].DelayDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].DelayDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].DelayDistance[3] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].DelayDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].DelayDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].DelayDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].DelayDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].DelayDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].DelayDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].DelayDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].DelayDistance[3] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].DelayDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].DelayDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].DelayDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].DelayDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].DelayDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].DelayDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].DelayDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].DelayDistance[3] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].DelayDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].DelayDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].DelayDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].DelayDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].DelayDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].DelayDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].DelayDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].DelayDistance[3] * 25.4;
    
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].GlueOnDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].GlueOnDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].GlueOnDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].GlueOnDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].GlueOnDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].GlueOnDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0].GlueOnDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[0].GlueOnDistance[3] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].GlueOnDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].GlueOnDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].GlueOnDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].GlueOnDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].GlueOnDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].GlueOnDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1].GlueOnDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[1].GlueOnDistance[3] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].GlueOnDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].GlueOnDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].GlueOnDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].GlueOnDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].GlueOnDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].GlueOnDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2].GlueOnDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[2].GlueOnDistance[3] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].GlueOnDistance[0] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].GlueOnDistance[0] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].GlueOnDistance[1] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].GlueOnDistance[1] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].GlueOnDistance[2] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].GlueOnDistance[2] * 25.4;
    gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3].GlueOnDistance[3] := gAdhesiveCtrlInterface.Parameters.AdhesiveHMIPatterns[3].GlueOnDistance[3] * 25.4;
    
    //SAFETY CHECKS 0001
    IF NOT gAlarmSystemActive THEN
        RETURN;
    END_IF
	
    //AIR PRESSURE ON/NOK 0002
    //Do not set air pressure alarm unless air pressure has been low for 20 seconds
    AirPressureNotOKTimer.PT := T#20s;
    AirPressureNotOKTimer.IN := (NOT gIO.DIs.AirPressureOK AND NOT gIsSimulated);
    AirPressureNotOKTimer();
    AirPressureNotOK         := AirPressureNotOKTimer.Q;
	
    //MP ALARMX CHECK STATE AIR PRESSURE LOW 0003
    AirPressureAlarmActive := MpAlarmXCheckState(gAlarmXCore, ALARM_AIR_PRESSURE_LOW, mpALARMX_STATE_ACTIVE);
	
    //MP ALARMX SET/RESET AIR PRESSURE LOW 0004 AND 0005
    //Set/clear air pressure alarm
    IF (AirPressureNotOK AND NOT AirPressureAlarmActive) THEN
        status := MpAlarmXSet(gAlarmXCore,ALARM_AIR_PRESSURE_LOW);
    ELSIF (NOT AirPressureNotOK AND AirPressureAlarmActive) THEN
        status := MpAlarmXReset(gAlarmXCore,ALARM_AIR_PRESSURE_LOW);
    END_IF
	
    //MP ALARMX CHECK STATE SAFETY OK/NOK 0006
    SafetyNotOKActive := MpAlarmXCheckState(gAlarmXCore, ALARM_SAFETY_NOTOK, mpALARMX_STATE_ACTIVE);
	
    //MP ALARMX SET/RESET SAFETY OK/NOK 0007 AND 0008
    //Set/Clear Safety Alarm
    IF (NOT gIO.DIs.SafetyOK AND NOT SafetyNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXSet(gAlarmXCore,ALARM_SAFETY_NOTOK);
    ELSIF (gIO.DIs.SafetyOK AND SafetyNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXReset(gAlarmXCore,ALARM_SAFETY_NOTOK);
    END_IF
	
    //MP ALARMX CHECK STATE GUARD DOOR 0009
    GuardDoorNotOKActive := MpAlarmXCheckState(gAlarmXCore, ALARM_SAFETY_GUARD_DOOR, mpALARMX_STATE_ACTIVE);
	
    //MP ALARMX SET/RESET GUARD DOORS 0010 AND 0011
    //Set/Clear Safety Alarm
    IF (NOT gIO.SafetyStatus.GuardDoorsOK AND NOT GuardDoorNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXSet(gAlarmXCore,ALARM_SAFETY_GUARD_DOOR);
    ELSIF (gIO.SafetyStatus.GuardDoorsOK AND GuardDoorNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXReset(gAlarmXCore,ALARM_SAFETY_GUARD_DOOR);
    END_IF
	
    //MP ALARMX CHECK STATE FRONT ESTOP 0012
    FrontEStopNotOKActive := MpAlarmXCheckState(gAlarmXCore, ALARM_SAFETY_FRONT_ESTOP, mpALARMX_STATE_ACTIVE);
	
    //MP ALARMX SET/RESET FRONT ESTOP 0013 AND 0014
    //Set/Clear Safety Alarm
    IF (NOT gIO.SafetyStatus.FrontEStopOK AND NOT FrontEStopNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXSet(gAlarmXCore,ALARM_SAFETY_FRONT_ESTOP);
    ELSIF (gIO.SafetyStatus.FrontEStopOK AND FrontEStopNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXReset(gAlarmXCore,ALARM_SAFETY_FRONT_ESTOP);
    END_IF
	
    //MP ALARMX CHECK STATE REAR ESTOP 0015
    RearEStopNotOKActive := MpAlarmXCheckState(gAlarmXCore, ALARM_SAFETY_REAR_ESTOP, mpALARMX_STATE_ACTIVE);
	
    //MP ALARMX SET/RESET REAR ESTOP 0016 AND 0017
    //Set/Clear Safety Alarm
    IF (NOT gIO.SafetyStatus.BackEstopOK AND NOT RearEStopNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXSet(gAlarmXCore,ALARM_SAFETY_REAR_ESTOP);
    ELSIF (gIO.SafetyStatus.BackEstopOK AND RearEStopNotOKActive AND gIO.SafetyStatus.SafetyProgramRunning) THEN
        status := MpAlarmXReset(gAlarmXCore,ALARM_SAFETY_REAR_ESTOP);
    END_IF
	
    //TURN AIR ON 0018
    //If safety is OK, Turn air On and turn off the red light
    gIO.DOs.AirOn         := gIO.DIs.SafetyOK;
    gIO.DOs.RedLightStack := NOT (gIO.DIs.SafetyOK AND NOT gModeControlInterface.Status.BlissPanelAlarmActive);
	
    //NO ALARMS GREEN LIGHT 0019
    //If there are no alarms active, turn on the green light
    gIO.DOs.GreenLightStack := NOT gAlarmActive;
	
    //ALARM YELLOW LIGHT 0020
    //If there is an active alarm, or the hopper is low, turn on yellow stack light
    gIO.DOs.AmberLightStack := (gAlarmActive OR gIO.DIs.BodyHopperLow);
		
	//DO NOT FINISH CYCLE OF ANYTHING OTHER THAN STOP BUTTON IS PRESSED 0024
	//If an alarm is active or safety is not ok or jog mode is selected, do not finish the selected cycle
	IF (gServoFeedInterface.Status.Error OR gBodyHopperInterface.Status.Error OR gLeftHopperInterface.Status.Error OR gRightHopperInterface.Status.Error OR gServoRamInterface.Status.Error OR
		NOT gIO.DIs.SafetyOK OR gHMI.Commands.SelectJogMode OR gHighSeverityAlarmActive OR BodyCheckError) THEN
		PickAndPlaceHasBox                         := FALSE;
		PickAndPlaceDwelling                       := FALSE;
		PhotoEyeSeen                               := FALSE;
		Vacuum_ON                                  := FALSE;
		gIO.DOs.X_PickSolenoid                     := FALSE;
		gIO.DOs.BlowOffOn                          := FALSE;
	END_IF
	
	//DOES NOT LET MACHINE RUN IF GLUE SYSTEM HAS AN ERROR 0025
	//Do not allow machine to run if glue system has an alarm (Removed gLowSeverityAlarmActive)
	IF (gAdhesiveCtrlInterface.Status.AlarmActive OR
		gServoFeedInterface.Status.Error OR gBodyHopperInterface.Status.Error OR gLeftHopperInterface.Status.Error OR gRightHopperInterface.Status.Error OR gServoRamInterface.Status.Error OR 
		gLowSeverityAlarmActive OR gHighSeverityAlarmActive OR gServoPnPInterface.Status.Error) THEN
		gHMI.Commands.RequestVFDRun := FALSE;
	END_IF
	
	//AUTO MODE RUN REQUEST FINISH CYCLE 0026
	//If we're in auto mode, and run request has been made or we should finish the running, set move request
	MoveVelocityRequest := (gHMI.Commands.SelectAutoMode AND gHMI.Commands.RequestVFDRun);
	
	//RAM POSITION AND STOP POSITION (360-0 ROLLOVER)DetermineDistanceToStopPos 0027
	DistanceFromStopPosition := DetermineDistanceToStopPos(gIO.Encoders.FeedEncoderPos, gModeControlInterface.Parameters.StopPosition);
	
	//KEEPS SERVOS RUNNING TO FINISH CYCLE 0030
	//VFD run command was the run command for the old machine. Keep servos cycling while it is true
	gHMI.Commands.StartBodyHopper := gHMI.Commands.RequestVFDRun;
	gHMI.Commands.StartLeftHopper := gHMI.Commands.RequestVFDRun;
	gHMI.Commands.StartRightHopper := gHMI.Commands.RequestVFDRun;
	gHMI.Commands.StartServoFeed   := (gHMI.Commands.RequestVFDRun (*AND NOT DownstreamBlocked*) AND NOT StopFeedServo);
	gHMI.Commands.CycleServoRam    := gHMI.Commands.RequestVFDRun;
	gHMI.Commands.CycleServoPnP    := gHMI.Commands.RequestVFDRun;
	// The discharge conveyor is controlled by three bits.
	// If #1 is on, then it is running slow. If #1 and #3 are on, then it is running medium speed. #2 Can be used if we need a faster speed.
	gIO.DOs.OutConveyorOn_1 := gHMI.Commands.RequestVFDRun OR (gCyclesToFinish > 0);
	gIO.DOs.OutConveyorOn_2 := gHMI.Commands.RequestVFDRun OR (gCyclesToFinish > 0);
	gIO.DOs.OutConveyorOn_3 := gHMI.Commands.RequestVFDRun OR (gCyclesToFinish > 0);
	
	//RISING EDGE FOR SERVOINPUT SIGNAL 0031
	Rtrig_FeedServoTMR(CLK := FeedServoTMR.Q);
	StopFeed := Rtrig_FeedServoTMR.Q;
	
	//0032 SERVO RAM TRIGGER SET IN FEED HANDLER. COMMENTED OUT
	
	//HOPPER LOW ALARMS 0033
	BodyHopperLowTMR.IN := gIO.DIs.BodyHopperLow;
    BodyHopperLowTMR.PT := gHMI.Parameters.LowBodyHopperTime;
    BodyHopperLowTMR();
    IF BodyHopperLowTMR.Q THEN
        BodyHopperLowAlarm := TRUE;
	END_IF
	LeftHopperLowTMR.IN := gIO.DIs.LeftHopperLow;
	LeftHopperLowTMR.PT := gHMI.Parameters.LowLeftHopperTime;
	LeftHopperLowTMR();
	IF LeftHopperLowTMR.Q THEN
		LeftHopperLowAlarm := TRUE;
	END_IF
	RightHopperLowTMR.IN := gIO.DIs.RightHopperLow;
	RightHopperLowTMR.PT := gHMI.Parameters.LowRightHopperTime;
	RightHopperLowTMR();
	IF RightHopperLowTMR.Q THEN
		RightHopperLowAlarm := TRUE;
	END_IF
	
    //FEED STOP TIMER 0034
    //Timer for the HopperLows to trigger StopFeed												
    FeedStopTimer.IN := gIO.DIs.BodyHopperLow OR gIO.DIs.RightHopperLow OR gIO.DIs.LeftHopperLow;
    FeedStopTimer.PT := gHMI.Parameters.LowHopperTime;
    FeedStopTimer();
    HoperLowStop     := FeedStopTimer.Q;
	
    //HOPPER LOW ALARM RESET 0035
    IF NOT gIO.DIs.BodyHopperLow THEN
        BodyHopperLowAlarm := FALSE;
	END_IF
	IF NOT gIO.DIs.LeftHopperLow THEN
		LeftHopperLowAlarm := FALSE;
	END_IF
	IF NOT gIO.DIs.RightHopperLow THEN
		RightHopperLowAlarm := FALSE;
	END_IF
	
	//==========================================================================================================================================================
	
	//Downstream Sensor Timer Addition 02/11/2025
	//DownstreamSensorTimer.PT := gModeControlInterface.Parameters.DownstreamTimeout;
	//DownstreamSensorTimer.IN := (gIO.DIs.DownstreamSensorRaw AND NOT gModeControlInterface.Parameters.DownstreamIgnored);
	//DownstreamSensorTimer();
	//IF DownstreamSensorTimer.Q THEN
	//	gIO.DIs.DownstreamSensor := TRUE;
	//END_IF
	
	//DownstreamBlocked := gIO.DIs.DownstreamSensor AND RamAtStopPosition;
	//gModeControlInterface.Status.WaitingOnDownstream := MoveVelocityRequest AND DownstreamBlocked;
	
	 
	// Downsream Sensor Timer Addition 02/11/2025
	DownstreamSensorTimer.PT := gModeControlInterface.Parameters.DownstreamTimeout;
	DownstreamSensorTimer.IN := (gIO.DIs.DownstreamSensorRaw AND NOT gModeControlInterface.Parameters.DownstreamIgnored);
	DownstreamSensorTimer();
	gIO.DIs.DownstreamSensor := DownstreamSensorTimer.Q;
	DownstreamBlocked := gIO.DIs.DownstreamSensor AND gRamAtStopPosition;
	IF MoveVelocityRequest AND DownstreamBlocked THEN
		gModeControlInterface.Status.WaitingOnDownstream := TRUE;
		gHMI.Commands.RequestVFDRun := FALSE;
	END_IF
	// If waiting on downstream but the downstream has cleared, then start running 
	IF gModeControlInterface.Status.WaitingOnDownstream AND NOT gIO.DIs.DownstreamSensor THEN
		gModeControlInterface.Status.WaitingOnDownstream := FALSE;
		gHMI.Commands.RequestVFDRun := TRUE;
		// Otherwise, if the stop button is pressed, clear the waiting signal
	ELSIF gHMI.Commands.RequestStop THEN
		gModeControlInterface.Status.WaitingOnDownstream := FALSE;
	END_IF	
 
 
	
	//==========================================================================================================================================================
	
	//PHOTO EYES SETTING AND RESETTING
	IF (gIO.DIs.AdhesivePhotoEye) THEN 
		PhotoEyeSeen := TRUE;
	END_IF
    IF gIO.DIs.BodyDetect THEN
        PhotoEyeSeen := FALSE;
    END_IF
	
    //0047
    //Latch the encoder position. this marks the start of the glue cycle
    Rtrig_PhotoEyeSeen(CLK := PhotoEyeSeen);
    IF (Rtrig_PhotoEyeSeen.Q AND ((gHMI.Commands.SelectAutoMode AND gHMI.Commands.RequestVFDRun) OR (gCyclesToFinish > 0))) THEN
        gAdhesiveCtrlInterface.Status.LatchedEncoderPos := LREAL_TO_REAL(gServoFeedInterface.Status.ActualPosition);
        DistanceAfterLatch                              := 0;
        OldEncoderPos                                   := LREAL_TO_REAL(gServoFeedInterface.Status.ActualPosition);
    END_IF
	
    //0048
    //Determine how far the ram has moved since the photo eye was last seen
    DistanceAfterLatch := (ComputeDistanceMoved(LREAL_TO_REAL(gServoFeedInterface.Status.ActualPosition),OldEncoderPos) + DistanceAfterLatch);
	
    //0049
    OldEncoderPos := LREAL_TO_REAL(gServoFeedInterface.Status.ActualPosition);

	//BODY PANEL TIMEOUT 0052
	//If the machine is running and a box has passed the photoeyes, but hasn't cleared the photo eye for LowFeedJamTime amount of time, then raise an alarm
    BodyPanelTimeout.PT := gHMI.Parameters.LowFeedJamTime;
    BodyPanelTimeout.IN := (gHMI.Commands.RequestVFDRun AND gIO.DIs.BodyDetect);
    BodyPanelTimeout();
    IF BodyPanelTimeout.Q THEN
        BodyCheckError := TRUE;
    ELSIF gHMI.Commands.RequestReset THEN
        BodyCheckError := FALSE;
	END_IF
	
	//INFEED TIMEOUT
	//If the machine is running and a box hasnt passed the photoeyes for LowFeedJamTime amount of time, then raise an alarm
	InfeedTimeout.PT := gHMI.Parameters.TopFeedJamTime;
	InfeedTimeout.IN := (gHMI.Commands.RequestVFDRun AND NOT gIO.DIs.BodyDetect);
	InfeedTimeout();
	IF InfeedTimeout.Q THEN
		InfeedCheckError := TRUE;
	ELSIF gHMI.Commands.RequestReset THEN
		InfeedCheckError := FALSE;
	END_IF
	
    //0053 AND 0054 LUBE COUNTER
    LubricationOK := (LubeCount < gHMI.Parameters.SetCycleCount);
	
    Rtrig_LubricationCounter(CLK := gIO.DIs.LubricationCounter);
    LubricationCounter.CU    := Rtrig_LubricationCounter.Q;
    LubricationCounter.RESET := LubeReset;
    LubricationCounter.PV    := UDINT_TO_UINT(gHMI.Parameters.LubeCycleCount);
    LubricationCounter();
    CountReset               := LubricationCounter.Q;
	
    //0055 COUNT AND LUBE COUNT RESET
    LubeReset := CountReset;
    IF CountReset THEN
        LubeCount := 0;
	END_IF  
	
	//make it a fault if the system is reuqested to run while any hopper is off
	IF gHMI.Commands.RequestVFDRun AND (gIO.DIs.LeftHopperMotor_OFF OR gIO.DIs.RightHopperMotor_OFF OR gIO.DIs.BodyHopperMotor_OFF) THEN
		HopperRunningError := TRUE;
	ELSIF gHMI.Commands.RequestReset THEN
		HopperRunningError := FALSE;
	END_IF
    
    
    //Disabled this due to the error triggering and not clearing after a few hours
//    PnPTimeout.PT := T#3600s;
//    PnPTimeout.IN := NOT gHMI.Commands.RequestVFDRun AND (gHMI.Commands.RequestStop OR gServoPnPInterface.Status.PoweredOn);
//    PnPTimeout();
 //   IF PnPTimeout.Q THEN
//        PnPTimeoutError := TRUE;
//    ELSIF gHMI.Commands.RequestReset THEN
//        PnPTimeoutError := FALSE;
//    END_IF
    
	
    
	END_PROGRAM