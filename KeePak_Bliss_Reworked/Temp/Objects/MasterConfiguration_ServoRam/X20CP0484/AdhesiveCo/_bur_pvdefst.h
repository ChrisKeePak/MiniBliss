#ifndef __AS__TYPE_Switches
#define __AS__TYPE_Switches
typedef struct Switches
{	float FirstOnPosition[64];
	float LastOnPosition[64];
} Switches;
#endif

_BUR_LOCAL unsigned long status;
_BUR_LOCAL plcbit GlueChannel1;
_BUR_LOCAL plcbit GlueChannel2;
_BUR_LOCAL plcbit GlueChannel3;
_BUR_LOCAL plcbit GlueChannel4;
_BUR_LOCAL plcbit AdhesiveUnitReadyAlarmActive;
_BUR_LOCAL plcbit AdhesiveUnitFaultedAlarmActive;
_BUR_LOCAL plcbit AdhesiveUnitUseageLowAlarmActive;
_BUR_LOCAL plcbit AdhesiveUnitLevelLowAlarmActive;
_BUR_LOCAL struct Switches Switches0[4];
_BUR_LOCAL struct Switches Switches1[4];
_BUR_LOCAL struct Switches Switches2[4];
_BUR_LOCAL struct Switches Switches3[4];
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
_GLOBAL unsigned char MAX_NUM_BEADS;
_GLOBAL unsigned char MAX_NUM_BEADS_M1;
