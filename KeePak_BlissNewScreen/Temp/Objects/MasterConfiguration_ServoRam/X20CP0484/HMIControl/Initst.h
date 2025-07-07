#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_AdhesiveChannelColormaps_typ
#define __AS__TYPE_AdhesiveChannelColormaps_typ
typedef struct AdhesiveChannelColormaps_typ
{	unsigned char Delay[4];
	unsigned char Glue[4];
} AdhesiveChannelColormaps_typ;
#endif

#ifndef __AS__TYPE_AdhesiveChannelDatapoints_typ
#define __AS__TYPE_AdhesiveChannelDatapoints_typ
typedef struct AdhesiveChannelDatapoints_typ
{	unsigned short Delay[4];
	unsigned short Glue[4];
	unsigned short RowLabel;
} AdhesiveChannelDatapoints_typ;
#endif

#ifndef __AS__TYPE_BitmapSelectDatapoints_typ
#define __AS__TYPE_BitmapSelectDatapoints_typ
typedef struct BitmapSelectDatapoints_typ
{	unsigned char AlarmActive;
	plcbit ResetPress;
	plcbit RunPress;
	plcbit StopPress;
	plcbit VacuumPress;
} BitmapSelectDatapoints_typ;
#endif

#ifndef __AS__TYPE_ColorMapDatapoints_typ
#define __AS__TYPE_ColorMapDatapoints_typ
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
#endif

#ifndef __AS__TYPE_HMIControl_Commands_typ
#define __AS__TYPE_HMIControl_Commands_typ
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
#endif

#ifndef __AS__TYPE_HMIControl_Parameters_typ
#define __AS__TYPE_HMIControl_Parameters_typ
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
#endif

#ifndef __AS__TYPE_StatusDatapoints_typ
#define __AS__TYPE_StatusDatapoints_typ
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
#endif

#ifndef __AS__TYPE_HMIControl_typ
#define __AS__TYPE_HMIControl_typ
typedef struct HMIControl_typ
{	BitmapSelectDatapoints_typ BitmapSelectDatapoints;
	ColorMapDatapoints_typ ColorMapDatapoints;
	HMIControl_Commands_typ Commands;
	HMIControl_Parameters_typ Parameters;
	StatusDatapoints_typ StatusDatapoints;
} HMIControl_typ;
#endif

#ifndef __AS__TYPE_LightStack_typ
#define __AS__TYPE_LightStack_typ
typedef enum LightStack_typ
{	LIGHTSTACK_PATLITE = 1,
	LIGHTSTACK_TRI = 0,
} LightStack_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_Commands_typ
#define __AS__TYPE_ModeCtrlInterface_Commands_typ
typedef struct ModeCtrlInterface_Commands_typ
{	plcbit ForceSafetyReset;
	plcbit Reset;
	plcbit Run;
	plcbit SetAutoMode;
	plcbit SetJogMode;
	plcbit Stop;
	plcbit SetShowMode;
} ModeCtrlInterface_Commands_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_Parameters_typ
#define __AS__TYPE_ModeCtrlInterface_Parameters_typ
typedef struct ModeCtrlInterface_Parameters_typ
{	plcbit BottomSensor;
	unsigned long DownstreamClear;
	plcbit DownstreamIgnored;
	unsigned long DownstreamTimeout;
	unsigned long DwellTime;
	float InPositionTolerance;
	LightStack_typ LightStackSelection;
	unsigned char MachineType;
	unsigned short MaxPPM;
	unsigned short MinPPM;
	unsigned short PiecesPerMinute;
	plcbit SideSensors;
	float StopPosition;
	unsigned long VaccumStopTime;
	unsigned long SidePickTime;
} ModeCtrlInterface_Parameters_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_Status_typ
#define __AS__TYPE_ModeCtrlInterface_Status_typ
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
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_typ
#define __AS__TYPE_ModeCtrlInterface_typ
typedef struct ModeCtrlInterface_typ
{	ModeCtrlInterface_Commands_typ Commands;
	ModeCtrlInterface_Parameters_typ Parameters;
	ModeCtrlInterface_Status_typ Status;
} ModeCtrlInterface_typ;
#endif

_GLOBAL unsigned char gActivePage;
_GLOBAL HMIControl_typ gHMI;
_GLOBAL ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL unsigned char HIDE;
_GLOBAL unsigned char LOCK;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS_M1;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
_GLOBAL unsigned char OK;
