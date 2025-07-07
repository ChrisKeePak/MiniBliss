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

#ifndef __AS__TYPE_MpAxisGearType
#define __AS__TYPE_MpAxisGearType
typedef struct MpAxisGearType
{	float Acceleration;
	float Deceleration;
} MpAxisGearType;
#endif

#ifndef __AS__TYPE_MpAxisCamLeadType
#define __AS__TYPE_MpAxisCamLeadType
typedef struct MpAxisCamLeadType
{	double MasterOffset;
	double MasterDistance;
	double SlaveDistance;
	plcbit CamEnable;
	unsigned char CamTableID;
	double MasterScaling;
	double SlaveScaling;
} MpAxisCamLeadType;
#endif

#ifndef __AS__TYPE_MpAxisCamType
#define __AS__TYPE_MpAxisCamType
typedef struct MpAxisCamType
{	unsigned char CamTableID;
	double MasterStartPosition;
	MpAxisCamLeadType LeadIn;
	MpAxisCamLeadType LeadOut;
	plcstring CamTable[5][13];
} MpAxisCamType;
#endif

#ifndef __AS__TYPE_MpAxisRecoveryModeEnum
#define __AS__TYPE_MpAxisRecoveryModeEnum
typedef enum MpAxisRecoveryModeEnum
{	mpAXIS_RECOVERY_FORWARD = 0,
	mpAXIS_RECOVERY_BACKWARD = 2,
	mpAXIS_RECOVERY_SHORTEST_WAY = 3,
	mpAXIS_RECOVERY_FORWARD_WINDOW = 100,
	mpAXIS_RECOVERY_BACKWARD_WINDOW = 101,
	mpAXIS_RECOVERY_GET_POSITION = 102,
} MpAxisRecoveryModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisRecoveryType
#define __AS__TYPE_MpAxisRecoveryType
typedef struct MpAxisRecoveryType
{	MpAxisRecoveryModeEnum Mode;
	float Velocity;
	float Acceleration;
	double ToleranceWindow;
	double PhaseShift;
	double OffsetShift;
} MpAxisRecoveryType;
#endif

#ifndef __AS__TYPE_MpAxisShiftModeEnum
#define __AS__TYPE_MpAxisShiftModeEnum
typedef enum MpAxisShiftModeEnum
{	mpAXIS_SHIFT_MODE_ABS = 0,
	mpAXIS_SHIFT_MODE_REL = 1,
	mpAXIS_SHIFT_MODE_ABS_NO_RESET = 2,
	mpAXIS_SHIFT_MODE_REL_NO_RESET = 3,
} MpAxisShiftModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisApplyModeEnum
#define __AS__TYPE_MpAxisApplyModeEnum
typedef enum MpAxisApplyModeEnum
{	mpAXIS_SHIFT_TIME_BASE = 1,
	mpAXIS_SHIFT_MSTR_POS_BASE = 2,
	mpAXIS_SHIFT_MSTR_DIST_BASE = 3,
	mpAXIS_SHIFT_VEL_CTRL = 4,
	mpAXIS_OFFS_TIME_MSTR = 257,
	mpAXIS_OFFS_MSTR_POS_BASE_MSTR = 258,
	mpAXIS_OFFS_MSTR_DIS_BASE_MSTR = 259,
	mpAXIS_OFFS_VEL_CTRL_MSTR = 260,
} MpAxisApplyModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisProfileBasisEnum
#define __AS__TYPE_MpAxisProfileBasisEnum
typedef enum MpAxisProfileBasisEnum
{	mpAXIS_PROFILE_BASIS_SLAVE = 0,
	mpAXIS_PROFILE_BASIS_MASTER = 256,
} MpAxisProfileBasisEnum;
#endif

#ifndef __AS__TYPE_MpAxisOffsetInZoneType
#define __AS__TYPE_MpAxisOffsetInZoneType
typedef struct MpAxisOffsetInZoneType
{	plcbit Enable;
	double ZoneStartPosition;
	double ZoneEndPosition;
	double Period;
	MpAxisProfileBasisEnum ProfileBasis;
} MpAxisOffsetInZoneType;
#endif

#ifndef __AS__TYPE_MpAxisOffsetType
#define __AS__TYPE_MpAxisOffsetType
typedef struct MpAxisOffsetType
{	MpAxisShiftModeEnum Mode;
	double Distance;
	float Velocity;
	float Acceleration;
	MpAxisApplyModeEnum ApplicationMode;
	plcbit EnableVelocityControl;
	double ApplicationDistance;
	unsigned short CyclicParID;
	MpAxisOffsetInZoneType WithinZone;
} MpAxisOffsetType;
#endif

#ifndef __AS__TYPE_MpAxisPhasingType
#define __AS__TYPE_MpAxisPhasingType
typedef struct MpAxisPhasingType
{	MpAxisShiftModeEnum Mode;
	double Distance;
	float Velocity;
	float Acceleration;
	MpAxisApplyModeEnum ApplicationMode;
	plcbit EnableVelocityControl;
	double ApplicationDistance;
	unsigned short CyclicParID;
} MpAxisPhasingType;
#endif

#ifndef __AS__TYPE_MpAxisCouplingParType
#define __AS__TYPE_MpAxisCouplingParType
typedef struct MpAxisCouplingParType
{	float RatioNumerator;
	float RatioDenominator;
	unsigned short MasterParID;
	MpAxisGearType Gear;
	MpAxisCamType Cam;
	MpAxisRecoveryType Recovery;
	MpAxisOffsetType OffsetShift;
	MpAxisPhasingType PhaseShift;
} MpAxisCouplingParType;
#endif

#ifndef __AS__TYPE_MpComIdentType
#define __AS__TYPE_MpComIdentType
typedef struct MpComIdentType
{	unsigned long Internal[2];
} MpComIdentType;
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
	plcbit GlobalTempChanged;
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
	unsigned short ChannelActTemp[10];
	signed long ChannelDataCmpResult;
	unsigned long ChannelDataSize;
	unsigned short ChannelSetTempActual[10];
	unsigned short ChannelSetTempRequested[10];
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
	unsigned short GlobalSetTemp;
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

#ifndef __AS__TYPE_AdhesiveCtrlInterface_typ
#define __AS__TYPE_AdhesiveCtrlInterface_typ
typedef struct AdhesiveCtrlInterface_typ
{	AdhesCtrlInterface_Commands_typ Commands;
	AdhesCtrlInterface_Pars_typ Parameters;
	AdhesCtrlInterface_Status_typ Status;
} AdhesiveCtrlInterface_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_Comds_ToMapp_typ
#define __AS__TYPE_Axis_Interface_Comds_ToMapp_typ
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
#endif

#ifndef __AS__TYPE_Axis_Interface_Commands_typ
#define __AS__TYPE_Axis_Interface_Commands_typ
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
	Axis_Interface_Comds_ToMapp_typ ToMapp;
	plcbit StartPowerSaver;
	plcbit StopPowerSaver;
} Axis_Interface_Commands_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_Parameters_typ
#define __AS__TYPE_Axis_Interface_Parameters_typ
typedef struct Axis_Interface_Parameters_typ
{	MpAxisBasicConfigType AxisAndDrivePars;
	unsigned long CouplingMaster;
	MpAxisCouplingParType CouplingParameters;
	MpAxisBasicParType MovementParameters;
	float TriggerDistance;
} Axis_Interface_Parameters_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_Status_typ
#define __AS__TYPE_Axis_Interface_Status_typ
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
	plcbit PowerSaverModeOn;
} Axis_Interface_Status_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_typ
#define __AS__TYPE_Axis_Interface_typ
typedef struct Axis_Interface_typ
{	Axis_Interface_Commands_typ Commands;
	Axis_Interface_Parameters_typ Parameters;
	Axis_Interface_Status_typ Status;
} Axis_Interface_typ;
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
	unsigned long ServoRamPowerSaverTime;
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

struct CTU
{	unsigned short PV;
	unsigned short CV;
	plcbit CU;
	plcbit RESET;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void CTU(struct CTU* inst);
struct R_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void R_TRIG(struct R_TRIG* inst);
struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_PUBLIC float ComputeDistanceMoved(float CurentPos, float OldPos);
_BUR_PUBLIC float DetermineDistanceToStopPos(float EncoderPos, float StopPos);
_BUR_PUBLIC plcbit MpAlarmXCheckState(struct MpComIdentType(* MpLink), plcstring Name[256], MpAlarmXStateEnum State);
_BUR_PUBLIC unsigned long MpAlarmXSet(struct MpComIdentType(* MpLink), plcstring Name[256]);
_BUR_PUBLIC signed long MpAlarmXReset(struct MpComIdentType(* MpLink), plcstring Name[256]);
_BUR_LOCAL plcbit AirPressureAlarmActive;
_BUR_LOCAL plcbit AirPressureNotOK;
_BUR_LOCAL struct TON AirPressureNotOKTimer;
_BUR_LOCAL plcbit BodyCheckError;
_BUR_LOCAL plcbit BodyHopperLowAlarm;
_BUR_LOCAL struct TON BodyHopperLowTMR;
_BUR_LOCAL struct TON BodyPanelTimeout;
_BUR_LOCAL plcbit CountReset;
_BUR_LOCAL float DistanceFromStopPosition;
_BUR_LOCAL plcbit DownstreamBlocked;
_BUR_LOCAL struct TON DownstreamSensorTimer;
_BUR_LOCAL struct TON FeedServoTMR;
_BUR_LOCAL struct TON FeedStopTimer;
_BUR_LOCAL plcbit FrontEStopNotOKActive;
_BUR_LOCAL plcbit GuardDoorNotOKActive;
_BUR_LOCAL plcbit HopperRunningError;
_BUR_LOCAL plcbit InfeedCheckError;
_BUR_LOCAL struct TON InfeedTimeout;
_BUR_LOCAL plcbit LeftHopperLowAlarm;
_BUR_LOCAL struct TON LeftHopperLowTMR;
_BUR_LOCAL plcbit LubeReset;
_BUR_LOCAL struct CTU LubricationCounter;
_BUR_LOCAL plcbit MoveVelocityRequest;
_BUR_LOCAL float OldEncoderPos;
_BUR_LOCAL plcbit PickAndPlaceDwelling;
_BUR_LOCAL plcbit PickAndPlaceHasBox;
_BUR_LOCAL plcbit RearEStopNotOKActive;
_BUR_LOCAL plcbit RightHopperLowAlarm;
_BUR_LOCAL struct TON RightHopperLowTMR;
_BUR_LOCAL struct R_TRIG Rtrig_FeedServoTMR;
_BUR_LOCAL struct R_TRIG Rtrig_LubricationCounter;
_BUR_LOCAL struct R_TRIG Rtrig_PhotoEyeSeen;
_BUR_LOCAL plcbit SafetyNotOKActive;
_BUR_LOCAL unsigned long status;
_BUR_LOCAL plcbit StopFeedServo;
_BUR_LOCAL plcbit Vacuum_ON;
_GLOBAL float DistanceAfterLatch;
_GLOBAL AdhesiveCtrlInterface_typ gAdhesiveCtrlInterface;
_GLOBAL plcbit gAlarmActive;
_GLOBAL plcbit gAlarmSystemActive;
_GLOBAL Axis_Interface_typ gBodyHopperInterface;
_GLOBAL signed char gCyclesToFinish;
_GLOBAL plcbit gHighSeverityAlarmActive;
_GLOBAL HMIControl_typ gHMI;
_GLOBAL IO_typ gIO;
_GLOBAL plcbit gIsSimulated;
_GLOBAL Axis_Interface_typ gLeftHopperInterface;
_GLOBAL plcbit gLowSeverityAlarmActive;
_GLOBAL ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL plcbit gRamAtStopPosition;
_GLOBAL Axis_Interface_typ gRightHopperInterface;
_GLOBAL Axis_Interface_typ gServoFeedInterface;
_GLOBAL Axis_Interface_typ gServoPnPInterface;
_GLOBAL Axis_Interface_typ gServoRamInterface;
_GLOBAL plcbit HoperLowStop;
_GLOBAL_RETAIN unsigned long LubeCount;
_GLOBAL plcbit LubricationOK;
_GLOBAL plcbit PhotoEyeSeen;
_GLOBAL plcbit StopFeed;
_GLOBAL MpComIdentType gAlarmXCore;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS_M1;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES_M1;
_GLOBAL plcstring ALARM_AIR_PRESSURE_LOW[256];
_GLOBAL plcstring ALARM_SAFETY_NOTOK[256];
_GLOBAL plcstring ALARM_SAFETY_FRONT_ESTOP[256];
_GLOBAL plcstring ALARM_SAFETY_REAR_ESTOP[256];
_GLOBAL plcstring ALARM_SAFETY_GUARD_DOOR[256];
