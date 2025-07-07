#ifndef __AS__TYPE_ModbusTCP_Handling_States_enum
#define __AS__TYPE_ModbusTCP_Handling_States_enum
typedef enum ModbusTCP_Handling_States_enum
{	MB_IDLE = 0,
	MB_REQUEST_SET_TEMPS = 1,
	MB_READ_SET_TEMPS = 2,
	MB_REQUEST_ACT_TEMPS = 3,
	MB_READ_ACT_TEMPS = 4,
	MB_REQUEST_MELTER_STATUS = 5,
	MB_READ_MELTER_STATUS = 6,
	MB_REQUEST_ADH_USE = 7,
	MB_READ_ADH_USE = 8,
	MB_WRITE_REGISTERS = 9,
	MB_READ_REGISTERS = 10,
	MB_REQUEST_MACHINE_STATUS = 11,
	MB_WRITE_SET_TEMP = 12,
	MB_VERIFY_SET_TEMP_WRITE = 13,
	MB_REQUEST_ATS_ALARMS = 14,
	MB_READ_ATS_ALARMS = 15,
	MB_ERROR = 999,
} ModbusTCP_Handling_States_enum;
#endif

#ifndef __AS__TYPE_NordsonRxPacket_typ
#define __AS__TYPE_NordsonRxPacket_typ
typedef struct NordsonRxPacket_typ
{	unsigned short Byte0_1_Status;
	unsigned char Byte2_Ack_Data_Index;
	unsigned char Byte3_Ack_Channel_Num;
	unsigned short Byte4_5_Read_Data_0;
	unsigned short Byte6_7_Read_Data_1;
	unsigned short Byte8_9_Read_Data_2;
	unsigned short Byte10_11_Read_Data_3;
	unsigned short Byte12_13_Read_Data_4;
	unsigned short Byte18_19_Read_Data_7;
	unsigned short Byte16_17_Read_Data_6;
	unsigned short Byte14_15_Read_Data_5;
} NordsonRxPacket_typ;
#endif

#ifndef __AS__TYPE_NordsonTxPacket_typ
#define __AS__TYPE_NordsonTxPacket_typ
typedef struct NordsonTxPacket_typ
{	unsigned char Byte0_MelterControl;
	unsigned char Byte1_Command;
	unsigned char Byte2_Data_Index;
	unsigned char Byte3_Channel_Num;
	unsigned short Byte4_5_WriteData;
	unsigned short Byte6_7_Mot1Spd;
	unsigned short Byte8_9_Mot2Spd;
	unsigned short Byte10_11_Mot3Spd;
	unsigned short Byte12_13_Mot4Spd;
	unsigned short Byte14_15_NotUsed;
} NordsonTxPacket_typ;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
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
_BUR_LOCAL ModbusTCP_Handling_States_enum state;
_BUR_LOCAL plcstring mb_station[51];
_BUR_LOCAL unsigned short write_register_address;
_BUR_LOCAL unsigned short num_registers_to_write;
_BUR_LOCAL unsigned short read_register_address;
_BUR_LOCAL unsigned short num_registers_to_read;
_BUR_LOCAL struct mbReadHoldingRegisters ReadMultipleRegisters;
_BUR_LOCAL struct mbWriteMultipleRegisters WriteMultipleRegisters;
_BUR_LOCAL unsigned short MBError;
_BUR_LOCAL unsigned char testIdx;
_BUR_LOCAL NordsonRxPacket_typ NordsonRxPacket;
_BUR_LOCAL unsigned char testChannel;
_BUR_LOCAL NordsonTxPacket_typ NordsonTxPacket;
_BUR_LOCAL struct TON FeedbackCycleTimer;
_BUR_LOCAL unsigned char MelterCmd;
_BUR_LOCAL unsigned char TempChannelToWrite;
_BUR_LOCAL struct TON StandbyTimer;
_BUR_LOCAL plcbit FirstTimeCopySetTemps;
