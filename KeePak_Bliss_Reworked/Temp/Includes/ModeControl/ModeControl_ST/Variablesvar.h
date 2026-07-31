/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1753370115_6_
#define _BUR_1753370115_6_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
/*Constant Ftrig_BlowOffOnManual not declared. Initialized constants from structured datatypes cannot be used in ANSI C programs / libraries. See Automation Help for details.*/

#else

#endif


/* Variables */
_BUR_LOCAL plcbit Y_Trigger;
_BUR_LOCAL struct TP Y_Down_Pulse;
_BUR_LOCAL struct TON Y_Delay;
_BUR_LOCAL plcbit Vacuum_ON;
_BUR_LOCAL struct TON VacuumTimer;
_BUR_LOCAL plctime VacuumOffTime;
_BUR_LOCAL struct TON VaccumStopTimer;
_BUR_LOCAL struct TON TON_RamDelay;
_BUR_LOCAL struct TON TON_BlowOff;
_BUR_LOCAL plcbit StopTriggerByDownstream;
_BUR_LOCAL plcbit StopPositionDwellExpire;
_BUR_LOCAL plcbit StopFeedServo;
_BUR_LOCAL unsigned long status;
_BUR_LOCAL plcbit SideCheckErrorActive;
_BUR_LOCAL plcbit SideCheckError;
_BUR_LOCAL struct TON ShowModeTimer;
_BUR_LOCAL struct TON SafetyResetRequestTimer;
_BUR_LOCAL plcbit SafetyNotOKActive;
_BUR_LOCAL struct R_TRIG Rtrig_RequestVFDRun;
_BUR_LOCAL struct R_TRIG Rtrig_RequestStop;
_BUR_LOCAL struct R_TRIG Rtrig_PhotoEyeSeen;
_BUR_LOCAL struct R_TRIG Rtrig_LubricationCounter;
_BUR_LOCAL struct R_TRIG Rtrig_InfeedBoxPresent;
_BUR_LOCAL struct R_TRIG Rtrig_HopperLow;
_BUR_LOCAL struct R_TRIG Rtrig_FeedServoTMR;
_BUR_LOCAL struct R_TRIG Rtrig_DownstreamBlocked;
_BUR_LOCAL struct R_TRIG Rtrig_BlowOffTrigger;
_BUR_LOCAL struct R_TRIG Rtrig_BlowOffManual;
_BUR_LOCAL struct R_TRIG Rtrig_AlarmActive;
_BUR_LOCAL struct TON RightHopperLowTMR;
_BUR_LOCAL plcbit RightHopperLowAlarm;
_BUR_LOCAL plcbit Return_Trigger;
_BUR_LOCAL plcbit RearEStopNotOKActive;
_BUR_LOCAL unsigned long RamCycleCount;
_BUR_LOCAL plcbit RamAtStopPosition;
_BUR_LOCAL plcbit PnPTimeoutError;
_BUR_LOCAL struct TON PnPTimeout;
_BUR_LOCAL plctime PickDwellTime;
_BUR_LOCAL plcbit PickAndPlaceHasBox;
_BUR_LOCAL struct TON PickAndPlaceDwellTimer;
_BUR_LOCAL plcbit PickAndPlaceDwelling;
_BUR_LOCAL struct TON PhotoEyeTimeout;
_BUR_LOCAL plcbit PhotoEyeCheckErrorActive;
_BUR_LOCAL float OldEncoderPos;
_BUR_LOCAL plcbit MoveVelocityRequest;
_BUR_LOCAL struct CTU LubricationCounter;
_BUR_LOCAL plcbit LubeReset;
_BUR_LOCAL struct TON LeftHopperLowTMR;
_BUR_LOCAL plcbit LeftHopperLowAlarm;
_BUR_LOCAL struct TON InfeedTimeout;
_BUR_LOCAL plcbit InfeedCheckError;
_BUR_LOCAL plcbit InBlissSidePanelCheckWindow;
_BUR_LOCAL plcbit HopperRunningError;
_BUR_LOCAL plcbit GuardDoorNotOKActive;
_BUR_LOCAL plcbit GluePhotoEyeAlarmActive;
_BUR_LOCAL struct F_TRIG Ftrig_DownstreamBlocked;
_BUR_LOCAL plcbit FrontEStopNotOKActive;
_BUR_LOCAL plcbit ForceBodyPanellError;
_BUR_LOCAL struct TON FeedStopTimer;
_BUR_LOCAL struct TON FeedServoTMR;
_BUR_LOCAL plcbit FeedServoTimeout;
_BUR_LOCAL double FeedServoPosSP;
_BUR_LOCAL double FeedPositionCapture;
_BUR_LOCAL double FeedPosFinal;
_BUR_LOCAL struct TON EuchnerSafeResetTimer;
_BUR_LOCAL struct TON DwellTimer;
_BUR_LOCAL plcbit Dummy;
_BUR_LOCAL struct TON DownstreamSensorTimer;
_BUR_LOCAL struct TON DownstreamSensorONTimer;
_BUR_LOCAL plcbit DownstreamBlocked;
_BUR_LOCAL float DistanceFromStopPosition;
_BUR_LOCAL plcbit CountReset;
_BUR_LOCAL struct TON BoxPickTMR;
_BUR_LOCAL struct TON BodyPanelTimeout;
_BUR_LOCAL struct TON BodyHopperLowTMR;
_BUR_LOCAL plcbit BodyHopperLowAlarm;
_BUR_LOCAL plcbit BodyCheckErrorActive;
_BUR_LOCAL plcbit BodyCheckError;
_BUR_LOCAL plcbit BlowOff_Trigger;
_BUR_LOCAL struct TP BlowOff_Pulse;
_BUR_LOCAL struct TON AirPressureNotOKTimer;
_BUR_LOCAL plcbit AirPressureNotOK;
_BUR_LOCAL plcbit AirPressureAlarmActive;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ModeControl/ModeControl_ST/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1753370115_6_ */

