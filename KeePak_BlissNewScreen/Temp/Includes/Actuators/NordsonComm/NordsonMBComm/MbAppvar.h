/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730142839_13_
#define _BUR_1730142839_13_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit FirstTimeCopySetTemps;
_BUR_LOCAL struct TON StandbyTimer;
_BUR_LOCAL unsigned char TempChannelToWrite;
_BUR_LOCAL unsigned char MelterCmd;
_BUR_LOCAL struct TON FeedbackCycleTimer;
_BUR_LOCAL struct NordsonTxPacket_typ NordsonTxPacket;
_BUR_LOCAL unsigned char testChannel;
_BUR_LOCAL struct NordsonRxPacket_typ NordsonRxPacket;
_BUR_LOCAL unsigned char testIdx;
_BUR_LOCAL unsigned short MBError;
_BUR_LOCAL struct mbWriteMultipleRegisters WriteMultipleRegisters;
_BUR_LOCAL struct mbReadHoldingRegisters ReadMultipleRegisters;
_BUR_LOCAL unsigned short num_registers_to_read;
_BUR_LOCAL unsigned short read_register_address;
_BUR_LOCAL unsigned short num_registers_to_write;
_BUR_LOCAL unsigned short write_register_address;
_BUR_LOCAL plcstring mb_station[51];
_BUR_LOCAL enum ModbusTCP_Handling_States_enum state;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730142839_13_ */

