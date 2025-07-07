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

#ifndef __AS__TYPE_DUT_NDSN_ADI
#define __AS__TYPE_DUT_NDSN_ADI
typedef struct DUT_NDSN_ADI
{	unsigned short ui_Size;
	unsigned short ui_ADI;
} DUT_NDSN_ADI;
#endif

#ifndef __AS__TYPE_DUT_NDSN_Inventory
#define __AS__TYPE_DUT_NDSN_Inventory
typedef struct DUT_NDSN_Inventory
{	plcbit b_r_TempCtrl_Board1;
	plcbit b_r_TempCtrl_Board2;
	plcbit b_r_TempCtrl_Board3;
	plcbit b_r_TempCtrl_Board4;
	plcbit b_r_OEM_Unit;
	plcbit b_r_OLED_Unit;
	plcbit b_r_WIFI_Board;
	plcbit b_r_Refill_Board;
	plcbit b_r_Anybus_Board;
	plcbit b_r_Press_Sensor;
	plcbit b_r_Press_CtrlValve;
	signed short i_r_NumOfTempZones_Internal;
	signed short i_r_NumOfTempZones_External;
	signed short i_r_NumOfMotors;
	signed short i_r_NumOfPumps;
	signed short i_r_NumOfATS;
	signed short i_r_NumOfWebClients;
} DUT_NDSN_Inventory;
#endif

#ifndef __AS__TYPE_DUT_NDSN_Flex
#define __AS__TYPE_DUT_NDSN_Flex
typedef struct DUT_NDSN_Flex
{	plcbit b_r_SystemReady;
	plcbit b_r_Fault;
	plcbit b_r_Alert;
	plcbit b_r_Stop;
	plcbit b_r_LostCommunication;
	plcbit b_w_ClearAlertFault;
	plcbit b_r_TemperatureReady;
	plcbit b_r_HeatersOn;
	plcbit b_r_StandbyOn;
	plcbit b_r_TemperatureAlert;
	plcbit b_r_TemperatureFault;
	plcbit b_r_PumpRunning;
	plcbit b_r_PumpEnabled;
	plcbit b_r_Purging;
	plcbit b_r_TankLevelEmpty;
	plcbit b_r_TankLevelLow;
	plcbit b_r_FillSysAlert;
	plcbit b_r_FillSysFault;
	plcbit b_r_Filling;
	plcbit b_r_LidOpen;
	plcbit b_r_EmptyCalibrated;
	plcbit b_w_HeatersOnOff;
	plcbit b_w_StandbyOnOff;
	plcbit b_w_PumpOnOff;
	plcbit b_w_Purge;
	plcbit b_w_ManualFill;
	plcbit b_w_CalibrateEmpty;
	plcbit b_w_CalibrateFull;
	signed short i_rw_Temp_arr_ZoneSP[18];
	signed short i_rw_Temp_arr_ZoneActivate[18];
	signed short i_rw_Temp_GlobalStandbyDelta;
	signed short i_rw_Temp_ManualStandyDuration;
	signed short i_rw_Temp_AutoEnterStandbyTm;
	signed short i_rw_Temp_AutoHeaterOffTime;
	signed short i_rw_Temp_AutoStandbySource;
	signed short i_rw_Temp_UnderTempDelta;
	signed short i_rw_Temp_OverTempDelta;
	signed short i_rw_Temp_Unit;
	signed short i_rw_Temp_GlobalSP;
	signed short i_rw_Temp_GlbalHoseSP;
	signed short i_rw_Temp_GlobalGunSP;
	signed short i_rw_Press_Unit;
	float r_rw_Press_SP;
	float r_rw_Press_MaxPressLimit;
	float r_rw_Press_MinPressLimit;
	float r_rw_Press_UnderPressDelta;
	float r_rw_Press_OverPressDelta;
	signed short i_rw_Press_EnableHighLowAlert;
	signed short i_rw_Press_EnableHydrScale;
	signed short i_rw_Fill_EnableFill;
	signed short i_rw_Fill_TargetFillLevel;
	signed short i_rw_Fill_MaxFillTime;
	signed short i_rw_Fill_AlertStopDelayTime;
	signed short i_rw_Fill_LowLevelThreshold;
	signed short i_rw_Fill_LidOpenAlertTime;
	signed short i_rw_Fill_EmptyStopOnOff;
	signed short i_rw_Pump_AutoPump;
	signed short i_rw_Gen_ReadyDelayTime;
	signed short i_rw_Gen_MassUnit;
	signed short i_r_Temp_arr_ZoneActual[18];
	signed short i_r_Temp_arr_ZoneStatus[18];
	float r_r_Press_ActualPressure;
	signed short i_r_Press_SensorAlarm;
	signed short i_r_Fill_TankLevel;
	signed short i_r_Gen_CurrentFaultCode;
	signed short i_r_Gen_SoftwareVersion;
	signed long di_r_Gen_OperationHrs;
	signed short i_r_Gen_arr_SysInventory[4];
	DUT_NDSN_Inventory st_r_Devices;
} DUT_NDSN_Flex;
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
_BUR_PUBLIC unsigned long brsmemcpy(unsigned long pDest, unsigned long pSrc, unsigned long length);
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
struct FB_NDSN_MB_PBFlex_Process
{	plcstring IN_mb_station[31];
	struct DUT_NDSN_Flex(* Melter);
	unsigned short IO_Input[64];
	unsigned short IO_Output[64];
	struct TON tm_Acyc;
	struct DUT_NDSN_ADI st_ADI_List[50];
	unsigned short ui_AcycRdStatus_Para;
	unsigned short ui_AcycRdStatus;
	signed short i;
	unsigned short arr_ResponseValue[18];
	signed short i_ValueIndex;
	signed short i_rwDataSize;
	unsigned short arr_HMI[120];
	unsigned short arr_HMI_Buffer[70];
	unsigned short arr_HMI_Compare[70];
	signed short arr_WriteIndex[31];
	signed short i_rwADI_Count;
	signed short i_ADI_Range;
	struct mbWriteMultipleRegisters FB_AcycWrite;
	struct mbReadHoldingRegisters FB_AcycRead_Para;
	signed short i_ADI_Size;
	signed short i_Index;
	signed short i_Index_Write;
	signed short arr_WriteStartingAddress[32];
	signed short i_ADI;
	unsigned long di_Press;
	unsigned long di_Press_psi;
	float r_Press;
	float r_PressConvert;
	unsigned short arr_i_DW_Temp[2];
	unsigned short arr_di_Press_psi[2];
	struct TON tm_WriteEvent;
	signed short i_CompareIndex;
	signed short i_writesize;
	signed short i_arr_WriteBuffer[18];
	signed short i_Size;
	signed short i_SizeofStruct;
	unsigned short ui_AcycWtStatus;
	unsigned short i_wttest;
	signed short i_StartAddressOutput;
	signed short i_StartAddressInput;
	signed short i_datasize;
	unsigned short ui_Compare;
	unsigned short ui_Ctrl;
	struct TON tm_Compare;
	signed short i_test;
	unsigned short i_nrRegisters;
	plcbit IN_b_Enable;
	plcbit b_Init;
	plcbit b_read;
	plcbit b_AcycRD_Enable;
	plcbit b_AcycRD_Done;
	plcbit b_AcycRD_Tick;
	plcbit b_AcycRdDnRising;
	plcbit b_WriteEvent;
	plcbit b_AcycWT_Done;
	plcbit b_WriteEventONS;
	plcbit b_Temp2;
	plcbit b_AcycWT_DN_Rising;
	plcbit b_AcycWT_Start;
	plcbit b_AcycWT_Rising;
	plcbit b_AcycWTDnRising;
	plcbit b_test;
	plcbit b_temp1;
	plcbit b_Compare;
};
_BUR_PUBLIC void FB_NDSN_MB_PBFlex_Process(struct FB_NDSN_MB_PBFlex_Process* inst);
