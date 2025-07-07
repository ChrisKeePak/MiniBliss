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

struct SFCActionControl
{	plctime T;
	unsigned char S_FF_SET;
	unsigned char S_FF_R1;
	unsigned char S_FF_Q;
	unsigned char dummy1;
	plctime L_TMR_PT;
	plctime L_TMR_ET;
	plctime L_TMR_STAR;
	unsigned char L_TMR_IN;
	unsigned char L_TMR_Q;
	unsigned char L_TMR_M;
	unsigned char dummy2;
	plctime D_TMR_PT;
	plctime D_TMR_ET;
	plctime D_TMR_STAR;
	unsigned char D_TMR_IN;
	unsigned char D_TMR_Q;
	unsigned char D_TMR_M;
	unsigned char dummy3;
	unsigned char P_TRIG_CLK;
	unsigned char P_TRIG_Q;
	unsigned char P_TRIG_M;
	unsigned char dummy4;
	plctime SD_TMR_PT;
	plctime SD_TMR_ET;
	plctime SD_TMR_STA;
	unsigned char SD_TMR_IN;
	unsigned char SD_TMR_Q;
	unsigned char SD_TMR_M;
	unsigned char dummy5;
	unsigned char SD_FF_SET;
	unsigned char SD_FF_R1;
	unsigned char SD_FF_Q;
	unsigned char DS_FF_SET;
	unsigned char DS_FF_R1;
	unsigned char DS_FF_Q;
	plctime DS_TMR_PT;
	plctime DS_TMR_ET;
	plctime DS_TMR_STA;
	unsigned char DS_TMR_IN;
	unsigned char DS_TMR_Q;
	unsigned char DS_TMR_M;
	unsigned char dummy6;
	unsigned char SL_FF_SET;
	unsigned char SL_FF_R1;
	unsigned char SL_FF_Q;
	unsigned char dummy7;
	plctime SL_TMR_PT;
	plctime SL_TMR_ET;
	plctime SL_TMR_STA;
	unsigned char SL_TMR_IN;
	unsigned char SL_TMR_Q;
	unsigned char SL_TMR_M;
	unsigned char dummy8;
	plcbit N;
	plcbit R0;
	plcbit S0;
	plcbit L;
	plcbit D;
	plcbit P;
	plcbit SD;
	plcbit DS;
	plcbit SL;
	plcbit Q;
};
_BUR_PUBLIC void SFCActionControl(struct SFCActionControl* inst);
#ifndef __AS__TYPE_SFCActionType
#define __AS__TYPE_SFCActionType
typedef struct SFCActionType
{	plcbit x;
	plcbit _x;
	plctime t;
	plctime _t;
	struct SFCActionControl AC;
} SFCActionType;
#endif

#ifndef __AS__TYPE_MpAxisMoveDirectionEnum
#define __AS__TYPE_MpAxisMoveDirectionEnum
typedef enum MpAxisMoveDirectionEnum
{	mpAXIS_DIR_POSITIVE = 0,
	mpAXIS_DIR_NEGATIVE = 1,
	mpAXIS_DIR_CURRENT = 2,
	mpAXIS_DIR_SHORTEST_WAY = 3,
	mpAXIS_DIR_EXCEED_PERIOD = 8,
} MpAxisMoveDirectionEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomeModeEnum
#define __AS__TYPE_MpAxisHomeModeEnum
typedef enum MpAxisHomeModeEnum
{	mpAXIS_HOME_MODE_DEFAULT = 0,
	mpAXIS_HOME_MODE_ABS_SWITCH = 2,
	mpAXIS_HOME_MODE_SWITCH_GATE = 8,
	mpAXIS_HOME_MODE_LIMIT_SWITCH = 3,
	mpAXIS_HOME_MODE_REF_PULSE = 5,
	mpAXIS_HOME_MODE_DIRECT = 1,
	mpAXIS_HOME_MODE_ABSOLUTE = 4,
	mpAXIS_HOME_MODE_ABSOLUTE_CORR = 6,
	mpAXIS_HOME_MODE_DCM = 9,
	mpAXIS_HOME_MODE_DCM_CORR = 10,
	mpAXIS_HOME_MODE_RESTORE_POS = 11,
	mpAXIS_HOME_MODE_AXIS_REF = 12,
	mpAXIS_HOME_MODE_BLOCK_TORQUE = 13,
	mpAXIS_HOME_MODE_BLOCK_DS = 14,
} MpAxisHomeModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomeMoveDirectionEnum
#define __AS__TYPE_MpAxisHomeMoveDirectionEnum
typedef enum MpAxisHomeMoveDirectionEnum
{	mpAXIS_HOME_DIR_POSITIVE = 0,
	mpAXIS_HOME_DIR_NEGATIVE = 1,
} MpAxisHomeMoveDirectionEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomeOptionEnum
#define __AS__TYPE_MpAxisHomeOptionEnum
typedef enum MpAxisHomeOptionEnum
{	mpAXIS_HOME_OPTION_OFF = 0,
	mpAXIS_HOME_OPTION_ON = 1,
} MpAxisHomeOptionEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomingType
#define __AS__TYPE_MpAxisHomingType
typedef struct MpAxisHomingType
{	MpAxisHomeModeEnum Mode;
	double Position;
	float StartVelocity;
	float HomingVelocity;
	double SensorOffset;
	float Acceleration;
	MpAxisHomeMoveDirectionEnum StartDirection;
	MpAxisHomeMoveDirectionEnum HomingDirection;
	MpAxisHomeOptionEnum NoDirectionChange;
	MpAxisHomeMoveDirectionEnum SwitchEdge;
	MpAxisHomeOptionEnum ReferencePulse;
	double ReferencePulseBlockingDistance;
	float TorqueLimit;
	double BlockDetectionPositionError;
	double PositionErrorStopLimit;
	unsigned long EndlessPositionDataRef;
} MpAxisHomingType;
#endif

#ifndef __AS__TYPE_MpAxisJogType
#define __AS__TYPE_MpAxisJogType
typedef struct MpAxisJogType
{	float Acceleration;
	float Deceleration;
	float Velocity;
	double LowerLimit;
	double UpperLimit;
} MpAxisJogType;
#endif

#ifndef __AS__TYPE_MpAxisStopType
#define __AS__TYPE_MpAxisStopType
typedef struct MpAxisStopType
{	float Deceleration;
	plcbit StopInPhase;
	double Phase;
} MpAxisStopType;
#endif

#ifndef __AS__TYPE_MpAxisTriggerSourceEnum
#define __AS__TYPE_MpAxisTriggerSourceEnum
typedef enum MpAxisTriggerSourceEnum
{	mpAXIS_TRIGGER1 = 20,
	mpAXIS_TRIGGER2 = 22,
} MpAxisTriggerSourceEnum;
#endif

#ifndef __AS__TYPE_MpAxisTriggerEdgeEnum
#define __AS__TYPE_MpAxisTriggerEdgeEnum
typedef enum MpAxisTriggerEdgeEnum
{	mpAXIS_TRIGGER_EDGE_POS = 0,
	mpAXIS_TRIGGER_EDGE_NEG = 1,
} MpAxisTriggerEdgeEnum;
#endif

#ifndef __AS__TYPE_MpAxisStopAfterTriggerType
#define __AS__TYPE_MpAxisStopAfterTriggerType
typedef struct MpAxisStopAfterTriggerType
{	plcbit Enable;
	double TriggerDistance;
	plcbit ForceTriggerDistance;
	MpAxisTriggerSourceEnum Source;
	MpAxisTriggerEdgeEnum Edge;
} MpAxisStopAfterTriggerType;
#endif

#ifndef __AS__TYPE_MpAxisTorqueLimitType
#define __AS__TYPE_MpAxisTorqueLimitType
typedef struct MpAxisTorqueLimitType
{	float Limit;
	float Window;
} MpAxisTorqueLimitType;
#endif

#ifndef __AS__TYPE_MpAxisReadInfoModeEnum
#define __AS__TYPE_MpAxisReadInfoModeEnum
typedef enum MpAxisReadInfoModeEnum
{	mpAXIS_READ_OFF = 0,
	mpAXIS_READ_CYCLIC = 1,
	mpAXIS_READ_MULTIPLEXED = 2,
	mpAXIS_READ_POLLING_1s = 3,
	mpAXIS_READ_POLLING_5s = 4,
} MpAxisReadInfoModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisCyclicReadSetupType
#define __AS__TYPE_MpAxisCyclicReadSetupType
typedef struct MpAxisCyclicReadSetupType
{	MpAxisReadInfoModeEnum TorqueMode;
	MpAxisReadInfoModeEnum LagErrorMode;
	MpAxisReadInfoModeEnum MotorTempMode;
	MpAxisReadInfoModeEnum UserChannelMode;
} MpAxisCyclicReadSetupType;
#endif

#ifndef __AS__TYPE_MpAxisAutotuneModeEnum
#define __AS__TYPE_MpAxisAutotuneModeEnum
typedef enum MpAxisAutotuneModeEnum
{	mpAXIS_TUNE_AUTOMATIC = 0,
	mpAXIS_TUNE_SPEED = 2,
	mpAXIS_TUNE_POSITION = 1,
	mpAXIS_TUNE_TEST = 31,
	mpAXIS_TUNE_SPEED_ISQ_F1 = 130,
	mpAXIS_TUNE_SPEED_T_FLTR = 66,
	mpAXIS_TUNE_SPEED_T_FLTR_ISQ_F1 = 194,
	mpAXIS_TUNE_SPEED_FLTR = 6,
	mpAXIS_TUNE_ISQ_F1 = 128,
	mpAXIS_TUNE_ISQ_F1_F2 = 384,
	mpAXIS_TUNE_ISQ_F1_F2_F3 = 896,
	mpAXIS_TUNE_FF = 32,
	mpAXIS_TUNE_FF_ONLY_POS = 33,
	mpAXIS_TUNE_FF_ONLY_NEG = 34,
} MpAxisAutotuneModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisFeedForwardModeEnum
#define __AS__TYPE_MpAxisFeedForwardModeEnum
typedef enum MpAxisFeedForwardModeEnum
{	mpAXIS_FF_DISABLED = 0,
	mpAXIS_FF_BOTH = 1,
	mpAXIS_FF_ONLY_POS = 2,
	mpAXIS_FF_ONLY_NEG = 3,
} MpAxisFeedForwardModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisAutotuneType
#define __AS__TYPE_MpAxisAutotuneType
typedef struct MpAxisAutotuneType
{	MpAxisAutotuneModeEnum Mode;
	MpAxisFeedForwardModeEnum FeedForward;
	plcbit Vertical;
	float MaxCurrentPercent;
	float MaxSpeedPercent;
	double MaxDistance;
	float ProportionalAmplification;
} MpAxisAutotuneType;
#endif

#ifndef __AS__TYPE_MpAxisBasicParType
#define __AS__TYPE_MpAxisBasicParType
typedef struct MpAxisBasicParType
{	float Acceleration;
	float Deceleration;
	float Velocity;
	double Position;
	double Distance;
	MpAxisMoveDirectionEnum Direction;
	MpAxisHomingType Home;
	MpAxisJogType Jog;
	MpAxisStopType Stop;
	MpAxisStopAfterTriggerType StopAfterTrigger;
	MpAxisTorqueLimitType Torque;
	MpAxisCyclicReadSetupType CyclicRead;
	MpAxisAutotuneType Autotune;
} MpAxisBasicParType;
#endif

#ifndef __AS__TYPE_MpAxisCyclicReadValueType
#define __AS__TYPE_MpAxisCyclicReadValueType
typedef struct MpAxisCyclicReadValueType
{	plcbit Valid;
	double Value;
} MpAxisCyclicReadValueType;
#endif

#ifndef __AS__TYPE_MpAxisCyclicReadType
#define __AS__TYPE_MpAxisCyclicReadType
typedef struct MpAxisCyclicReadType
{	MpAxisCyclicReadValueType Torque;
	MpAxisCyclicReadValueType LagError;
	MpAxisCyclicReadValueType MotorTemperature;
	MpAxisCyclicReadValueType UserChannelParameterID;
} MpAxisCyclicReadType;
#endif

#ifndef __AS__TYPE_MpAxisBootPhaseEnum
#define __AS__TYPE_MpAxisBootPhaseEnum
typedef enum MpAxisBootPhaseEnum
{	mpAXIS_BLP_NETWORK_INACTIVE = 0,
	mpAXIS_BLP_NETWORK_INIT_STARTED = 1,
	mpAXIS_BLP_WAIT_INIT_HIGH_PRIO = 5,
	mpAXIS_BLP_HW_WAIT = 9,
	mpAXIS_BLP_HW_LINKED = 10,
	mpAXIS_BLP_HW_START = 20,
	mpAXIS_BLP_HW_UPDATE = 30,
	mpAXIS_BLP_HW_UPDATE_OTHER_DRV = 31,
	mpAXIS_BLP_FW_UPDATE = 40,
	mpAXIS_BLP_FW_UPDATE_OTHER_DRV = 41,
	mpAXIS_BLP_FW_START = 50,
	mpAXIS_BLP_WAIT_INIT_LOW_PRIO = 55,
	mpAXIS_BLP_DOWNLOAD_DEF_PARAMS = 60,
	mpAXIS_BLP_DOWNLOAD_INI_PARAMS = 70,
	mpAXIS_BLP_HW_INFO_FROM_DRIVE = 80,
	mpAXIS_BLP_DONE = 90,
} MpAxisBootPhaseEnum;
#endif

#ifndef __AS__TYPE_MpAxisPlcOpenStateEnum
#define __AS__TYPE_MpAxisPlcOpenStateEnum
typedef enum MpAxisPlcOpenStateEnum
{	mpAXIS_DISABLED = 0,
	mpAXIS_STANDSTILL = 1,
	mpAXIS_ERRORSTOP = 10,
	mpAXIS_STOPPING = 9,
	mpAXIS_DISCRETE_MOTION = 2,
	mpAXIS_CONTINUOUS_MOTION = 3,
	mpAXIS_SYNCHRONIZED_MOTION = 4,
	mpAXIS_HOMING = 5,
} MpAxisPlcOpenStateEnum;
#endif

#ifndef __AS__TYPE_MpAxisDigitalIOStatusType
#define __AS__TYPE_MpAxisDigitalIOStatusType
typedef struct MpAxisDigitalIOStatusType
{	plcbit DriveEnable;
	plcbit HomeSwitch;
	plcbit PositiveLimitSwitch;
	plcbit NegativeLimitSwitch;
	plcbit Trigger1;
	plcbit Trigger2;
} MpAxisDigitalIOStatusType;
#endif

#ifndef __AS__TYPE_MpAxisNetworkTypeEnum
#define __AS__TYPE_MpAxisNetworkTypeEnum
typedef enum MpAxisNetworkTypeEnum
{	mpAXIS_CAN_NETWORK = 0,
	mpAXIS_PLK_NETWORK = 1,
	mpAXIS_SDC_NETWORK = 129,
} MpAxisNetworkTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisDeviceTypeEnum
#define __AS__TYPE_MpAxisDeviceTypeEnum
typedef enum MpAxisDeviceTypeEnum
{	mpAXIS_DEVICE_UNKNOWN = 0,
	mpAXIS_ACOPOS = 1,
	mpAXIS_VIRTUAL = 3,
	mpAXIS_ACOPOSmulti65m = 4,
	mpAXIS_ACOPOSmulti = 5,
	mpAXIS_ACOPOSmulti_PPS = 6,
	mpAXIS_ACOPOSmulti_PS = 2,
	mpAXIS_ACOPOSmicro = 7,
	mpAXIS_ACOPOSmulti65 = 8,
	mpAXIS_ACOPOS_P3 = 12,
	mpAXIS_ACOPOS_SDC = 128,
	mpAXIS_ACOPOS_SIM = 129,
} MpAxisDeviceTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisAddInfoHardwareType
#define __AS__TYPE_MpAxisAddInfoHardwareType
typedef struct MpAxisAddInfoHardwareType
{	unsigned short NodeID;
	unsigned char Channel;
	MpAxisNetworkTypeEnum NetworkType;
	MpAxisDeviceTypeEnum DeviceType;
} MpAxisAddInfoHardwareType;
#endif

#ifndef __AS__TYPE_MpAxisErrorEnum
#define __AS__TYPE_MpAxisErrorEnum
typedef enum MpAxisErrorEnum
{	mpAXIS_NO_ERROR = 0,
	mpAXIS_ERR_ACTIVATION = -1064239103,
	mpAXIS_ERR_MPLINK_NULL = -1064239102,
	mpAXIS_ERR_MPLINK_INVALID = -1064239101,
	mpAXIS_ERR_MPLINK_CHANGED = -1064239100,
	mpAXIS_ERR_MPLINK_CORRUPT = -1064239099,
	mpAXIS_ERR_MPLINK_IN_USE = -1064239098,
	mpAXIS_ERR_PAR_NULL = -1064239097,
	mpAXIS_ERR_CONFIG_NULL = -1064239096,
	mpAXIS_ERR_CONFIG_NO_PV = -1064239095,
	mpAXIS_ERR_CONFIG_LOAD = -1064239094,
	mpAXIS_WRN_CONFIG_LOAD = -2137980917,
	mpAXIS_ERR_CONFIG_SAVE = -1064239092,
	mpAXIS_ERR_CONFIG_INVALID = -1064239091,
	mpAXIS_ERR_AXIS_HANDLE_NULL = -1064074752,
	mpAXIS_WRN_ERROR_TABLE_MISSING = -2137816575,
	mpAXIS_WRN_CFG_WAIT_ERROR_RESET = -2137816574,
	mpAXIS_WRN_CFG_WAIT_POWER_OFF = -2137816573,
	mpAXIS_WRN_CFG_WAIT_STANDSTILL = -2137816572,
	mpAXIS_ERR_PLC_OPEN = -1064074747,
	mpAXIS_WRN_PLC_OPEN = -2137816570,
	mpAXIS_WRN_READ_TORQUE_OFF = -2137816569,
	mpAXIS_ERR_MAX_TORQUE_REACHED = -1064074744,
	mpAXIS_ERR_SLAVE_NOT_FOUND = -1064074732,
	mpAXIS_ERR_MASTER_NOT_FOUND = -1064074731,
	mpAXIS_ERR_WRONG_DENOMINATOR = -1064074730,
	mpAXIS_ERR_WRONG_NUMERATOR = -1064074729,
	mpAXIS_ERR_NO_CAM_NAME = -1064074728,
	mpAXIS_WRN_SLAVE_NOT_READY = -2137816551,
	mpAXIS_ERR_CHECK_SLAVE_STATUS = -1064074726,
	mpAXIS_ERR_CMD_WRONG_AXISTYPE = -1064074725,
	mpAXIS_WRN_PARAMETER_LIMITED = -2137816548,
	mpAXIS_WRN_MULTIPLE_COMMAND = -2137816547,
	mpAXIS_ERR_CAM_PARAMETER = -1064074722,
	mpAXIS_ERR_RECOVERY_NOT_ALLOWED = -1064074721,
} MpAxisErrorEnum;
#endif

#ifndef __AS__TYPE_MpComSeveritiesEnum
#define __AS__TYPE_MpComSeveritiesEnum
typedef enum MpComSeveritiesEnum
{	mpCOM_SEV_SUCCESS = 0,
	mpCOM_SEV_INFORMATIONAL = 1,
	mpCOM_SEV_WARNING = 2,
	mpCOM_SEV_ERROR = 3,
} MpComSeveritiesEnum;
#endif

#ifndef __AS__TYPE_MpAxisStatusIDType
#define __AS__TYPE_MpAxisStatusIDType
typedef struct MpAxisStatusIDType
{	MpAxisErrorEnum ID;
	MpComSeveritiesEnum Severity;
	unsigned short Code;
} MpAxisStatusIDType;
#endif

#ifndef __AS__TYPE_MpComFacilitiesEnum
#define __AS__TYPE_MpComFacilitiesEnum
typedef enum MpComFacilitiesEnum
{	mpCOM_FAC_UNDEFINED = -1,
	mpCOM_FAC_ARCORE = 0,
	mpCOM_FAC_SAFETY1 = 1,
	mpCOM_FAC_SAFETY2 = 2,
	mpCOM_FAC_GMC1 = 96,
	mpCOM_FAC_GMC2 = 97,
	mpCOM_FAC_GMCAXIS = 98,
	mpCOM_FAC_GMCAXESGROUP = 99,
	mpCOM_FAC_GMCARNCGROUP = 103,
	mpCOM_FAC_TRF = 105,
	mpCOM_FAC_MAPP_INTERNAL = 144,
	mpCOM_FAC_MAPP_CORE = 145,
	mpCOM_FAC_MAPP_INFRASTRUCTURE = 146,
	mpCOM_FAC_MAPP_MECHATRONIC = 147,
	mpCOM_FAC_MAPP_INDUSTRY = 148,
} MpComFacilitiesEnum;
#endif

#ifndef __AS__TYPE_MpAxisInternalType
#define __AS__TYPE_MpAxisInternalType
typedef struct MpAxisInternalType
{	signed long ID;
	MpComSeveritiesEnum Severity;
	MpComFacilitiesEnum Facility;
	unsigned short Code;
} MpAxisInternalType;
#endif

#ifndef __AS__TYPE_MpAxisExecutingCmdEnum
#define __AS__TYPE_MpAxisExecutingCmdEnum
typedef enum MpAxisExecutingCmdEnum
{	mpAXIS_CMD_IDLE = 0,
	mpAXIS_CMD_INIT = 1,
	mpAXIS_CMD_HOMING = 2,
	mpAXIS_CMD_STOP = 3,
	mpAXIS_CMD_HALT = 4,
	mpAXIS_CMD_MOVE_VELOCITY = 5,
	mpAXIS_CMD_MOVE_ABSOLUTE = 6,
	mpAXIS_CMD_GEAR_IN = 7,
	mpAXIS_CMD_GEAR_OUT = 8,
	mpAXIS_CMD_CAM_IN = 9,
	mpAXIS_CMD_CAM_OUT = 10,
	mpAXIS_CMD_DOWNLOAD_CAMS = 11,
	mpAXIS_CMD_MOVE_ADDITIVE = 12,
	mpAXIS_CMD_JOG_POSITIVE = 13,
	mpAXIS_CMD_JOG_NEGATIVE = 14,
	mpAXIS_CMD_STOP_PHASED = 15,
	mpAXIS_CMD_AUTOTUNE = 16,
	mpAXIS_CMD_REMOTE_CONTROL = 17,
	mpAXIS_CMD_MOVE_VEL_TRG_STOP = 18,
	mpAXIS_CMD_MOVE_ABS_TRG_STOP = 19,
	mpAXIS_CMD_MOVE_ADD_TRG_STOP = 20,
	mpAXIS_CMD_CAM_SEQUENCER = 50,
	mpAXIS_COUPLING_IDLE = 100,
	mpAXIS_CMD_PHASING = 101,
	mpAXIS_CMD_OFFSET = 102,
	mpAXIS_CMD_ABORT = 103,
	mpAXIS_CMD_UPDATE_GEAR = 104,
	mpAXIS_CMD_UPDATE_CAM = 105,
	mpAXIS_CMD_RECOVERY = 106,
	mpAXIS_CYCLIC_REF_IDLE = 200,
	mpAXIS_CMD_CYC_POSITION = 201,
	mpAXIS_CMD_CYC_VELOCITY = 202,
	mpAXIS_CMD_CYC_TORQUE = 203,
	mpAXIS_CMD_CYC_POSITION_UPDATE = 204,
	mpAXIS_CMD_CYC_VELOCITY_UPDATE = 205,
	mpAXIS_CMD_CYC_TORQUE_UPDATE = 206,
} MpAxisExecutingCmdEnum;
#endif

#ifndef __AS__TYPE_MpAxisDiagExtType
#define __AS__TYPE_MpAxisDiagExtType
typedef struct MpAxisDiagExtType
{	MpAxisStatusIDType StatusID;
	MpAxisInternalType Internal;
	MpAxisExecutingCmdEnum ExecutingCommand;
} MpAxisDiagExtType;
#endif

#ifndef __AS__TYPE_MpAxisBasicInfoType
#define __AS__TYPE_MpAxisBasicInfoType
typedef struct MpAxisBasicInfoType
{	plcbit AxisInitialized;
	plcbit ReadyToPowerOn;
	plcbit JogLimited;
	plcbit TorqueLimitActive;
	plcbit DriveRestarted;
	MpAxisCyclicReadType CyclicRead;
	MpAxisBootPhaseEnum BootState;
	MpAxisPlcOpenStateEnum PLCopenState;
	MpAxisDigitalIOStatusType DigitalInputsStatus;
	MpAxisAddInfoHardwareType HardwareInfo;
	MpAxisDiagExtType Diag;
	plcbit MoveDone;
} MpAxisBasicInfoType;
#endif

#ifndef __AS__TYPE_MpAxisInputSourceEnum
#define __AS__TYPE_MpAxisInputSourceEnum
typedef enum MpAxisInputSourceEnum
{	mpAXIS_INPUT_NONE = 0,
	mpAXIS_INPUT_TRIGGER1 = 1,
	mpAXIS_INPUT_TRIGGER2 = 2,
	mpAXIS_INPUT_POS_LIMIT_SWITCH = 3,
	mpAXIS_INPUT_NEG_LIMIT_SWITCH = 4,
	mpAXIS_INPUT_HOMING_SWITCH = 5,
} MpAxisInputSourceEnum;
#endif

#ifndef __AS__TYPE_MpAxisBaseTypeEnum
#define __AS__TYPE_MpAxisBaseTypeEnum
typedef enum MpAxisBaseTypeEnum
{	mpAXIS_LIMITED_LINEAR = 0,
	mpAXIS_LIMITED_ROTARY = 1,
	mpAXIS_PERIODIC_LINEAR = 2,
	mpAXIS_PERIODIC_ROTARY = 3,
	mpAXIS_LINEAR = 4,
	mpAXIS_ROTARY = 5,
} MpAxisBaseTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisMeasurementUnitEnum
#define __AS__TYPE_MpAxisMeasurementUnitEnum
typedef enum MpAxisMeasurementUnitEnum
{	mpAXIS_UNIT_DEGREES = 0,
	mpAXIS_UNIT_MM = 1,
	mpAXIS_UNIT_GENERIC = 2,
	mpAXIS_UNIT_GENERIC_NOT_SCALED = 3,
} MpAxisMeasurementUnitEnum;
#endif

#ifndef __AS__TYPE_MpAxisSoftwareLimitType
#define __AS__TYPE_MpAxisSoftwareLimitType
typedef struct MpAxisSoftwareLimitType
{	double LowerLimit;
	double UpperLimit;
} MpAxisSoftwareLimitType;
#endif

#ifndef __AS__TYPE_MpAxisPeriodType
#define __AS__TYPE_MpAxisPeriodType
typedef struct MpAxisPeriodType
{	double Period;
} MpAxisPeriodType;
#endif

#ifndef __AS__TYPE_MpAxisVelocityLimitModeEnum
#define __AS__TYPE_MpAxisVelocityLimitModeEnum
typedef enum MpAxisVelocityLimitModeEnum
{	mpAXIS_VEL_MODE_OFF = 0,
	mpAXIS_VEL_MODE_STOP_INIT = 1,
	mpAXIS_VEL_MODE_STOP_AUTO1 = 2,
	mpAXIS_VEL_MODE_STOP_AUTO2 = 3,
} MpAxisVelocityLimitModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisMovementLimitsType
#define __AS__TYPE_MpAxisMovementLimitsType
typedef struct MpAxisMovementLimitsType
{	float VelocityPositive;
	float VelocityNegative;
	float Acceleration;
	float Deceleration;
	float JerkTime;
	double PositionErrorStopLimit;
	float VelocityErrorStopLimit;
	MpAxisVelocityLimitModeEnum VelocityErrorStopLimitMode;
} MpAxisMovementLimitsType;
#endif

#ifndef __AS__TYPE_MpAxisCyclicReadChannelsType
#define __AS__TYPE_MpAxisCyclicReadChannelsType
typedef struct MpAxisCyclicReadChannelsType
{	unsigned short UserChannelParameterID;
} MpAxisCyclicReadChannelsType;
#endif

#ifndef __AS__TYPE_MpAxisBasicConfigAxisType
#define __AS__TYPE_MpAxisBasicConfigAxisType
typedef struct MpAxisBasicConfigAxisType
{	MpAxisBaseTypeEnum BaseType;
	MpAxisMeasurementUnitEnum MeasurementUnit;
	double MeasurementResolution;
	MpAxisSoftwareLimitType SoftwareLimitPositions;
	MpAxisPeriodType PeriodSettings;
	MpAxisMovementLimitsType MovementLimits;
	MpAxisCyclicReadChannelsType CyclicReadChannels;
} MpAxisBasicConfigAxisType;
#endif

#ifndef __AS__TYPE_MpAxisMotorDirectionEnum
#define __AS__TYPE_MpAxisMotorDirectionEnum
typedef enum MpAxisMotorDirectionEnum
{	mpAXIS_DIR_CLOCKWISE = 0,
	mpAXIS_DIR_COUNTERCLOCKWISE = 255,
} MpAxisMotorDirectionEnum;
#endif

#ifndef __AS__TYPE_MpAxisGearboxType
#define __AS__TYPE_MpAxisGearboxType
typedef struct MpAxisGearboxType
{	unsigned long Input;
	unsigned long Output;
	MpAxisMotorDirectionEnum Direction;
	float MaximumTorque;
} MpAxisGearboxType;
#endif

#ifndef __AS__TYPE_MpAxisTransformationType
#define __AS__TYPE_MpAxisTransformationType
typedef struct MpAxisTransformationType
{	double ReferenceDistance;
} MpAxisTransformationType;
#endif

#ifndef __AS__TYPE_MpAxisControllerModeEnum
#define __AS__TYPE_MpAxisControllerModeEnum
typedef enum MpAxisControllerModeEnum
{	mpAXIS_CTRL_MODE_POSITION = 1,
	mpAXIS_CTRL_MODE_POSITION_FF = 33,
	mpAXIS_CTRL_MODE_UF = 7,
} MpAxisControllerModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisControllerPositionType
#define __AS__TYPE_MpAxisControllerPositionType
typedef struct MpAxisControllerPositionType
{	float ProportionalGain;
	float IntegralTime;
	float PredictionTime;
	float TotalDelayTime;
} MpAxisControllerPositionType;
#endif

#ifndef __AS__TYPE_MpAxisControllerSpeedType
#define __AS__TYPE_MpAxisControllerSpeedType
typedef struct MpAxisControllerSpeedType
{	float ProportionalGain;
	float IntegralTime;
	float FilterTime;
} MpAxisControllerSpeedType;
#endif

#ifndef __AS__TYPE_MpAxisControllerFeedForwardType
#define __AS__TYPE_MpAxisControllerFeedForwardType
typedef struct MpAxisControllerFeedForwardType
{	float TorqueLoad;
	float TorquePositive;
	float TorqueNegative;
	float SpeedTorqueFactor;
	float Inertia;
	float AccelerationFilterTime;
} MpAxisControllerFeedForwardType;
#endif

#ifndef __AS__TYPE_MpAxisControllerUFTypeEnum
#define __AS__TYPE_MpAxisControllerUFTypeEnum
typedef enum MpAxisControllerUFTypeEnum
{	mpAXIS_CTRL_UF_LINEAR = 1,
	mpAXIS_CTRL_UF_QUADRATIC = 2,
	mpAXIS_CTRL_UF_LINEAR2 = 3,
} MpAxisControllerUFTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisControllerUFAutoConfigEnum
#define __AS__TYPE_MpAxisControllerUFAutoConfigEnum
typedef enum MpAxisControllerUFAutoConfigEnum
{	mpAXIS_UF_CONFIG_OFF = 0,
	mpAXIS_UF_CONFIG_MOT_PAR = 1,
} MpAxisControllerUFAutoConfigEnum;
#endif

#ifndef __AS__TYPE_MpAxisControllerVoltageFreqType
#define __AS__TYPE_MpAxisControllerVoltageFreqType
typedef struct MpAxisControllerVoltageFreqType
{	MpAxisControllerUFTypeEnum Type;
	MpAxisControllerUFAutoConfigEnum AutoConfig;
	float BoostVoltage;
	float RatedVoltage;
	float RatedFrequency;
	float SlipCompensation;
} MpAxisControllerVoltageFreqType;
#endif

#ifndef __AS__TYPE_MpAxisControllerFilterTypeEnum
#define __AS__TYPE_MpAxisControllerFilterTypeEnum
typedef enum MpAxisControllerFilterTypeEnum
{	mpAXIS_LOOP_FILTER_NO_TRANSFERED = 0,
	mpAXIS_LOOP_FILTER_OFF = 1,
	mpAXIS_LOOP_FILTER_LOW_PASS = 2,
	mpAXIS_LOOP_FILTER_NOTCH = 3,
	mpAXIS_LOOP_FILTER_ZTRANSFER_FUN = 4,
	mpAXIS_LOOP_FILTER_COMPENSATION = 5,
	mpAXIS_LOOP_FILTER_BIQUADRATIC = 6,
	mpAXIS_LOOP_FILTER_LIMITER = 7,
	mpAXIS_LOOP_FILTER_LIMITER_LIN = 8,
	mpAXIS_LOOP_FILTER_LIMITER_RTIME = 9,
} MpAxisControllerFilterTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLowPassType
#define __AS__TYPE_MpAxisLoopFilterLowPassType
typedef struct MpAxisLoopFilterLowPassType
{	float CutOffFrequency;
} MpAxisLoopFilterLowPassType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterNotchType
#define __AS__TYPE_MpAxisLoopFilterNotchType
typedef struct MpAxisLoopFilterNotchType
{	float CenterFrequency;
	float Bandwidth;
} MpAxisLoopFilterNotchType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterZTransferFunType
#define __AS__TYPE_MpAxisLoopFilterZTransferFunType
typedef struct MpAxisLoopFilterZTransferFunType
{	float A0;
	float A1;
	float B0;
	float B1;
	float B2;
} MpAxisLoopFilterZTransferFunType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterCompensationType
#define __AS__TYPE_MpAxisLoopFilterCompensationType
typedef struct MpAxisLoopFilterCompensationType
{	unsigned short MultiplicationFactorParID;
	unsigned short AdditiveValueParID;
} MpAxisLoopFilterCompensationType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterBiquadraticType
#define __AS__TYPE_MpAxisLoopFilterBiquadraticType
typedef struct MpAxisLoopFilterBiquadraticType
{	float FrequencyNumerator;
	float DampingNumerator;
	float FrequencyDenominator;
	float DampingDenominator;
} MpAxisLoopFilterBiquadraticType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLimiterType
#define __AS__TYPE_MpAxisLoopFilterLimiterType
typedef struct MpAxisLoopFilterLimiterType
{	float PositiveLimit;
	float NegativeLimit;
	unsigned short PositiveLimitParID;
	unsigned short NegativeLimitParID;
} MpAxisLoopFilterLimiterType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLimiterLinType
#define __AS__TYPE_MpAxisLoopFilterLimiterLinType
typedef struct MpAxisLoopFilterLimiterLinType
{	unsigned short InputParID;
	float InputLimit;
	float Gradient;
} MpAxisLoopFilterLimiterLinType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLimiterRTimeType
#define __AS__TYPE_MpAxisLoopFilterLimiterRTimeType
typedef struct MpAxisLoopFilterLimiterRTimeType
{	float RiseTime;
	float NormalizedLimit;
} MpAxisLoopFilterLimiterRTimeType;
#endif

#ifndef __AS__TYPE_MpAxisControllerLoopFiltersType
#define __AS__TYPE_MpAxisControllerLoopFiltersType
typedef struct MpAxisControllerLoopFiltersType
{	MpAxisControllerFilterTypeEnum FilterType;
	MpAxisLoopFilterLowPassType LowPass;
	MpAxisLoopFilterNotchType Notch;
	MpAxisLoopFilterZTransferFunType ZTransferFunction;
	MpAxisLoopFilterCompensationType Compensation;
	MpAxisLoopFilterBiquadraticType Biquadratic;
	MpAxisLoopFilterLimiterType Limiter;
	MpAxisLoopFilterLimiterLinType LimiterLinear;
	MpAxisLoopFilterLimiterRTimeType LimiterRiseTime;
} MpAxisControllerLoopFiltersType;
#endif

#ifndef __AS__TYPE_MpAxisControllerType
#define __AS__TYPE_MpAxisControllerType
typedef struct MpAxisControllerType
{	MpAxisControllerModeEnum Mode;
	MpAxisControllerPositionType Position;
	MpAxisControllerSpeedType Speed;
	MpAxisControllerFeedForwardType FeedForward;
	MpAxisControllerVoltageFreqType VoltageFrequency;
	struct MpAxisControllerLoopFiltersType LoopFilters[3];
} MpAxisControllerType;
#endif

#ifndef __AS__TYPE_MpAxisQuickStopEnum
#define __AS__TYPE_MpAxisQuickStopEnum
typedef enum MpAxisQuickStopEnum
{	mpAXIS_QUICK_STOP_DEC_LIMIT = 20,
	mpAXIS_QUICK_STOP_TORQUE_LIMIT = 30,
	mpAXIS_QUICK_STOP_INDUCTION = 40,
} MpAxisQuickStopEnum;
#endif

#ifndef __AS__TYPE_MpAxisErrorStopEnum
#define __AS__TYPE_MpAxisErrorStopEnum
typedef enum MpAxisErrorStopEnum
{	mpAXIS_ERROR_STOP_DEC_LIMIT = 20,
	mpAXIS_ERROR_STOP_INDUCTION = 40,
	mpAXIS_ERROR_STOP_CONTROL_OFF = 50,
} MpAxisErrorStopEnum;
#endif

#ifndef __AS__TYPE_MpAxisStopReactionType
#define __AS__TYPE_MpAxisStopReactionType
typedef struct MpAxisStopReactionType
{	MpAxisQuickStopEnum Quickstop;
	MpAxisErrorStopEnum DriveError;
} MpAxisStopReactionType;
#endif

#ifndef __AS__TYPE_MpAxisLevelIOEnum
#define __AS__TYPE_MpAxisLevelIOEnum
typedef enum MpAxisLevelIOEnum
{	mpAXIS_IO_ACTIVE_LO = 0,
	mpAXIS_IO_ACTIVE_HI = 1,
	mpAXIS_IO_ACTIVE_LO_EXTERNAL = 288,
	mpAXIS_IO_ACTIVE_HI_EXTERNAL = 289,
} MpAxisLevelIOEnum;
#endif

#ifndef __AS__TYPE_MpAxisDigitalIOLevelType
#define __AS__TYPE_MpAxisDigitalIOLevelType
typedef struct MpAxisDigitalIOLevelType
{	MpAxisLevelIOEnum HomingSwitch;
	MpAxisLevelIOEnum PositiveLimitSwitch;
	MpAxisLevelIOEnum NegativeLimitSwitch;
	MpAxisLevelIOEnum Trigger1;
	MpAxisLevelIOEnum Trigger2;
} MpAxisDigitalIOLevelType;
#endif

#ifndef __AS__TYPE_MpAxisDigitalIOType
#define __AS__TYPE_MpAxisDigitalIOType
typedef struct MpAxisDigitalIOType
{	MpAxisDigitalIOLevelType Level;
	MpAxisInputSourceEnum Quickstop;
} MpAxisDigitalIOType;
#endif

#ifndef __AS__TYPE_MpAxisBasicConfigDriveType
#define __AS__TYPE_MpAxisBasicConfigDriveType
typedef struct MpAxisBasicConfigDriveType
{	MpAxisGearboxType Gearbox;
	MpAxisTransformationType Transformation;
	MpAxisControllerType Controller;
	MpAxisStopReactionType StopReaction;
	MpAxisDigitalIOType DigitalInputs;
} MpAxisBasicConfigDriveType;
#endif

#ifndef __AS__TYPE_MpAxisPosVelOutputTypeEnum
#define __AS__TYPE_MpAxisPosVelOutputTypeEnum
typedef enum MpAxisPosVelOutputTypeEnum
{	mpAXIS_OUTPUT_SET = 0,
	mpAXIS_OUTPUT_ACTUAL = 1,
} MpAxisPosVelOutputTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisBasicConfigType
#define __AS__TYPE_MpAxisBasicConfigType
typedef struct MpAxisBasicConfigType
{	plcstring AxisName[21];
	MpAxisBasicConfigAxisType Axis;
	MpAxisBasicConfigDriveType Drive;
	MpAxisPosVelOutputTypeEnum PositionOutput;
	MpAxisPosVelOutputTypeEnum VelocityOutput;
} MpAxisBasicConfigType;
#endif

#ifndef __AS__TYPE_MpComIdentType
#define __AS__TYPE_MpComIdentType
typedef struct MpComIdentType
{	unsigned long Internal[2];
} MpComIdentType;
#endif

#ifndef __AS__TYPE_MpComInternalDataType
#define __AS__TYPE_MpComInternalDataType
typedef struct MpComInternalDataType
{	unsigned long pObject;
	unsigned long State;
} MpComInternalDataType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIStatusEnum
#define __AS__TYPE_MpAlarmXListUIStatusEnum
typedef enum MpAlarmXListUIStatusEnum
{	mpALARMX_LIST_UI_STATUS_IDLE = 0,
	mpALARMX_LIST_UI_STATUS_ERROR = 99,
} MpAlarmXListUIStatusEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXStateEnum
#define __AS__TYPE_MpAlarmXStateEnum
typedef enum MpAlarmXStateEnum
{	mpALARMX_STATE_NONE = 0,
	mpALARMX_STATE_ACTIVE = 1,
	mpALARMX_STATE_INACTIVE = 2,
	mpALARMX_STATE_ACKNOWLEDGED = 3,
	mpALARMX_STATE_UNACKNOWLEDGED = 4,
} MpAlarmXStateEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIStatusEnum
#define __AS__TYPE_MpAlarmXHistoryUIStatusEnum
typedef enum MpAlarmXHistoryUIStatusEnum
{	mpALARMX_HISTORY_UI_STATUS_IDLE = 0,
	mpALARMX_HISTORY_UI_STATUS_ERROR = 99,
} MpAlarmXHistoryUIStatusEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXErrorEnum
#define __AS__TYPE_MpAlarmXErrorEnum
typedef enum MpAlarmXErrorEnum
{	mpALARMX_NO_ERROR = 0,
	mpALARMX_ERR_ACTIVATION = -1064239103,
	mpALARMX_ERR_MPLINK_NULL = -1064239102,
	mpALARMX_ERR_MPLINK_INVALID = -1064239101,
	mpALARMX_ERR_MPLINK_CHANGED = -1064239100,
	mpALARMX_ERR_MPLINK_CORRUPT = -1064239099,
	mpALARMX_ERR_MPLINK_IN_USE = -1064239098,
	mpALARMX_ERR_CONFIG_NULL = -1064239096,
	mpALARMX_ERR_CONFIG_INVALID = -1064239091,
	mpALARMX_ERR_NAME_NULL = -1064116224,
	mpALARMX_ERR_NAME_EMPTY = -1064116223,
	mpALARMX_WRN_MISSING_UICONNECT = -2137858045,
	mpALARMX_ERR_ALARM_NOT_ACTIVE = -1064116220,
	mpALARMX_ERR_ALARM_NOT_SELECTED = -1064116219,
	mpALARMX_ERR_ACK_NOT_ALLOWED = -1064116218,
	mpALARMX_ERR_INVALID_FILE_DEV = -1064116217,
	mpALARMX_INF_WAIT_CORE_FB = 1083367432,
	mpALARMX_ERR_CORE_INST_EXISTS = -1064116215,
	mpALARMX_ERR_MEMORY_INIT = -1064116214,
	mpALARMX_ERR_WRITE_EXPORT_FILE = -1064116213,
	mpALARMX_ERR_NAME_NOT_FOUND = -1064116212,
} MpAlarmXErrorEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXStatusIDType
#define __AS__TYPE_MpAlarmXStatusIDType
typedef struct MpAlarmXStatusIDType
{	MpAlarmXErrorEnum ID;
	MpComSeveritiesEnum Severity;
	unsigned short Code;
} MpAlarmXStatusIDType;
#endif

#ifndef __AS__TYPE_MpAlarmXDiagType
#define __AS__TYPE_MpAlarmXDiagType
typedef struct MpAlarmXDiagType
{	MpAlarmXStatusIDType StatusID;
} MpAlarmXDiagType;
#endif

#ifndef __AS__TYPE_MpAlarmXInfoType
#define __AS__TYPE_MpAlarmXInfoType
typedef struct MpAlarmXInfoType
{	MpAlarmXDiagType Diag;
} MpAlarmXInfoType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIBacktraceType
#define __AS__TYPE_MpAlarmXListUIBacktraceType
typedef struct MpAlarmXListUIBacktraceType
{	unsigned long RecordID[5];
	plcstring LogbookName[5][101];
	signed long EventID[5];
	plcstring Description[5][256];
} MpAlarmXListUIBacktraceType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIAlarmListType
#define __AS__TYPE_MpAlarmXListUIAlarmListType
typedef struct MpAlarmXListUIAlarmListType
{	unsigned long Severity[50];
	unsigned long Code[50];
	plcwstring Message[50][256];
	plcwstring AdditionalInformation1[50][256];
	plcwstring AdditionalInformation2[50][256];
	unsigned long InstanceID[50];
	plcstring Scope[50][256];
	plcstring Name[50][256];
	plcbit StateActive[50];
	plcbit StateAcknowledged[50];
	plcstring Timestamp[50][51];
	unsigned short SelectedIndex;
	unsigned short MaxSelection;
	plcbit PageUp;
	plcbit PageDown;
	plcbit StepUp;
	plcbit StepDown;
	float RangeStart;
	float RangeEnd;
} MpAlarmXListUIAlarmListType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIDetailsType
#define __AS__TYPE_MpAlarmXListUIDetailsType
typedef struct MpAlarmXListUIDetailsType
{	unsigned long Severity;
	unsigned long Code;
	plcwstring Message[256];
	plcwstring AdditionalInformation1[256];
	plcwstring AdditionalInformation2[256];
	unsigned long InstanceID;
	plcstring Scope[256];
	plcstring Name[256];
	plcbit StateActive;
	plcbit StateAcknowledged;
	plcstring Timestamp[51];
	MpAlarmXListUIBacktraceType Backtrace;
} MpAlarmXListUIDetailsType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIConnectType
#define __AS__TYPE_MpAlarmXListUIConnectType
typedef struct MpAlarmXListUIConnectType
{	MpAlarmXListUIStatusEnum Status;
	MpAlarmXListUIAlarmListType AlarmList;
	plcbit Acknowledge;
	plcbit AcknowledgeAll;
	MpAlarmXListUIDetailsType Details;
	plcstring Language[21];
	unsigned long AcknowledgeID;
} MpAlarmXListUIConnectType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUISetupType
#define __AS__TYPE_MpAlarmXListUISetupType
typedef struct MpAlarmXListUISetupType
{	unsigned short AlarmListSize;
	unsigned char AlarmListScrollWindow;
	plcstring TimeStampPattern[51];
} MpAlarmXListUISetupType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIAlarmListType
#define __AS__TYPE_MpAlarmXHistoryUIAlarmListType
typedef struct MpAlarmXHistoryUIAlarmListType
{	unsigned long Severity[50];
	unsigned long Code[50];
	plcwstring Message[50][256];
	plcwstring AdditionalInformation1[50][256];
	plcwstring AdditionalInformation2[50][256];
	plcstring Scope[50][256];
	plcstring Name[50][256];
	MpAlarmXStateEnum OldState[50];
	MpAlarmXStateEnum NewState[50];
	plcstring Timestamp[50][51];
	unsigned short SelectedIndex;
	unsigned short MaxSelection;
	plcbit PageUp;
	plcbit PageDown;
	plcbit StepUp;
	plcbit StepDown;
	float RangeStart;
	float RangeEnd;
} MpAlarmXHistoryUIAlarmListType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIDetailsType
#define __AS__TYPE_MpAlarmXHistoryUIDetailsType
typedef struct MpAlarmXHistoryUIDetailsType
{	unsigned long Severity;
	unsigned long Code;
	plcwstring Message[256];
	plcwstring AdditionalInformation1[256];
	plcwstring AdditionalInformation2[256];
	plcstring Scope[256];
	plcstring Name[256];
	MpAlarmXStateEnum OldState;
	MpAlarmXStateEnum NewState;
	plcstring Timestamp[51];
	plcstring DataDescriptions[10][51];
	plcstring DataValues[10][256];
} MpAlarmXHistoryUIDetailsType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIConnectType
#define __AS__TYPE_MpAlarmXHistoryUIConnectType
typedef struct MpAlarmXHistoryUIConnectType
{	MpAlarmXHistoryUIStatusEnum Status;
	MpAlarmXHistoryUIAlarmListType AlarmList;
	MpAlarmXHistoryUIDetailsType Details;
	plcstring Language[21];
} MpAlarmXHistoryUIConnectType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUISetupType
#define __AS__TYPE_MpAlarmXHistoryUISetupType
typedef struct MpAlarmXHistoryUISetupType
{	unsigned short AlarmListSize;
	unsigned char AlarmListScrollWindow;
	plcstring TimeStampPattern[51];
} MpAlarmXHistoryUISetupType;
#endif

#ifndef __AS__TYPE_AdhesCtrlInterface_Commands_typ
#define __AS__TYPE_AdhesCtrlInterface_Commands_typ
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
#endif

#ifndef __AS__TYPE_AdhesivePattern_typ
#define __AS__TYPE_AdhesivePattern_typ
typedef struct AdhesivePattern_typ
{	float DelayDistance[4];
	float GlueOnDistance[4];
} AdhesivePattern_typ;
#endif

#ifndef __AS__TYPE_AdhesivePatternCollections_typ
#define __AS__TYPE_AdhesivePatternCollections_typ
typedef struct AdhesivePatternCollections_typ
{	struct AdhesivePattern_typ AdhesivePatterns[4];
} AdhesivePatternCollections_typ;
#endif

#ifndef __AS__TYPE_NordsonData_typ
#define __AS__TYPE_NordsonData_typ
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
#endif

#ifndef __AS__TYPE_NordsonFeedbackSelection_enum
#define __AS__TYPE_NordsonFeedbackSelection_enum
typedef enum NordsonFeedbackSelection_enum
{	NORDSON_HARDWIRE = 0,
	NORDSON_MODBUSTCP = 1,
} NordsonFeedbackSelection_enum;
#endif

#ifndef __AS__TYPE_AdhesCtrlInterface_Pars_typ
#define __AS__TYPE_AdhesCtrlInterface_Pars_typ
typedef struct AdhesCtrlInterface_Pars_typ
{	struct AdhesivePatternCollections_typ SavedPatterns[4];
	struct AdhesivePattern_typ AdhesivePatterns[4];
	struct AdhesivePattern_typ AdhesiveHMIPatterns[4];
	float StitchPercentage;
	signed short ChannelModulationCtrl[4];
	float BeadLengths[4];
	plcbit FeedbackIsHardwire;
	plcbit FeedbackIsModbusTCP;
	NordsonData_typ NordsonComms;
	NordsonFeedbackSelection_enum NordsonFeedbackSelection;
	unsigned char NumAdhesiveChannels;
	unsigned char PatternSelection;
} AdhesCtrlInterface_Pars_typ;
#endif

#ifndef __AS__TYPE_AdhesCtrlInterface_Status_typ
#define __AS__TYPE_AdhesCtrlInterface_Status_typ
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
#endif

#ifndef __AS__TYPE_AdhesiveCtrlInterface_typ
#define __AS__TYPE_AdhesiveCtrlInterface_typ
typedef struct AdhesiveCtrlInterface_typ
{	AdhesCtrlInterface_Commands_typ Commands;
	AdhesCtrlInterface_Pars_typ Parameters;
	AdhesCtrlInterface_Status_typ Status;
} AdhesiveCtrlInterface_typ;
#endif

#ifndef __AS__TYPE_AlarmListAdapter_typ
#define __AS__TYPE_AlarmListAdapter_typ
typedef struct AlarmListAdapter_typ
{	plcstring Acknowledged[50][11];
	plcstring Active[50][11];
	plcstring Code[50][11];
} AlarmListAdapter_typ;
#endif

#ifndef __AS__TYPE_SSI_Paraller_typ
#define __AS__TYPE_SSI_Paraller_typ
typedef struct SSI_Paraller_typ
{	plcbit Bits[16];
	plcbit FeedBits[16];
	plcbit RamBits[16];
} SSI_Paraller_typ;
#endif

#ifndef __AS__TYPE_DigitalInputs_typ
#define __AS__TYPE_DigitalInputs_typ
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
	SSI_Paraller_typ SSI_Parallel;
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
#endif

#ifndef __AS__TYPE_DigitalOutputs_typ
#define __AS__TYPE_DigitalOutputs_typ
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
#endif

#ifndef __AS__TYPE_Encoders_typ
#define __AS__TYPE_Encoders_typ
typedef struct Encoders_typ
{	unsigned long SickSSIPos;
	float SickSSIPosDegrees;
	unsigned long FeedEncoderPos;
	float FeedEncoderPosDegrees;
	unsigned long RamEncoderPos;
	float RamEncoderPosDegrees;
} Encoders_typ;
#endif

#ifndef __AS__TYPE_FolderTypeSelection_enum
#define __AS__TYPE_FolderTypeSelection_enum
typedef enum FolderTypeSelection_enum
{	FOLDER_LINMOT = 1,
	FOLDER_PNEUMATIC = 0,
} FolderTypeSelection_enum;
#endif

#ifndef __AS__TYPE_LinAxisCommand_typ
#define __AS__TYPE_LinAxisCommand_typ
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
#endif

#ifndef __AS__TYPE_LinAxisParameter_typ
#define __AS__TYPE_LinAxisParameter_typ
typedef struct LinAxisParameter_typ
{	float ExtendAccel;
	float ExtendDecel;
	double ExtendPos;
	float ExtendSpeed;
	MpAxisBasicConfigType MpBasicConfig;
	MpAxisBasicParType MpBasicParameters;
	float RetractAccel;
	float RetractDecel;
	double RetractPos;
	float RetractSpeed;
} LinAxisParameter_typ;
#endif

#ifndef __AS__TYPE_LinAxisStatus_typ
#define __AS__TYPE_LinAxisStatus_typ
typedef struct LinAxisStatus_typ
{	plcbit EndlessPosValid;
	plcbit Error;
	signed long ErrorId;
	plcbit HomeCheck;
	MpAxisBasicInfoType Info;
	plcbit InPosition;
	plcbit IsHomed;
	plcbit MoveActive;
	double Position;
	plcbit PowerOn;
	plcbit Ready;
	plcbit Stopped;
	float Velocity;
} LinAxisStatus_typ;
#endif

#ifndef __AS__TYPE_LinAxis_typ
#define __AS__TYPE_LinAxis_typ
typedef struct LinAxis_typ
{	LinAxisCommand_typ Command;
	LinAxisParameter_typ Parameter;
	LinAxisStatus_typ Status;
} LinAxis_typ;
#endif

#ifndef __AS__TYPE_NumaticsTypeSelection_enum
#define __AS__TYPE_NumaticsTypeSelection_enum
typedef enum NumaticsTypeSelection_enum
{	NUMATICS_HARDWIRE = 0,
	NUMATICS_POWERLINK = 1,
} NumaticsTypeSelection_enum;
#endif

#ifndef __AS__TYPE_FoldpushCtrlInterface_Pars_typ
#define __AS__TYPE_FoldpushCtrlInterface_Pars_typ
typedef struct FoldpushCtrlInterface_Pars_typ
{	float BottomFolderOffPos;
	float BottomFolderOnPos;
	FolderTypeSelection_enum FolderTypeSelection;
	float HighCompressionOffPos;
	float HighCompressionOnPos;
	LinAxis_typ LinMotBotFolder;
	LinAxis_typ LinMotTopFolder;
	float LowCompressionOffPos;
	float LowCompressionOnPos;
	NumaticsTypeSelection_enum NumaticsTypeSelection;
	float PushOff;
	float PushOn;
	float TopFolderOffPos;
	float TopFolderOnPos;
} FoldpushCtrlInterface_Pars_typ;
#endif

#ifndef __AS__TYPE_FoldpushCtrlInterface_Status_typ
#define __AS__TYPE_FoldpushCtrlInterface_Status_typ
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
#endif

#ifndef __AS__TYPE_FoldPushCtrlInt_Commands_typ
#define __AS__TYPE_FoldPushCtrlInt_Commands_typ
typedef struct FoldPushCtrlInt_Commands_typ
{	plcbit placehold;
} FoldPushCtrlInt_Commands_typ;
#endif

#ifndef __AS__TYPE_FoldPushCtrlInterface_typ
#define __AS__TYPE_FoldPushCtrlInterface_typ
typedef struct FoldPushCtrlInterface_typ
{	FoldPushCtrlInt_Commands_typ Commands;
	FoldpushCtrlInterface_Pars_typ Parameters;
	FoldpushCtrlInterface_Status_typ Status;
} FoldPushCtrlInterface_typ;
#endif

#ifndef __AS__TYPE_SafetyStatus_typ
#define __AS__TYPE_SafetyStatus_typ
typedef struct SafetyStatus_typ
{	plcbit BackEstopOK;
	unsigned short CabinetEStopStatus;
	plcbit FrontEStopOK;
	plcbit GuardDoorsOK;
	plcbit SafetyProgramRunning;
} SafetyStatus_typ;
#endif

#ifndef __AS__TYPE_IO_typ
#define __AS__TYPE_IO_typ
typedef struct IO_typ
{	DigitalInputs_typ DIs;
	DigitalOutputs_typ DOs;
	Encoders_typ Encoders;
	plcbit ModuleOKs[100];
	SafetyStatus_typ SafetyStatus;
} IO_typ;
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

#ifndef __AS__TYPE_VacCtrlConfig_enum
#define __AS__TYPE_VacCtrlConfig_enum
typedef enum VacCtrlConfig_enum
{	VAC_MOTOR = 0,
	VAC_VENTURI = 1,
} VacCtrlConfig_enum;
#endif

#ifndef __AS__TYPE_VacCtrlInterface_Commands_typ
#define __AS__TYPE_VacCtrlInterface_Commands_typ
typedef struct VacCtrlInterface_Commands_typ
{	plcbit BlowOffOnManual;
	plcbit VacuumOn;
	plcbit VenturiOn;
	plcbit VenturiOnManual;
} VacCtrlInterface_Commands_typ;
#endif

#ifndef __AS__TYPE_VacCtrlInterface_Parameters_typ
#define __AS__TYPE_VacCtrlInterface_Parameters_typ
typedef struct VacCtrlInterface_Parameters_typ
{	unsigned short BlowOffTime;
	plcbit ManualVenturiVacuumOff;
	VacCtrlConfig_enum VacConfig;
	float VacOffPos;
	float VacOnPos;
} VacCtrlInterface_Parameters_typ;
#endif

#ifndef __AS__TYPE_VacCtrlInterface_Status_typ
#define __AS__TYPE_VacCtrlInterface_Status_typ
typedef struct VacCtrlInterface_Status_typ
{	plcbit AlarmActive;
	float Pressure;
	plcbit StandstillTimout;
	plcbit StandstillTimoutSet;
	plcbit VacLowAlarm;
	plcbit VacLowCycle;
} VacCtrlInterface_Status_typ;
#endif

#ifndef __AS__TYPE_VacCtrlInterface_typ
#define __AS__TYPE_VacCtrlInterface_typ
typedef struct VacCtrlInterface_typ
{	VacCtrlInterface_Commands_typ Commands;
	VacCtrlInterface_Parameters_typ Parameters;
	VacCtrlInterface_Status_typ Status;
} VacCtrlInterface_typ;
#endif

plcbit AlarmInfoAdapter(struct AlarmListAdapter_typ(* pAlarmListAdapter), struct MpAlarmXListUIAlarmListType(* AlarmList), unsigned long NumPendingAlarms);
plcbit CheckIOModules(plcbit ModuleOKs[100], struct MpComIdentType(* AlarmLink), unsigned long pAlarmMsg, plcbit NumaticsPresent);
_BUR_PUBLIC unsigned short brsitoa(signed long value, unsigned long pString);
struct MpAlarmXCore
{	struct MpComIdentType(* MpLink);
	signed long StatusID;
	unsigned long ActiveAlarms;
	unsigned long PendingAlarms;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void MpAlarmXCore(struct MpAlarmXCore* inst);
struct MpAlarmXListUI
{	struct MpComIdentType(* MpLink);
	MpAlarmXListUISetupType UISetup;
	struct MpAlarmXListUIConnectType(* UIConnect);
	signed long StatusID;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void MpAlarmXListUI(struct MpAlarmXListUI* inst);
struct MpAlarmXHistoryUI
{	struct MpComIdentType(* MpLink);
	MpAlarmXHistoryUISetupType UISetup;
	struct MpAlarmXHistoryUIConnectType(* UIConnect);
	signed long StatusID;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void MpAlarmXHistoryUI(struct MpAlarmXHistoryUI* inst);
_BUR_PUBLIC plcbit MpAlarmXCheckState(struct MpComIdentType(* MpLink), plcstring Name[256], MpAlarmXStateEnum State);
_BUR_PUBLIC plcbit MpAlarmXCheckReaction(struct MpComIdentType(* MpLink), plcstring Name[256]);
_BUR_PUBLIC unsigned long MpAlarmXSet(struct MpComIdentType(* MpLink), plcstring Name[256]);
_BUR_PUBLIC signed long MpAlarmXReset(struct MpComIdentType(* MpLink), plcstring Name[256]);
struct MpAlarmXHistory
{	struct MpComIdentType(* MpLink);
	plcstring(* DeviceName)[51];
	plcstring(* Language)[21];
	signed long StatusID;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Export;
	plcbit Active;
	plcbit Error;
	plcbit CommandBusy;
	plcbit CommandDone;
};
_BUR_PUBLIC void MpAlarmXHistory(struct MpAlarmXHistory* inst);
_BUR_LOCAL plcstring IOAlarmText[101];
_BUR_LOCAL struct MpAlarmXCore MpAlarmXCore_0;
_BUR_LOCAL struct MpAlarmXListUI MpAlarmXListUI_0;
_BUR_LOCAL MpAlarmXListUISetupType AlarmUISetup;
_BUR_LOCAL MpAlarmXListUIConnectType AlarmUIConnect;
_BUR_LOCAL AlarmListAdapter_typ AlarmListAdapter;
_BUR_LOCAL AlarmListAdapter_typ AlarmHistoryListAdapter;
_BUR_LOCAL plcbit status;
_BUR_LOCAL unsigned short i;
_BUR_LOCAL struct MpAlarmXHistory MpAlarmXHistory_0;
_BUR_LOCAL struct MpAlarmXHistoryUI MpAlarmXHistoryUI_0;
_BUR_LOCAL MpAlarmXHistoryUIConnectType AlarmXHistoryUIConnect;
_BUR_LOCAL MpAlarmXHistoryUISetupType AlarmXHistoryUISetup;
_BUR_LOCAL signed long AlarmStatus;
_BUR_LOCAL plcbit TestAlarm2;
_BUR_LOCAL plcbit TestAlarm;
_BUR_LOCAL plcbit TestAlarm2Active;
_BUR_LOCAL plcbit TestAlarmActive;
_GLOBAL AdhesiveCtrlInterface_typ gAdhesiveCtrlInterface;
_GLOBAL plcbit gAirPressureAlarmActive;
_GLOBAL plcbit gAlarmActive;
_GLOBAL plcbit gAlarmSystemActive;
_GLOBAL FoldPushCtrlInterface_typ gFoldPushCtrlInterface;
_GLOBAL plcbit gHighSeverityAlarmActive;
_GLOBAL IO_typ gIO;
_GLOBAL plcbit gLowSeverityAlarmActive;
_GLOBAL ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL unsigned long gNumActiveAlarms;
_GLOBAL unsigned long gNumAlarms;
_GLOBAL plcbit gSafetyNotOKAlarmActive;
_GLOBAL plcbit gSoftwareReset;
_GLOBAL VacCtrlInterface_typ gVacCtrlInterface;
_GLOBAL MpComIdentType gAlarmXCore;
_GLOBAL MpComIdentType gAlarmXHistory;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS_M1;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES_M1;
_GLOBAL plcstring ALARM_TEST_ALARM2[256];
_GLOBAL plcstring ALARM_TEST_ALARM[256];
_LOCAL unsigned long zz000700020000;
_LOCAL plcbit zzBOOL00020000;
_LOCAL plcbit zzBOOL00020001;
_LOCAL plcbit zzBOOL00020002;
_LOCAL plcbit zzBOOL00020003;
_LOCAL plcbit zzBOOL00020004;
_LOCAL plcbit zzBOOL00020005;
_LOCAL plcbit zzBOOL00020006;
_LOCAL plcbit zzBOOL00020007;
_LOCAL plcbit zzBOOL00020008;
_LOCAL plcbit zzBOOL00020009;
_LOCAL plcbit zzBOOL0002000A;
_LOCAL plcbit zzBOOL0002000B;
_LOCAL plcbit zzBOOL0002000C;
_LOCAL plcbit zzBOOL0002000D;
_LOCAL plcbit zzBOOL0002000E;
_LOCAL plcbit zzBOOL0002000F;
_LOCAL signed long zz000400020000;
_LOCAL signed long zz000400020001;
_LOCAL signed long zz000400020002;
_LOCAL signed long zz000400020003;
_LOCAL struct SFCActionType HistoryCodeToString;
static void __AS__Action__HistoryCodeToString(void);
