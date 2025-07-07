/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1748096290_33_
#define _BUR_1748096290_33_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ServoPnPState_enum
{	SERVOPNP_WAIT_FOR_HOME = 0,
	SERVOPNP_WAIT_FOR_AUTO_HOME = 5,
	SERVOPNP_IDLE = 10,
	SERVOPNP_MOVE_TO_HOPPER = 20,
	SERVOPNP_DWELL_AT_HOPPER = 30,
	SERVOPNP_CHECK_FOR_BOX = 40,
	SERVOPNP_MOVE_TO_HORIZONTAL = 50,
	SERVOPNP_REMOVE_BOX = 60,
	SERVOPNP_ABORT_AND_RETURN = 70,
	SERVOPNP_ERROR = 999
} ServoPnPState_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoPnPHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1748096290_33_ */

