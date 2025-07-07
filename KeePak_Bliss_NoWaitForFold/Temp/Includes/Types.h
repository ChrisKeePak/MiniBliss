/* Automation Studio generated header file */
/* Do not edit ! */
/* Types  */

#ifndef _TYPES_
#define _TYPES_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "MpAxis.h"
#endif
#ifdef _SG4
		#include "MpAxis.h"
#endif
#ifdef _SGC
		#include "MpAxis.h"
#endif


/* Datatypes and datatypes of function blocks */
typedef enum AxisInitStates_enum
{	AXIS_INIT_DONE = 500,
	AXIS_INIT_RETRIEVE_PARS = 10,
	AXIS_INIT_TRANSFER_PARS = 0,
	AXIS_INIT_WAIT_FOR_INIT = 20
} AxisInitStates_enum;

typedef enum AxisStates_enum
{	AXIS_STATE_INIT = 0,
	AXIS_STATE_POWERON_PREP = 1,
	AXIS_STATE_POWERON = 2,
	AXIS_STATE_COUPLED = 70,
	AXIS_STATE_ERROR = 999,
	AXIS_STATE_HOME = 30,
	AXIS_STATE_IDLE = 80,
	AXIS_STATE_MOVE = 90,
	AXIS_STATE_MOVE_TO_MASTER = 50,
	AXIS_STATE_MOVE_VELOCITY = 91,
	AXIS_STATE_WAIT_FOR_MASTER_READY = 85,
	AXIS_STATE_W_COUPLE = 60,
	AXIS_STATE_W_HOME = 40
} AxisStates_enum;

typedef enum Axis_enums
{	CCW = 4,
	CC_LEFT = 2,
	CC_RIGHT = 3,
	CSW_LEFT = 0,
	CSW_Left11 = 11,
	CSW_Left12 = 12,
	CSW_Left13 = 13,
	CSW_Left14 = 14,
	CSW_Left15 = 15,
	CSW_Left16 = 16,
	CSW_Left17 = 17,
	CSW_Left18 = 18,
	CSW_Left19 = 19,
	CSW_RIGHT = 1,
	FOLDING_ARM_DA_LEFT = 7,
	FOLDING_ARM_DA_RIGHT = 8,
	FOLDING_BAR = 5,
	FOLDING_TOOL_HA_LEFT = 9,
	FOLDING_TOOL_HA_RIGHT = 10,
	FTCL = 6
} Axis_enums;

typedef enum FolderTypeSelection_enum
{	FOLDER_LINMOT = 1,
	FOLDER_PNEUMATIC = 0
} FolderTypeSelection_enum;

typedef enum LightStack_typ
{	LIGHTSTACK_PATLITE = 1,
	LIGHTSTACK_TRI = 0
} LightStack_typ;

typedef enum LinMotState_enum
{	STATE_ERROR,
	STATE_HOME_CHECK,
	STATE_HOME_RESTORE,
	STATE_HOME_STANDBY,
	STATE_HOME_TORQUE,
	STATE_INIT,
	STATE_IS_HOMED,
	STATE_JOG_NEG,
	STATE_JOG_POS,
	STATE_MOVE,
	STATE_READY
} LinMotState_enum;

typedef enum NordsonFeedbackSelection_enum
{	NORDSON_HARDWIRE = 0,
	NORDSON_MODBUSTCP = 1
} NordsonFeedbackSelection_enum;

typedef enum NumaticsTypeSelection_enum
{	NUMATICS_HARDWIRE,
	NUMATICS_POWERLINK
} NumaticsTypeSelection_enum;

typedef enum VacCtrlConfig_enum
{	VAC_MOTOR = 0,
	VAC_VENTURI = 1
} VacCtrlConfig_enum;

typedef struct AdhesCtrlInterface_Commands_typ
{	plcbit MelterOn;
	plcbit MelterStandbyOff;
	plcbit MelterStandbyOn;
	plcbit PumpsOn;
	plcbit PurgeChannel1;
	plcbit PurgeChannel2;
	plcbit PurgeChannel3;
	plcbit PurgeChannel4;
	plcbit WriteChannelTemp;
} AdhesCtrlInterface_Commands_typ;

typedef struct AdhesivePattern_typ
{	float DelayDistance[4];
	float GlueOnDistance[4];
} AdhesivePattern_typ;

typedef struct AdhesivePatternCollections_typ
{	struct AdhesivePattern_typ AdhesivePatterns[4];
} AdhesivePatternCollections_typ;

typedef struct NordsonData_typ
{	unsigned long AdhesiveUsePerHour;
	plcbit Alert;
	plcbit ByPassFeedback;
	unsigned short ChannelActTemp[6];
	signed long ChannelDataCmpResult;
	unsigned long ChannelDataSize;
	unsigned short ChannelSetTempActual[6];
	unsigned short ChannelSetTempRequested[6];
	plcbit CommFault;
	plcbit CommFaultInDataValue;
	unsigned char ConsecutiveErrorCount;
	plctime FeedbackTime;
	plcbit HeatUpPhaseActive;
	unsigned short HoseSetTemp;
	plcbit MelterIsOn;
	unsigned short MelterStatus;
	plcbit PumpStartUpProtectionOn;
	plcbit ShutDown;
	plctime StandbyTimeoutTime;
	unsigned char TempUnit;
	plcbit UnitFaulted;
	plcbit UnitReady;
} NordsonData_typ;

typedef struct AdhesCtrlInterface_Pars_typ
{	struct AdhesivePatternCollections_typ SavedPatterns[4];
	struct AdhesivePattern_typ AdhesivePatterns[4];
	struct AdhesivePattern_typ AdhesiveHMIPatterns[4];
	float StitchPercentage;
	signed short ChannelModulationCtrl[4];
	float BeadLengths[4];
	plcbit FeedbackIsHardwire;
	plcbit FeedbackIsModbusTCP;
	struct NordsonData_typ NordsonComms;
	enum NordsonFeedbackSelection_enum NordsonFeedbackSelection;
	unsigned char NumAdhesiveChannels;
	unsigned char PatternSelection;
} AdhesCtrlInterface_Pars_typ;

typedef struct AdhesCtrlInterface_Status_typ
{	plcbit AlarmActive;
	plcbit ATS_AddOnOverLimit;
	plcbit ATS_AddOnUnderLimit;
	plcbit FeederFault;
	plcbit GlueApplicationAllowed;
	float GlueCyclePos;
	float LatchedEncoderPos;
	plcbit LowLevel;
	plcbit NordsonInStandby;
	plcbit ServiceNeeded;
	plcbit UnitFault;
	plcbit UnitReady;
} AdhesCtrlInterface_Status_typ;

typedef struct AdhesiveChannelColormaps_typ
{	unsigned char Delay[4];
	unsigned char Glue[4];
} AdhesiveChannelColormaps_typ;

typedef struct AdhesiveChannelDatapoints_typ
{	unsigned short Delay[4];
	unsigned short Glue[4];
	unsigned short RowLabel;
} AdhesiveChannelDatapoints_typ;

typedef struct AdhesiveCtrlInterface_typ
{	struct AdhesCtrlInterface_Commands_typ Commands;
	struct AdhesCtrlInterface_Pars_typ Parameters;
	struct AdhesCtrlInterface_Status_typ Status;
} AdhesiveCtrlInterface_typ;

typedef struct AlarmListAdapter_typ
{	plcstring Acknowledged[50][11];
	plcstring Active[50][11];
	plcstring Code[50][11];
} AlarmListAdapter_typ;

typedef struct Axis_Interface_Comds_ToMapp_typ
{	plcbit CoupleToMaster;
	plcbit Home;
	plcbit JogNeg;
	plcbit JogPos;
	plcbit LoadConfig;
	plcbit MoveAbs;
	plcbit MoveAdditive;
	plcbit MoveVelocity;
	plcbit Power;
	plcbit SaveConfig;
	plcbit Stop;
	plcbit TorqueLimitingOn;
	plcbit Update;
} Axis_Interface_Comds_ToMapp_typ;

typedef struct Axis_Interface_Commands_typ
{	plcbit Init;
	plcbit MoveVelocityTrigStop;
	plcbit RequestCoupleToMaster;
	plcbit RequestHome;
	plcbit RequestJogNeg;
	plcbit RequestJogPos;
	plcbit RequestMoveAbs;
	plcbit RequestMoveAdditive;
	plcbit RequestMoveVelocity;
	unsigned char Stop;
	struct Axis_Interface_Comds_ToMapp_typ ToMapp;
} Axis_Interface_Commands_typ;

typedef struct Axis_Interface_Parameters_typ
{	struct MpAxisBasicConfigType AxisAndDrivePars;
	unsigned long CouplingMaster;
	struct MpAxisCouplingParType CouplingParameters;
	struct MpAxisBasicParType MovementParameters;
	float TriggerDistance;
} Axis_Interface_Parameters_typ;

typedef struct Axis_Interface_Status_typ
{	double ActualTorque;
	double ActualPosition;
	float ActualSpeed;
	plcbit AxisInitialized;
	plcstring AxisState[51];
	plcbit ConfigCommandDone;
	plcbit DefaultRecipeLoaded;
	plcbit Error;
	plcbit Homed;
	plcbit InMotion;
	plcbit InPosition;
	plcbit InSync;
	plcbit MappCommandBusy;
	plcbit MoveComplete;
	plcbit PoweredOn;
	plcbit ReadyToPowerOn;
	plcbit TriggerMoveDone;
	plcbit AxisBasicActive;
	plcbit ClearOfRoller;
	unsigned char PositiveStatusID;
	unsigned long StatusSeverity;
	unsigned short StatusCode;
	signed long InternalID;
	unsigned long InternalSeverity;
	unsigned long PositiveInternalFacility;
	unsigned short InternalCode;
	unsigned long ExecutingCmd;
} Axis_Interface_Status_typ;

typedef struct Axis_Interface_typ
{	struct Axis_Interface_Commands_typ Commands;
	struct Axis_Interface_Parameters_typ Parameters;
	struct Axis_Interface_Status_typ Status;
} Axis_Interface_typ;

typedef struct BitmapSelectDatapoints_typ
{	unsigned char AlarmActive;
	plcbit ResetPress;
	plcbit RunPress;
	plcbit StopPress;
	plcbit VacuumPress;
} BitmapSelectDatapoints_typ;

typedef struct Channel_typ
{	float ActualPressure;
	float PressureSetpoint;
} Channel_typ;

typedef struct ColorMapDatapoints_typ
{	struct AdhesiveChannelColormaps_typ AdhesiveChannelsColormaps[4];
	unsigned char AdhesiveSystemOK;
	unsigned char AdhesiveUnitFault;
	unsigned char AdhesiveUnitFeederFault;
	unsigned char AdhesiveUnitLevelLow;
	unsigned char AdhesiveUnitReady;
	unsigned char AdhesiveUnitServiceNeeded;
	unsigned char AdhesiveUseageLow;
	unsigned char AirPressureOK;
	unsigned char ATSAddOnOver;
	unsigned char ATSAddOnUnder;
	unsigned char AutoModeSelected;
	unsigned char DownstreamSensorOK;
	unsigned char DriveFaultOK;
	unsigned char GlueSystemOK;
	unsigned char JogModeSelected;
	unsigned char NordsonEditTemps;
	unsigned char RecipeLoaded;
	unsigned char RecipeSystemBusy;
	unsigned char SafetyOK;
	unsigned char VacuumOK;
	unsigned char VacuumPressureOK;
	unsigned char VacuumPumpOn;
	unsigned char Valve1OK;
	unsigned char Valve2OK;
	unsigned char Valve3OK;
	unsigned char Valve4OK;
} ColorMapDatapoints_typ;

typedef struct SSI_Paraller_typ
{	plcbit Bits[16];
	plcbit FeedBits[16];
	plcbit RamBits[16];
} SSI_Paraller_typ;

typedef struct DigitalInputs_typ
{	plcbit AdhesiveLevelLow;
	plcbit AdhesivePhotoEye;
	plcbit AdhesivePhotoEye_2;
	plcbit AdhesiveUnitNotFaulted;
	plcbit AdhesiveUnitReady;
	plcbit AirPressureOK;
	plcbit BodyDetect;
	plcbit DownstreamSensor;
	plcbit DownstreamSensorRaw;
	plcbit LeftEndDetect;
	plcbit LowAdhesiveUseage;
	unsigned short Pneumatics580StatusWord3;
	plcbit PnuematicsHWStatusV0;
	plcbit PnuematicsHWStatusV2;
	plcbit PnuematicsHWStatusV4;
	plcbit PnuematicsHWStatusV6;
	plcbit RightEndDetect;
	plcbit SafetyOK;
	struct SSI_Paraller_typ SSI_Parallel;
	plcbit VacHigh;
	plcbit VacLow;
	plcbit VacuumPressureOK;
	plcbit VacuumTempOK;
	plcbit X_PickRetracted;
	plcbit X_PickExtended;
	plcbit Y_PickRetract;
	plcbit X_BlowOff;
	plcbit BodyHopperLow;
	plcbit LeftHopperLow;
	plcbit RightHopperLow;
	plcbit BodyHopperMotor_RUN;
	plcbit LeftHopperMotor_RUN;
	plcbit RightHopperMotor_RUN;
	plcbit LubricationCounter;
	plcbit BodyHopperMotor_OFF;
	plcbit LeftHopperMotor_OFF;
	plcbit RightHopperMotor_OFF;
	plcbit DownstreamSensorON;
	plcbit BodyPickHome;
	plcbit BodyVacuumAchieved;
	plcbit SidePickVacuumAchieved;
	plcbit SideFoldSensor;
	plcbit SideFoldVacuumAchieved;
} DigitalInputs_typ;

typedef struct DigitalOutputs_typ
{	plcbit AirOn;
	plcbit AmberLightStack;
	plcbit BlowOffOn;
	plcbit BottomFolder;
	plcbit CompressionAirOn;
	plcbit GlueChannel1;
	plcbit GlueChannel2;
	plcbit GlueChannel3;
	plcbit GlueChannel4;
	plcbit GreenLightStack;
	plcbit HighCompression;
	plcbit LowCompression;
	plcbit PickAndPlace_X;
	unsigned short Pneumatics580ControlWord1;
	plcbit PnuematicsValve0;
	plcbit PnuematicsValve2;
	plcbit PnuematicsValve4;
	plcbit PnuematicsValve6;
	plcbit PushOn;
	plcbit RedLightStack;
	plcbit ResetEuchner;
	plcbit ResetSafety;
	plcbit TopFolder;
	plcbit VacuumOn;
	plcbit ZeroEncoder;
	plcbit SidePanelVacOn;
	plcbit SidePanelVacBlowOff;
	plcbit X_PickSolenoid;
	plcbit Y_PickSolenoid;
	plcbit OutConveyorOn_1;
	plcbit OutConveyorOn_2;
	plcbit OutConveyorOn_3;
	plcbit BodyVacuumOn;
	plcbit BodyKicker;
	plcbit SidePickCylinder;
	plcbit LeftSideFoldCylinder;
	plcbit RightSideFoldCylinder;
	plcbit SidePanelHoldVacuum;
	plcbit FoldingHoldVacuum;
	plcbit CompressionCylinder;
} DigitalOutputs_typ;

typedef struct Encoders_typ
{	unsigned long SickSSIPos;
	float SickSSIPosDegrees;
	unsigned long FeedEncoderPos;
	float FeedEncoderPosDegrees;
	unsigned long RamEncoderPos;
	float RamEncoderPosDegrees;
} Encoders_typ;

typedef struct LinAxisCommand_typ
{	plcbit ErrorReset;
	plcbit Home;
	plcbit HomeRequest;
	plcbit JogNegative;
	plcbit JogNegativeRequest;
	plcbit JogPositive;
	plcbit JogPositiveRequest;
	plcbit MoveAbsolute;
	plcbit MoveAbsoluteRequest;
	plcbit MoveAdditive;
	plcbit Power;
	plcbit SaveConfig;
	plcbit Stop;
} LinAxisCommand_typ;

typedef struct LinAxisParameter_typ
{	float ExtendAccel;
	float ExtendDecel;
	double ExtendPos;
	float ExtendSpeed;
	struct MpAxisBasicConfigType MpBasicConfig;
	struct MpAxisBasicParType MpBasicParameters;
	float RetractAccel;
	float RetractDecel;
	double RetractPos;
	float RetractSpeed;
} LinAxisParameter_typ;

typedef struct LinAxisStatus_typ
{	plcbit EndlessPosValid;
	plcbit Error;
	signed long ErrorId;
	plcbit HomeCheck;
	struct MpAxisBasicInfoType Info;
	plcbit InPosition;
	plcbit IsHomed;
	plcbit MoveActive;
	double Position;
	plcbit PowerOn;
	plcbit Ready;
	plcbit Stopped;
	float Velocity;
} LinAxisStatus_typ;

typedef struct LinAxis_typ
{	struct LinAxisCommand_typ Command;
	struct LinAxisParameter_typ Parameter;
	struct LinAxisStatus_typ Status;
} LinAxis_typ;

typedef struct FoldpushCtrlInterface_Pars_typ
{	float BottomFolderOffPos;
	float BottomFolderOnPos;
	enum FolderTypeSelection_enum FolderTypeSelection;
	float HighCompressionOffPos;
	float HighCompressionOnPos;
	struct LinAxis_typ LinMotBotFolder;
	struct LinAxis_typ LinMotTopFolder;
	float LowCompressionOffPos;
	float LowCompressionOnPos;
	enum NumaticsTypeSelection_enum NumaticsTypeSelection;
	float PushOff;
	float PushOn;
	float TopFolderOffPos;
	float TopFolderOnPos;
} FoldpushCtrlInterface_Pars_typ;

typedef struct FoldpushCtrlInterface_Status_typ
{	plcbit BottomFoldValveStatus;
	plcbit CompOnValveStatus;
	plcbit CompressionAllowed;
	plcbit FoldersActuationAllowed;
	plcbit HardwireConfig;
	plcbit LinMotConfig;
	plcbit PneumaticConfig;
	plcbit PowelinkConfig;
	plcbit PushValveStatus;
	plcbit TopFoldValveStatus;
} FoldpushCtrlInterface_Status_typ;

typedef struct FoldPushCtrlInt_Commands_typ
{	plcbit placehold;
} FoldPushCtrlInt_Commands_typ;

typedef struct FoldPushCtrlInterface_typ
{	struct FoldPushCtrlInt_Commands_typ Commands;
	struct FoldpushCtrlInterface_Pars_typ Parameters;
	struct FoldpushCtrlInterface_Status_typ Status;
} FoldPushCtrlInterface_typ;

typedef struct HMIControl_Commands_typ
{	plcbit CancelBoxChange;
	plcbit ConfirmBoxChange;
	plcbit CycleBodyHopper;
	plcbit CycleLeftHopper;
	plcbit CycleRightHopper;
	plcbit CycleServoRam;
	plcbit CycleServoPnP;
	plcbit HomeServoFeed;
	plcbit HomeBodyHopper;
	plcbit HomeLeftHopper;
	plcbit HomeRightHopper;
	plcbit HomeServoRam;
	plcbit HomeServoPnP;
	plcbit JogForward;
	plcbit JogReverse;
	plcbit JogServoFeedNeg;
	plcbit JogServoFeedPos;
	plcbit JogBodyHopperNeg;
	plcbit JogBodyHopperPos;
	plcbit JogLeftHopperNeg;
	plcbit JogLeftHopperPos;
	plcbit JogRightHopperNeg;
	plcbit JogRightHopperPos;
	plcbit JogServoRamNeg;
	plcbit JogServoRamPos;
	plcbit JogServoPnPNeg;
	plcbit JogServoPnPPos;
	plcbit LoadRecipe;
	plcbit LoadRecipeType1;
	plcbit LoadRecipeType2;
	plcbit RequestBoxType1;
	plcbit RequestBoxType2;
	plcbit RequestReset;
	plcbit RequestStop;
	plcbit RequestVacuumOn;
	plcbit RequestVFDRun;
	plcbit SaveRecipe;
	plcbit SelectAutoMode;
	plcbit SelectJogMode;
	plcbit StartServoFeed;
	plcbit StartBodyHopper;
	plcbit StartLeftHopper;
	plcbit StartRightHopper;
	plcbit ZeroEncoder;
	plcbit EnableShowMode;
} HMIControl_Commands_typ;

typedef struct HMIControl_Parameters_typ
{	float ServoFeedAccel;
	float ServoFeedJogVelocity;
	float ServoFeedTorqueLimit;
	float ServoFeedVelocity;
	float BodyHopperAccel;
	unsigned long BodyHopperEndDwellTime;
	float BodyHopperEndPosition;
	float BodyHopperJogVelocity;
	unsigned long BodyHopperStartDwellTime;
	float BodyHopperStartPosition;
	float BodyHopperTorqueLimit;
	float BodyHopperVelocity;
	unsigned long BodyKickerTime;
	unsigned long BodyKickerRetractTime;
	float LeftHopperAccel;
	unsigned long LeftHopperEndDwellTime;
	float LeftHopperEndPosition;
	float LeftHopperJogVelocity;
	unsigned long LeftHopperStartDwellTime;
	float LeftHopperStartPosition;
	float LeftHopperTorqueLimit;
	float LeftHopperVelocity;
	float RightHopperAccel;
	unsigned long RightHopperEndDwellTime;
	float RightHopperEndPosition;
	float RightHopperJogVelocity;
	unsigned long RightHopperStartDwellTime;
	float RightHopperStartPosition;
	float RightHopperTorqueLimit;
	float RightHopperVelocity;
	float ServoRamAccel;
	unsigned long ServoRamEndDwellTime;
	unsigned long ServoRamSidePickTime;
	unsigned long ServoRamSidePickRetractTime;
	unsigned long ServoRamSideFoldTime;
	unsigned long ServoRamSideFoldRetractTime;
	float ServoRamEndPosition;
	float ServoRamFoldStartPos;
	float ServoRamFoldEndPos;
	float ServoRamJogVelocity;
	unsigned long ServoRamStartDwellTime;
	float ServoRamStartPosition;
	float ServoRamTorqueLimit;
	float ServoRamNegativeVelocity;
	float ServoRamSideFormingVelocity;
	float ServoRamBoxFormingVelocity;
	float ServoRamClearPosition;
	float ServoRamMiddlePosition;
	float ServoPnPAccel;
	unsigned long ServoPnPEndDwellTime;
	float ServoPnPEndPosition;
	float ServoPnPVacuumOffPosition;
	float ServoPnPJogVelocity;
	unsigned long ServoPnPStartDwellTime;
	float ServoPnPStartPosition;
	float ServoPnPTorqueLimit;
	float ServoPnPNegativeVelocity;
	float ServoPnPPositiveVelocity;
	unsigned long PickAndPlaceDwell;
	unsigned long BodyHopperDwellTime;
	unsigned long LeftHopperDwellTime;
	unsigned long RightHopperDwellTime;
	unsigned long BodyHopperTimeoutTime;
	unsigned long LeftHopperTimeoutTime;
	unsigned long RightHopperTimeoutTime;
	unsigned long ServoRamTimeoutTime;
	unsigned long AtTorqueTime;
	unsigned long PickDwellTime;
	unsigned long TopFeedJamTime;
	unsigned long VacuumOffTime;
	unsigned long DownPulseTime;
	unsigned long Y_DelayTime;
	unsigned long BlowOffTime;
	unsigned long SetCycleCount;
	unsigned long LubeCycleCount;
	unsigned long LowFeedJamTime;
	unsigned long LowHopperTime;
	unsigned long LowBodyHopperTime;
	unsigned long LowLeftHopperTime;
	unsigned long LowRightHopperTime;
	unsigned long RamDelay;
} HMIControl_Parameters_typ;

typedef struct StatusDatapoints_typ
{	struct AdhesiveChannelDatapoints_typ AdhesiveChannelSDPs[4];
	unsigned short AdhesivePatternDialogSDP;
	unsigned short AdhesivePatternConfirmDialogSDP;
	unsigned short AdhesivePatternConfirmedSDP;
	unsigned short AdhesiveUnitFaultSDP;
	unsigned short AdhesiveUnitLevelLowSDP;
	unsigned short AdhesiveUnitNotReadySDP;
	unsigned short AdhesiveUseageLowSDP;
	unsigned short AutoModeSDP;
	unsigned short BlissSDP;
	unsigned char HardwireValveSDP;
	unsigned short JogStatusDatapoint;
	unsigned short LinMotBotHomeSDP;
	unsigned short LinMotSDP;
	unsigned short LinMotTopHomeSDP;
	unsigned short LinMotTuningSDP;
	unsigned short MaintenanceSDP;
	unsigned short MotorVacuumSDP;
	unsigned short NordsonModbusSDP;
	unsigned short NordsonStandbyOffSDP;
	unsigned short PnuematicFolderSDP;
	unsigned short RecipeDialogSDP;
	unsigned short RecipeIndexSDP;
	unsigned short RecipeReq1SDP;
	unsigned short RecipeReq2SDP;
	unsigned short RestartInhibitSDP;
	unsigned short SafetyStartingSDP;
	unsigned short ServoLayerSDP;
	unsigned short ServoRamHomeSDP;
	unsigned short SmartVacuumLayerSDP;
	unsigned short TraySDP;
	unsigned short VacuumPressureFaultSDP;
	unsigned short VenturiVacuumSDP;
	unsigned short ZeroEncoderSDP;
	unsigned short HopperLowSDP;
	unsigned short HomeServoRamSDP;
	unsigned short LubeSDP;
	unsigned short BodyHopperSwitchSDP;
	unsigned short LeftHopperSwitchSDP;
	unsigned short RightHopperSwitchSDP;
} StatusDatapoints_typ;

typedef struct HMIControl_typ
{	struct BitmapSelectDatapoints_typ BitmapSelectDatapoints;
	struct ColorMapDatapoints_typ ColorMapDatapoints;
	struct HMIControl_Commands_typ Commands;
	struct HMIControl_Parameters_typ Parameters;
	struct StatusDatapoints_typ StatusDatapoints;
} HMIControl_typ;

typedef struct Home_Parameters_typ
{	struct MpAxisHomingType ServoFeed;
	struct MpAxisHomingType BodyHopper;
	struct MpAxisHomingType LeftHopper;
	struct MpAxisHomingType RightHopper;
	struct MpAxisHomingType ServoRam;
	struct MpAxisHomingType ServoPnP;
} Home_Parameters_typ;

typedef struct SafetyStatus_typ
{	plcbit BackEstopOK;
	unsigned short CabinetEStopStatus;
	plcbit FrontEStopOK;
	plcbit GuardDoorsOK;
	plcbit SafetyProgramRunning;
} SafetyStatus_typ;

typedef struct IO_typ
{	struct DigitalInputs_typ DIs;
	struct DigitalOutputs_typ DOs;
	struct Encoders_typ Encoders;
	plcbit ModuleOKs[100];
	struct SafetyStatus_typ SafetyStatus;
} IO_typ;

typedef struct ModeCtrlInterface_Commands_typ
{	plcbit ForceSafetyReset;
	plcbit Reset;
	plcbit Run;
	plcbit SetAutoMode;
	plcbit SetJogMode;
	plcbit Stop;
	plcbit SetShowMode;
} ModeCtrlInterface_Commands_typ;

typedef struct ModeCtrlInterface_Parameters_typ
{	plcbit BottomSensor;
	unsigned long DownstreamClear;
	plcbit DownstreamIgnored;
	unsigned long DownstreamTimeout;
	unsigned long DwellTime;
	float InPositionTolerance;
	enum LightStack_typ LightStackSelection;
	unsigned char MachineType;
	unsigned short MaxPPM;
	unsigned short MinPPM;
	unsigned short PiecesPerMinute;
	plcbit SideSensors;
	float StopPosition;
	unsigned long VaccumStopTime;
	unsigned long SidePickTime;
} ModeCtrlInterface_Parameters_typ;

typedef struct ModeCtrlInterface_Status_typ
{	plcbit AtStopPosition;
	plcbit BlissPanelAlarmActive;
	plcbit Dwelling;
	plcbit DwellModeEnabled;
	plcbit InAutoMode;
	plcbit InBlissPanelWindow;
	plcbit Jogging;
	plcbit MachineIsBliss;
	plcbit Running;
	plcbit WaitingOnDownstream;
} ModeCtrlInterface_Status_typ;

typedef struct ModeCtrlInterface_typ
{	struct ModeCtrlInterface_Commands_typ Commands;
	struct ModeCtrlInterface_Parameters_typ Parameters;
	struct ModeCtrlInterface_Status_typ Status;
} ModeCtrlInterface_typ;

typedef struct NordsonRxPacket_typ
{	unsigned short Byte0_1_Status;
	unsigned char Byte2_Ack_Data_Index;
	unsigned char Byte3_Ack_Channel_Num;
	unsigned short Byte4_5_Read_Data_0;
	unsigned short Byte6_7_Read_Data_1;
	unsigned short Byte8_9_Read_Data_2;
	unsigned short Byte10_11_Read_Data_3;
	unsigned short Byte12_13_Read_Data_4;
	unsigned short Byte18_19_Read_Data_7;
	unsigned short Byte16_17_Read_Data_6;
	unsigned short Byte14_15_Read_Data_5;
} NordsonRxPacket_typ;

typedef struct NordsonTxPacket_typ
{	unsigned char Byte0_MelterControl;
	unsigned char Byte1_Command;
	unsigned char Byte2_Data_Index;
	unsigned char Byte3_Channel_Num;
	unsigned short Byte4_5_WriteData;
	unsigned short Byte6_7_Mot1Spd;
	unsigned short Byte8_9_Mot2Spd;
	unsigned short Byte10_11_Mot3Spd;
	unsigned short Byte12_13_Mot4Spd;
	unsigned short Byte14_15_NotUsed;
} NordsonTxPacket_typ;

typedef struct RamCtrlInterface_Commands_typ
{	plcbit Home;
	plcbit JogNegative;
	plcbit JogPositive;
	plcbit MoveAbsolute;
	plcbit MoveAdditive;
	plcbit MoveVelocity;
	plcbit PowerOn;
	plcbit VFDAlarmReset;
} RamCtrlInterface_Commands_typ;

typedef struct RamCtrlInterface_Parameters_typ
{	float Acceleration;
	float CurrentLimit;
	float GearRatio;
	float JogSpeed;
	float Position;
} RamCtrlInterface_Parameters_typ;

typedef struct RamCtrlInterface_Status_typ
{	double ActualPosition;
	double ActualSpeed;
	plcbit AlarmActive;
	signed short DriveSpeed;
	plcbit Home;
	plcbit InPosition;
	unsigned short MotorCurrent;
	plcbit MoveActive;
	float Position;
	plcbit PoweredOn;
	plcbit Running;
	plcbit Stopped;
	unsigned short STOStatus;
	plcbit VFDAlarmDetected;
	signed short VFDAlarmNumber;
	plcstring VFDAlarmText[81];
} RamCtrlInterface_Status_typ;

typedef struct RamControlInterface_typ
{	struct RamCtrlInterface_Commands_typ Commands;
	struct RamCtrlInterface_Parameters_typ Parameters;
	struct RamCtrlInterface_Status_typ Status;
} RamControlInterface_typ;

typedef struct RecipeCtrlInterface_Commands_typ
{	plcbit ChangeRecipe;
	plcbit LoadRecipe;
	plcbit SaveRecipe;
} RecipeCtrlInterface_Commands_typ;

typedef struct RecipeCtrlInterface_Pars_typ
{	unsigned char RecipeIndex;
	plcstring RecipeName[101];
} RecipeCtrlInterface_Pars_typ;

typedef struct RecipeCtrlInterface_Status_typ
{	plcbit Busy;
	unsigned char LoadedRecipeIndex;
	plcstring LoadedRecipeName[256];
	plcbit RecipeHasBeenLoaded;
} RecipeCtrlInterface_Status_typ;

typedef struct RecipeCtrlInterface_typ
{	struct RecipeCtrlInterface_Commands_typ Commands;
	struct RecipeCtrlInterface_Pars_typ Parameters;
	struct RecipeCtrlInterface_Status_typ Status;
} RecipeCtrlInterface_typ;

typedef struct Register_typ
{	unsigned long ChannelActualPressureWord;
	unsigned long ChannelSetPressureWord;
	unsigned short TankActualLevelWord;
} Register_typ;

typedef struct Tank_typ
{	float ActualLevel;
} Tank_typ;

typedef struct VacCtrlInterface_Commands_typ
{	plcbit BlowOffOnManual;
	plcbit VacuumOn;
	plcbit VenturiOn;
	plcbit VenturiOnManual;
} VacCtrlInterface_Commands_typ;

typedef struct VacCtrlInterface_Parameters_typ
{	unsigned short BlowOffTime;
	plcbit ManualVenturiVacuumOff;
	enum VacCtrlConfig_enum VacConfig;
	float VacOffPos;
	float VacOnPos;
} VacCtrlInterface_Parameters_typ;

typedef struct VacCtrlInterface_Status_typ
{	plcbit AlarmActive;
	float Pressure;
	plcbit StandstillTimout;
	plcbit StandstillTimoutSet;
	plcbit VacLowAlarm;
	plcbit VacLowCycle;
} VacCtrlInterface_Status_typ;

typedef struct VacCtrlInterface_typ
{	struct VacCtrlInterface_Commands_typ Commands;
	struct VacCtrlInterface_Parameters_typ Parameters;
	struct VacCtrlInterface_Status_typ Status;
} VacCtrlInterface_typ;






__asm__(".section \".plc\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Libraries/Constants/Constants.var\\\" scope \\\"global\\\"\\n\"");

__asm__(".previous");

#ifdef __cplusplus
};
#endif
#endif /* _TYPES_ */

