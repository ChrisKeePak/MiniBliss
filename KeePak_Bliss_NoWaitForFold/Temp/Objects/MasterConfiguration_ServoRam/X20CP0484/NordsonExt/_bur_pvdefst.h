#ifndef __AS__TYPE_ExtendedComms_enum
#define __AS__TYPE_ExtendedComms_enum
typedef enum ExtendedComms_enum
{	WORD_MANIPULATION = 0,
	READ_ACTPRESS_W1 = 1,
	READ_ACTPRESS_W2 = 2,
	READ_ACTPRESS_W3 = 3,
	READ_ACTPRESS_W4 = 4,
	WRITE_SETPRESS_W1 = 5,
	WRITE_SETPRESS_W2 = 6,
	WRITE_SETPRESS_W3 = 7,
	WRITE_SETPRESS_W4 = 8,
	READ_TANKLEVEL_W1 = 9,
	MODBUS_ERROR = 10,
} ExtendedComms_enum;
#endif

#ifndef __AS__TYPE_Channel_typ
#define __AS__TYPE_Channel_typ
typedef struct Channel_typ
{	float ActualPressure;
	float PressureSetpoint;
} Channel_typ;
#endif

#ifndef __AS__TYPE_Register_typ
#define __AS__TYPE_Register_typ
typedef struct Register_typ
{	unsigned long ChannelActualPressureWord;
	unsigned long ChannelSetPressureWord;
	unsigned short TankActualLevelWord;
} Register_typ;
#endif

#ifndef __AS__TYPE_Tank_typ
#define __AS__TYPE_Tank_typ
typedef struct Tank_typ
{	float ActualLevel;
} Tank_typ;
#endif

struct mbReadHoldingRegisters
{	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrRegisters;
	unsigned long pData;
	unsigned short dataSize;
	unsigned short status;
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	plcbit enable;
};
_BUR_PUBLIC void mbReadHoldingRegisters(struct mbReadHoldingRegisters* inst);
struct mbWriteMultipleRegisters
{	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrRegisters;
	unsigned long pData;
	unsigned short dataSize;
	unsigned short status;
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	plcbit enable;
};
_BUR_PUBLIC void mbWriteMultipleRegisters(struct mbWriteMultipleRegisters* inst);
_BUR_LOCAL struct mbReadHoldingRegisters ModbusRead;
_BUR_LOCAL struct mbWriteMultipleRegisters ModbusWrite;
_BUR_LOCAL plcstring Station[11];
_BUR_LOCAL Register_typ Registers;
_BUR_LOCAL Channel_typ Channel;
_BUR_LOCAL float PressureSetpoint;
_BUR_LOCAL Tank_typ Tank;
_BUR_LOCAL ExtendedComms_enum ExtendedCommsState;
_BUR_LOCAL plcbit WriteFlag;
_BUR_LOCAL unsigned short ReadErrorNumber;
_BUR_LOCAL unsigned short WriteErrorNumber;
_BUR_LOCAL unsigned char New_Variable;
