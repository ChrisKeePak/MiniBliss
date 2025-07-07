/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730142839_2_
#define _BUR_1730142839_2_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL plcbit StopFeed;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION ServoRam_EPD;
_GLOBAL plcbit ServoRamTrigger;
_GLOBAL_RETAIN plcbit ServoRamFirstHomeExecuted;
_GLOBAL plcbit ServoRamClear;
_GLOBAL plcbit ServoRamBusy;
_GLOBAL plcbit ServoRamAutoHome;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION ServoPnP_EPD;
_GLOBAL_RETAIN plcbit ServoPnPFirstHomeExecuted;
_GLOBAL plcbit ServoPnPAutoHome;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION ServoFeed_EPD;
_GLOBAL_RETAIN plcbit ServoFeedFirstHomeExecuted;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION RightHopper_EPD;
_GLOBAL_RETAIN plcbit RightHopperFirstHomeExecuted;
_GLOBAL plcbit PhotoEyeSeen;
_GLOBAL struct DUT_NDSN_Flex Melter;
_GLOBAL plcbit LubricationOK;
_GLOBAL_RETAIN unsigned long LubeCount;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION LeftHopper_EPD;
_GLOBAL_RETAIN plcbit LeftHopperFirstHomeExecuted;
_GLOBAL plcbit InfeedBoxPresent;
_GLOBAL plctime HopperLowTime;
_GLOBAL plcbit HoperLowStop;
_GLOBAL struct VacCtrlInterface_typ gVacCtrlInterface;
_GLOBAL unsigned char gUserLevel;
_GLOBAL struct ACP10AXIS_typ gTopLinAxis_1;
_GLOBAL struct ACP10AXIS_typ gTopLinAxis;
_GLOBAL plcbit gSoftwareReset;
_GLOBAL struct ACP10AXIS_typ gServoRam_1;
_GLOBAL struct Axis_Interface_typ gServoRamInterface;
_GLOBAL struct ACP10AXIS_typ gServoRam;
_GLOBAL struct Axis_Interface_typ gServoPnPInterface;
_GLOBAL struct ACP10AXIS_typ gServoPnP;
_GLOBAL struct ACP10AXIS_typ gServoFeed_1;
_GLOBAL struct Axis_Interface_typ gServoFeedInterface;
_GLOBAL struct ACP10AXIS_typ gServoFeed;
_GLOBAL plcbit gSafetyNotOKAlarmActive;
_GLOBAL struct Axis_Interface_typ gRightHopperInterface;
_GLOBAL struct ACP10AXIS_typ gRightHopper;
_GLOBAL_RETAIN struct RecipeCtrlInterface_typ gRecipeInterface;
_GLOBAL plcbit gRamWaitingOnBox;
_GLOBAL struct RamControlInterface_typ gRamCtrlInterface;
_GLOBAL plcbit gRamAtStopPosition;
_GLOBAL plcbit gPusherOn;
_GLOBAL plcbit gPnPAtStopPosition;
_GLOBAL plcstring gPassword[3][81];
_GLOBAL float gOnDelayCompensation;
_GLOBAL float gOffDelayCompensation;
_GLOBAL unsigned long gNumAlarms;
_GLOBAL unsigned long gNumActiveAlarms;
_GLOBAL struct ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL plcbit gLowSeverityAlarmActive;
_GLOBAL struct Axis_Interface_typ gLeftHopperInterface;
_GLOBAL struct ACP10AXIS_typ gLeftHopper;
_GLOBAL plcbit gIsSimulated;
_GLOBAL struct IO_typ gIO;
_GLOBAL struct Home_Parameters_typ gHomingParameters;
_GLOBAL struct HMIControl_typ gHMI;
_GLOBAL plcbit gHighSeverityAlarmActive;
_GLOBAL struct FoldPushCtrlInterface_typ gFoldPushCtrlInterface;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION gEndlessPosTop;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION gEndlessPosBot;
_GLOBAL plcbit gDownstreamBlocked;
_GLOBAL signed char gCyclesToFinish;
_GLOBAL plcbit gCurrentLimitHit;
_GLOBAL unsigned char gChangePage;
_GLOBAL struct ACP10AXIS_typ gBotLinAxis_1;
_GLOBAL struct ACP10AXIS_typ gBotLinAxis;
_GLOBAL struct Axis_Interface_typ gBodyHopperInterface;
_GLOBAL struct ACP10AXIS_typ gBodyHopper;
_GLOBAL plcbit gAutoTune;
_GLOBAL plcbit gAlarmSystemActive;
_GLOBAL plcbit gAlarmActive;
_GLOBAL plcbit gAirPressureAlarmActive;
_GLOBAL struct AdhesiveCtrlInterface_typ gAdhesiveCtrlInterface;
_GLOBAL unsigned char gActivePage;
_GLOBAL plcbit FeedServoBusy;
_GLOBAL double FeedPositionCapture;
_GLOBAL double FeedPosFinal;
_GLOBAL plcbit FeedInCycle;
_GLOBAL float DistanceAfterLatch;
_GLOBAL_RETAIN unsigned long CycleCount;
_GLOBAL plcbit b_ModuleStatus;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION BodyHopper_EPD;
_GLOBAL_RETAIN plcbit BodyHopperFirstHomeExecuted;
_GLOBAL plcbit gForceBodyKicker;
_GLOBAL plcbit GuideCylinder;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730142839_2_ */

