#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

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
_GLOBAL unsigned short ERR_OK;
_GLOBAL unsigned short ERR_FUB_ENABLE_FALSE;
