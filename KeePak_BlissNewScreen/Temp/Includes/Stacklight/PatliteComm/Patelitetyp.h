/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730142839_26_
#define _BUR_1730142839_26_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum CommStateEnum
{	PATLITE_STATE_STANDBY,
	PATLITE_STATE_WRITE_REGISTER,
	PATLITE_STATE_ERROR
} CommStateEnum;

typedef enum GroupEnum
{	GROUP_1_POWER_ON,
	GROUP_2_HEATING,
	GROUP_3_HEAT_AIR_OK,
	GROUP_4_RUN,
	GROUP_5_SAFETY
} GroupEnum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Stacklight/PatliteComm/Patelite.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730142839_26_ */

