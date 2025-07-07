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

_GLOBAL float DistanceAfterLatch;
_GLOBAL AdhesiveCtrlInterface_typ gAdhesiveCtrlInterface;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS_M1;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES_M1;
