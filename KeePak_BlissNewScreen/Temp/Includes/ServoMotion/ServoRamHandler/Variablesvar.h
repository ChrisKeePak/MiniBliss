/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730142839_32_
#define _BUR_1730142839_32_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit ExerciseRam;
_BUR_LOCAL plcbit ForceSafetyReset;
_BUR_LOCAL struct TON ResetTimeoutTimer;
_BUR_LOCAL plcbit ResetTimeoutAlarm;
_BUR_LOCAL struct TON RamDelayTimer;
_BUR_LOCAL unsigned char FoldFailureCount;
_BUR_LOCAL unsigned char SideFailureCount;
_BUR_LOCAL struct TON SideFoldRetractTimer;
_BUR_LOCAL struct TON SideFoldTimer;
_BUR_LOCAL struct TON SidePickRetractTimer;
_BUR_LOCAL struct TON SidePickTimer;
_BUR_LOCAL enum ServoRamState_enum state;
_BUR_LOCAL struct TON EndDwellTimer;
_BUR_LOCAL struct TON StartDwellTimer;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoRamHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730142839_32_ */

