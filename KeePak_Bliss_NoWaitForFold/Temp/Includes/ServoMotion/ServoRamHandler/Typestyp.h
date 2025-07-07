/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730232408_31_
#define _BUR_1730232408_31_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ServoRamState_enum
{	SERVORAM_WAIT_FOR_HOME = 0,
	SERVORAM_WAIT_FOR_AUTO_HOME = 5,
	SERVORAM_IDLE = 10,
	SERVORAM_MOVE_TO_START = 20,
	SERVORAM_PICK_SIDES = 30,
	SERVORAM_CHECK_FOR_SIDES = 40,
	SERVORAM_WAITING_ON_BOX = 80,
	SERVORAM_TRIGGER_FOLD = 50,
	SERVORAM_RELEASE_FOLD = 60,
	SERVORAM_MOVE_TO_END = 90,
	SERVORAM_DWELL_AT_END = 100,
	SERVORAM_MOVE_TO_START_EX = 120,
	SERVORAM_PICK_SIDES_EX = 130,
	SERVORAM_CHECK_FOR_SIDES_EX = 140,
	SERVORAM_MOVE_TO_MIDDLE_EX = 150,
	SERVORAM_FOLD_SIDES_EX = 160,
	SERVORAM_CHECK_FOR_FOLDS_EX = 170,
	SERVORAM_WAITING_ON_BOX_EX = 180,
	SERVORAM_MOVE_TO_END_EX = 190,
	SERVORAM_DWELL_AT_END_EX = 191,
	SERVORAM_ERROR = 999
} ServoRamState_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoRamHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730232408_31_ */

