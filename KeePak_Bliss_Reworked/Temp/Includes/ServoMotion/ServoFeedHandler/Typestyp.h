/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1753370115_35_
#define _BUR_1753370115_35_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ServoFeedState_enum
{	SERVOFEED_WAIT_FOR_HOME = 0,
	SERVOFEED_IDLE = 10,
	SERVOFEED_MOVE_VELOCITY = 20,
	SERVOFEED_ERROR = 999
} ServoFeedState_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoFeedHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1753370115_35_ */

