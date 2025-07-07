/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730142839_36_
#define _BUR_1730142839_36_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL_RETAIN unsigned long CycleCount;
_BUR_LOCAL struct TON FeedStopTimer;
_BUR_LOCAL enum ServoFeedState_enum state;
_BUR_LOCAL plcbit HopperLowStop;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoFeedHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730142839_36_ */

