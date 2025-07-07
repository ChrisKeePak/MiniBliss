/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1748096289_15_
#define _BUR_1748096289_15_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned char New_Variable;
_BUR_LOCAL unsigned short WriteErrorNumber;
_BUR_LOCAL unsigned short ReadErrorNumber;
_BUR_LOCAL plcbit WriteFlag;
_BUR_LOCAL enum ExtendedComms_enum ExtendedCommsState;
_BUR_LOCAL struct Tank_typ Tank;
_BUR_LOCAL float PressureSetpoint;
_BUR_LOCAL struct Channel_typ Channel;
_BUR_LOCAL struct Register_typ Registers;
_BUR_LOCAL plcstring Station[11];
_BUR_LOCAL struct mbWriteMultipleRegisters ModbusWrite;
_BUR_LOCAL struct mbReadHoldingRegisters ModbusRead;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Actuators/NordsonComm/NordsonExtendedComm/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1748096289_15_ */

