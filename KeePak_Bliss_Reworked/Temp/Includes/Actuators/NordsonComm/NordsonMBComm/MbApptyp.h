/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1748096289_12_
#define _BUR_1748096289_12_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ModbusTCP_Handling_States_enum
{	MB_IDLE = 0,
	MB_REQUEST_SET_TEMPS2,
	MB_REQUEST_SET_TEMPS,
	MB_READ_SET_TEMPS2,
	MB_READ_SET_TEMPS,
	MB_REQUEST_ACT_TEMPS2,
	MB_REQUEST_ACT_TEMPS,
	MB_READ_ACT_TEMPS2,
	MB_READ_ACT_TEMPS,
	MB_REQUEST_MELTER_STATUS,
	MB_READ_MELTER_STATUS,
	MB_REQUEST_ADH_USE,
	MB_READ_ADH_USE,
	MB_WRITE_REGISTERS,
	MB_READ_REGISTERS,
	MB_REQUEST_MACHINE_STATUS,
	MB_WRITE_SET_TEMP2,
	MB_WRITE_SET_TEMP,
	MB_VERIFY_SET_TEMP_WRITE2,
	MB_VERIFY_SET_TEMP_WRITE,
	MB_REQUEST_ATS_ALARMS,
	MB_READ_ATS_ALARMS,
	MB_ERROR = 999
} ModbusTCP_Handling_States_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1748096289_12_ */

