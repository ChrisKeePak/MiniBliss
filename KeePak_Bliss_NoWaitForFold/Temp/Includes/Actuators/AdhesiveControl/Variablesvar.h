/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730232408_9_
#define _BUR_1730232408_9_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct Switches Switches3[4];
_BUR_LOCAL struct Switches Switches2[4];
_BUR_LOCAL struct Switches Switches1[4];
_BUR_LOCAL struct Switches Switches0[4];
_BUR_LOCAL plcbit AdhesiveUnitLevelLowAlarmActive;
_BUR_LOCAL plcbit AdhesiveUnitUseageLowAlarmActive;
_BUR_LOCAL plcbit AdhesiveUnitFaultedAlarmActive;
_BUR_LOCAL plcbit AdhesiveUnitReadyAlarmActive;
_BUR_LOCAL plcbit GlueChannel4;
_BUR_LOCAL plcbit GlueChannel3;
_BUR_LOCAL plcbit GlueChannel2;
_BUR_LOCAL plcbit GlueChannel1;
_BUR_LOCAL unsigned long status;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Actuators/AdhesiveControl/Variables.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Libraries/Constants/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730232408_9_ */

