/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1753370115_34_
#define _BUR_1753370115_34_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit SingleCyclePnP;
_BUR_LOCAL struct TON BodyKickerRetractTimer;
_BUR_LOCAL struct TON BodyKickerTimer;
_BUR_LOCAL struct F_TRIG FTrig_AdhesivePhotoeye;
_BUR_LOCAL enum ServoPnPState_enum state;
_BUR_LOCAL unsigned char FailureCount;
_BUR_LOCAL struct TON StartDwellTimer;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoPnPHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1753370115_34_ */

