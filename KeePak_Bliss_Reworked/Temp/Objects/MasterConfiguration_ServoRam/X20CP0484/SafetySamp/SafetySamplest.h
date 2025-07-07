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

#ifndef __AS__TYPE_ConfigurationBitOptionsTypeV1
#define __AS__TYPE_ConfigurationBitOptionsTypeV1
typedef struct ConfigurationBitOptionsTypeV1
{	unsigned char BitData[64];
} ConfigurationBitOptionsTypeV1;
#endif

#ifndef __AS__TYPE_ConfigurationDeviceTypeV1
#define __AS__TYPE_ConfigurationDeviceTypeV1
typedef struct ConfigurationDeviceTypeV1
{	unsigned short SADR;
	unsigned char UDID[6];
} ConfigurationDeviceTypeV1;
#endif

#ifndef __AS__TYPE_ConfigurationDintOptionsTypeV1
#define __AS__TYPE_ConfigurationDintOptionsTypeV1
typedef struct ConfigurationDintOptionsTypeV1
{	unsigned short ID;
	signed long Value;
} ConfigurationDintOptionsTypeV1;
#endif

#ifndef __AS__TYPE_ConfigurationIntOptionsTypeV1
#define __AS__TYPE_ConfigurationIntOptionsTypeV1
typedef struct ConfigurationIntOptionsTypeV1
{	unsigned short ID;
	signed short Value;
} ConfigurationIntOptionsTypeV1;
#endif

#ifndef __AS__TYPE_ConfigurationModuleFlagsTypeV1
#define __AS__TYPE_ConfigurationModuleFlagsTypeV1
typedef struct ConfigurationModuleFlagsTypeV1
{	unsigned char Optional[128];
	unsigned char Startup[128];
	unsigned char NotPresent[128];
} ConfigurationModuleFlagsTypeV1;
#endif

#ifndef __AS__TYPE_ConfigurationUdintOptionsTypeV1
#define __AS__TYPE_ConfigurationUdintOptionsTypeV1
typedef struct ConfigurationUdintOptionsTypeV1
{	unsigned short ID;
	unsigned long Value;
} ConfigurationUdintOptionsTypeV1;
#endif

#ifndef __AS__TYPE_ConfigurationUintOptionsTypeV1
#define __AS__TYPE_ConfigurationUintOptionsTypeV1
typedef struct ConfigurationUintOptionsTypeV1
{	unsigned short ID;
	unsigned short Value;
} ConfigurationUintOptionsTypeV1;
#endif

#ifndef __AS__TYPE_DownloadAcknExtMaOpTypeV1
#define __AS__TYPE_DownloadAcknExtMaOpTypeV1
typedef struct DownloadAcknExtMaOpTypeV1
{	plcbit AcknIntOptions[64];
	plcbit AcknUintOptions[64];
	plcbit AcknDintOptions[64];
	plcbit AcknUdintOptions[64];
} DownloadAcknExtMaOpTypeV1;
#endif

#ifndef __AS__TYPE_DownloadAcknMaOpTypeV1
#define __AS__TYPE_DownloadAcknMaOpTypeV1
typedef struct DownloadAcknMaOpTypeV1
{	unsigned char AcknBitOptions[64];
} DownloadAcknMaOpTypeV1;
#endif

#ifndef __AS__TYPE_DownloadCmdApplicationTypeV1
#define __AS__TYPE_DownloadCmdApplicationTypeV1
typedef struct DownloadCmdApplicationTypeV1
{	unsigned short Version;
	plcstring Password[17];
	unsigned long UDID_Low;
	unsigned short UDID_High;
	unsigned short ApplicationID;
	plcstring Device[81];
	plcstring File[81];
	unsigned char Unlock;
} DownloadCmdApplicationTypeV1;
#endif

#ifndef __AS__TYPE_DownloadCmdExtMaOpTypeV1
#define __AS__TYPE_DownloadCmdExtMaOpTypeV1
typedef struct DownloadCmdExtMaOpTypeV1
{	unsigned short Version;
	plcstring Password[17];
	unsigned long UDID_Low;
	unsigned short UDID_High;
	unsigned char Unlock;
	unsigned long pIntDataInput;
	unsigned short NumberIntInput;
	unsigned long pUintDataInput;
	unsigned short NumberUintInput;
	unsigned long pDintDataInput;
	unsigned short NumberDintInput;
	unsigned long pUdintDataInput;
	unsigned short NumberUdintInput;
	unsigned long pAcknMachineOptions;
	unsigned long pIntDataOutput;
	unsigned short NumberIntOutput;
	unsigned long pUintDataOutput;
	unsigned short NumberUintOutput;
	unsigned long pDintDataOutput;
	unsigned short NumberDintOutput;
	unsigned long pUdintDataOutput;
	unsigned short NumberUdintOutput;
} DownloadCmdExtMaOpTypeV1;
#endif

#ifndef __AS__TYPE_DownloadCmdMaOpTypeV1
#define __AS__TYPE_DownloadCmdMaOpTypeV1
typedef struct DownloadCmdMaOpTypeV1
{	unsigned short Version;
	plcstring Password[17];
	unsigned long UDID_Low;
	unsigned short UDID_High;
	unsigned char Unlock;
	unsigned long pDeviceListInput;
	unsigned short NumberDevicesInput;
	unsigned long pMachineOptionsInput;
	unsigned long pModuleFlagsInput;
	unsigned long pAcknMachineOptions;
	unsigned long pDeviceListOutput;
	unsigned short NumberDevicesOutput;
	unsigned long pMachineOptionsOutput;
	unsigned long pModuleFlagsOutput;
} DownloadCmdMaOpTypeV1;
#endif

#ifndef __AS__TYPE_DownloadDeviceTypeV1
#define __AS__TYPE_DownloadDeviceTypeV1
typedef struct DownloadDeviceTypeV1
{	unsigned short SADR;
	unsigned long UDID_Low;
	unsigned short UDID_High;
} DownloadDeviceTypeV1;
#endif

#ifndef __AS__TYPE_RemoteControlCmdTypeV1
#define __AS__TYPE_RemoteControlCmdTypeV1
typedef struct RemoteControlCmdTypeV1
{	unsigned short Version;
	unsigned short Command;
	unsigned short Number;
	unsigned short Data;
	plcstring Password[17];
	plcstring NewPassword[17];
} RemoteControlCmdTypeV1;
#endif

#ifndef __AS__TYPE_RemoteControlStatusTypeV1
#define __AS__TYPE_RemoteControlStatusTypeV1
typedef struct RemoteControlStatusTypeV1
{	unsigned short Command;
	unsigned short Number;
	unsigned short Status;
	unsigned short State;
	unsigned short EnterData;
	unsigned short EnterNumber;
	unsigned short EnterExecuteStatus;
	unsigned char SafeOSState;
	unsigned char SafeKEYChanged;
	unsigned char LedTestActive;
	unsigned char Scanning;
	unsigned char openSAFETYstate;
	unsigned char FailSafe;
	unsigned short NumberOfMissingModules;
	unsigned short NumberOfUDIDMismatches;
	unsigned short NumberOfDifferentFirmware;
	unsigned short SADR[101];
	unsigned char MissingModules[16];
	unsigned char UDIDMismatches[16];
	unsigned char DifferentFirmware[16];
} RemoteControlStatusTypeV1;
#endif

#ifndef __AS__TYPE_IOAC_I_TYPE
#define __AS__TYPE_IOAC_I_TYPE
typedef struct IOAC_I_TYPE
{	unsigned short StateMan;
	unsigned short ErrMan;
	unsigned long Init;
	unsigned long Taskhandle;
	unsigned long Semaphore;
	unsigned long Requestsize;
	unsigned long Answersize;
	unsigned long pAccessObj;
	unsigned long Offset;
	unsigned long flags;
} IOAC_I_TYPE;
#endif

#ifndef __AS__TYPE_EPL_I_TYPE
#define __AS__TYPE_EPL_I_TYPE
typedef struct EPL_I_TYPE
{	unsigned long init;
	unsigned long hdl;
	unsigned long st;
	unsigned long errInfo;
	unsigned long size;
	unsigned char bus;
	unsigned char sl;
	unsigned char ss;
	unsigned char if_;
	unsigned char nd;
	unsigned long tid;
} EPL_I_TYPE;
#endif

unsigned short itoahex(unsigned long value, unsigned long pString);
_BUR_PUBLIC unsigned long swapUDINT(unsigned long IN);
_BUR_PUBLIC unsigned short swapUINT(unsigned short IN);
_BUR_PUBLIC unsigned long brsmemset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC unsigned long brsmemcpy(unsigned long pDest, unsigned long pSrc, unsigned long length);
_BUR_PUBLIC unsigned long brsstrlen(unsigned long pString);
struct safeRemoteControl
{	unsigned short SafeLOGICID;
	unsigned long pCommandData;
	unsigned short StatusID;
	RemoteControlStatusTypeV1 SafeLOGICStatus;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	unsigned long i_handle;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
};
_BUR_PUBLIC void safeRemoteControl(struct safeRemoteControl* inst);
struct safeDownloadApplication
{	unsigned short SafeLOGICID;
	unsigned long pCommandData;
	unsigned short StatusID;
	unsigned long ApplicationCRC;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	unsigned long i_handle;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit UnlockRequired;
};
_BUR_PUBLIC void safeDownloadApplication(struct safeDownloadApplication* inst);
struct safeDownloadData
{	unsigned short SafeLOGICID;
	unsigned short Type;
	unsigned long pCommandData;
	unsigned short StatusID;
	unsigned long Timestamp;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	unsigned long i_handle;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit UnlockRequired;
};
_BUR_PUBLIC void safeDownloadData(struct safeDownloadData* inst);
struct AsIOAccRead
{	unsigned long pDeviceName;
	unsigned long pChannelName;
	unsigned short status;
	unsigned long value;
	IOAC_I_TYPE intern;
	plcbit enable;
};
_BUR_PUBLIC void AsIOAccRead(struct AsIOAccRead* inst);
struct EplSDORead
{	plcstring(* pDevice)[81];
	unsigned char node;
	unsigned short index;
	unsigned char subindex;
	unsigned long pData;
	unsigned long datalen;
	unsigned short status;
	unsigned long errorinfo;
	unsigned long readlen;
	EPL_I_TYPE intern;
	plcbit enable;
};
_BUR_PUBLIC void EplSDORead(struct EplSDORead* inst);
_BUR_LOCAL DownloadCmdApplicationTypeV1 appcmd1;
_BUR_LOCAL DownloadAcknMaOpTypeV1 dataAcknMachineOptions;
_BUR_LOCAL DownloadCmdMaOpTypeV1 datacmd1;
_BUR_LOCAL DownloadCmdExtMaOpTypeV1 datacmd2;
_BUR_LOCAL ConfigurationBitOptionsTypeV1 dataMachineOptionsBitInput;
_BUR_LOCAL ConfigurationModuleFlagsTypeV1 dataModuleFlagsInput;
_BUR_LOCAL plcbit dialogApplication;
_BUR_LOCAL plcbit dialogButtonLeft;
_BUR_LOCAL plcbit dialogButtonRight;
_BUR_LOCAL plcbit dialogData;
_BUR_LOCAL plcbit dialogExtData;
_BUR_LOCAL plcbit dialogRemoteCmd;
_BUR_LOCAL plcbit executeapp1;
_BUR_LOCAL plcbit executedata1;
_BUR_LOCAL plcbit executedata2;
_BUR_LOCAL plcbit executeRemoteCmd;
_BUR_LOCAL unsigned short indexButtonLeft;
_BUR_LOCAL unsigned short indexButtonRight;
_BUR_LOCAL unsigned short indexCompareTextData;
_BUR_LOCAL unsigned short indexCompareTextExtData;
_BUR_LOCAL unsigned short indexFAILLed;
_BUR_LOCAL unsigned short indexFwAcknLed;
_BUR_LOCAL unsigned short indexHeaderText;
_BUR_LOCAL unsigned short indexMessageText;
_BUR_LOCAL unsigned short indexMxchgLed;
_BUR_LOCAL unsigned short indexRELed;
_BUR_LOCAL plcstring Interface[81];
_BUR_LOCAL unsigned char Node;
_BUR_LOCAL struct ConfigurationDeviceTypeV1(* pDeviceListOut)[2];
_BUR_LOCAL struct ConfigurationBitOptionsTypeV1(* pMachineOptionsBitOut);
_BUR_LOCAL struct ConfigurationModuleFlagsTypeV1(* pModuleFlagsOut);
_BUR_LOCAL struct EplSDORead readUDIDhighSL;
_BUR_LOCAL struct AsIOAccRead readUDIDhighSLX;
_BUR_LOCAL struct EplSDORead readUDIDlowSL;
_BUR_LOCAL struct AsIOAccRead readUDIDlowSLX;
_BUR_LOCAL RemoteControlCmdTypeV1 remotecmd;
_BUR_LOCAL struct safeDownloadApplication safeDownloadApplication_0;
_BUR_LOCAL struct safeDownloadData safeDownloadData_0;
_BUR_LOCAL struct safeDownloadData safeDownloadData_1;
_BUR_LOCAL struct safeRemoteControl safeRemoteControl_0;
_BUR_LOCAL plcbit slxused;
_BUR_LOCAL plcstring Station[81];
_BUR_LOCAL unsigned short statusAcknInfoData;
_BUR_LOCAL unsigned short statusAcknInfoExtData;
_BUR_LOCAL unsigned char statusButtonActiv[16];
_BUR_LOCAL unsigned char statusButtonInactiv[16];
_BUR_LOCAL unsigned short statusButtonUnlockApp;
_BUR_LOCAL unsigned short statusButtonUnlockData;
_BUR_LOCAL unsigned short statusButtonUnlockExtData;
_BUR_LOCAL unsigned short statusDialog;
_BUR_LOCAL unsigned short statusSetPassword;
_BUR_LOCAL unsigned short statusSLInformation;
_BUR_LOCAL unsigned short stautsSLXInformation;
_BUR_LOCAL unsigned short UDID_High;
_BUR_LOCAL unsigned long UDID_Low;
_BUR_LOCAL DownloadAcknExtMaOpTypeV1 visuAcknExtData;
_BUR_LOCAL plcbit visuAcknMachineOptions[512];
_BUR_LOCAL plcstring visuApplicationCRC[9];
_BUR_LOCAL struct DownloadDeviceTypeV1 visuDeviceListInput[2];
_BUR_LOCAL struct DownloadDeviceTypeV1 visuDeviceListOutput[2];
_BUR_LOCAL ConfigurationDintOptionsTypeV1 visuDintInput;
_BUR_LOCAL ConfigurationDintOptionsTypeV1 visuDintOutput;
_BUR_LOCAL plcbit visuEnableDINTOptions;
_BUR_LOCAL plcbit visuEnableINTOptions;
_BUR_LOCAL plcbit visuEnableMachineOptions;
_BUR_LOCAL plcbit visuEnableModuleFlags;
_BUR_LOCAL plcbit visuEnableUDINTOptions;
_BUR_LOCAL plcbit visuEnableUINTOptions;
_BUR_LOCAL ConfigurationIntOptionsTypeV1 visuIntInput;
_BUR_LOCAL ConfigurationIntOptionsTypeV1 visuIntOutput;
_BUR_LOCAL plcbit visuMachineOptionsBitInput[512];
_BUR_LOCAL plcbit visuMachineOptionsBitOutput[512];
_BUR_LOCAL plcbit visuModuleFlagsNotPresentInput[1024];
_BUR_LOCAL plcbit visuModuleFlagsNotPresentOutput[1024];
_BUR_LOCAL plcbit visuModuleFlagsOptionalInput[1024];
_BUR_LOCAL plcbit visuModuleFlagsOptionalOutput[1024];
_BUR_LOCAL plcbit visuModuleFlagsStartupInput[1024];
_BUR_LOCAL plcbit visuModuleFlagsStartupOutput[1024];
_BUR_LOCAL plcstring visuUDID_High[9];
_BUR_LOCAL plcstring visuUDID_Low[9];
_BUR_LOCAL ConfigurationUdintOptionsTypeV1 visuUdintInput;
_BUR_LOCAL ConfigurationUdintOptionsTypeV1 visuUdintOutput;
_BUR_LOCAL ConfigurationUintOptionsTypeV1 visuUintInput;
_BUR_LOCAL ConfigurationUintOptionsTypeV1 visuUintOutput;
_BUR_LOCAL unsigned short visuUsedSLIDData;
_BUR_LOCAL unsigned short visuUsedSLIDRemote;
_BUR_LOCAL unsigned short xcnt;
_BUR_LOCAL signed short visuLockSDP;
_GLOBAL unsigned short safeVERSION_R107;
_GLOBAL unsigned short safeDATA_TYPE_MAOP;
_GLOBAL unsigned short safeDATA_TYPE_EXTMAOP;
_GLOBAL unsigned short safeCMD_N_UDID_ACKN;
_GLOBAL unsigned short safeCMD_4_UDID_ACKN;
_GLOBAL unsigned short safeCMD_3_UDID_ACKN;
_GLOBAL unsigned short safeCMD_2_UDID_ACKN;
_GLOBAL unsigned short safeCMD_1_UDID_ACKN;
_GLOBAL unsigned short safeCMD_FW_ACKN;
_GLOBAL unsigned short safeCMD_SK_XCHG;
_GLOBAL unsigned short safeCMD_SK_FORMAT;
_GLOBAL unsigned short safeCMD_RESET;
_GLOBAL unsigned short safeCMD_CLEAR_DATA;
_GLOBAL unsigned short safeERR_DL_COMPARE_FAILED;
