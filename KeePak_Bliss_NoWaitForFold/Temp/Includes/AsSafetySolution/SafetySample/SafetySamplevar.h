/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730232408_29_
#define _BUR_1730232408_29_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL signed short visuLockSDP;
_BUR_LOCAL unsigned short xcnt;
_BUR_LOCAL unsigned short visuUsedSLIDRemote;
_BUR_LOCAL unsigned short visuUsedSLIDData;
_BUR_LOCAL struct ConfigurationUintOptionsTypeV1 visuUintOutput;
_BUR_LOCAL struct ConfigurationUintOptionsTypeV1 visuUintInput;
_BUR_LOCAL struct ConfigurationUdintOptionsTypeV1 visuUdintOutput;
_BUR_LOCAL struct ConfigurationUdintOptionsTypeV1 visuUdintInput;
_BUR_LOCAL plcstring visuUDID_Low[9];
_BUR_LOCAL plcstring visuUDID_High[9];
_BUR_LOCAL plcbit visuModuleFlagsStartupOutput[1024];
_BUR_LOCAL plcbit visuModuleFlagsStartupInput[1024];
_BUR_LOCAL plcbit visuModuleFlagsOptionalOutput[1024];
_BUR_LOCAL plcbit visuModuleFlagsOptionalInput[1024];
_BUR_LOCAL plcbit visuModuleFlagsNotPresentOutput[1024];
_BUR_LOCAL plcbit visuModuleFlagsNotPresentInput[1024];
_BUR_LOCAL plcbit visuMachineOptionsBitOutput[512];
_BUR_LOCAL plcbit visuMachineOptionsBitInput[512];
_BUR_LOCAL struct ConfigurationIntOptionsTypeV1 visuIntOutput;
_BUR_LOCAL struct ConfigurationIntOptionsTypeV1 visuIntInput;
_BUR_LOCAL plcbit visuEnableUINTOptions;
_BUR_LOCAL plcbit visuEnableUDINTOptions;
_BUR_LOCAL plcbit visuEnableModuleFlags;
_BUR_LOCAL plcbit visuEnableMachineOptions;
_BUR_LOCAL plcbit visuEnableINTOptions;
_BUR_LOCAL plcbit visuEnableDINTOptions;
_BUR_LOCAL struct ConfigurationDintOptionsTypeV1 visuDintOutput;
_BUR_LOCAL struct ConfigurationDintOptionsTypeV1 visuDintInput;
_BUR_LOCAL struct DownloadDeviceTypeV1 visuDeviceListOutput[2];
_BUR_LOCAL struct DownloadDeviceTypeV1 visuDeviceListInput[2];
_BUR_LOCAL plcstring visuApplicationCRC[9];
_BUR_LOCAL plcbit visuAcknMachineOptions[512];
_BUR_LOCAL struct DownloadAcknExtMaOpTypeV1 visuAcknExtData;
_BUR_LOCAL unsigned long UDID_Low;
_BUR_LOCAL unsigned short UDID_High;
_BUR_LOCAL unsigned short stautsSLXInformation;
_BUR_LOCAL unsigned short statusSLInformation;
_BUR_LOCAL unsigned short statusSetPassword;
_BUR_LOCAL unsigned short statusDialog;
_BUR_LOCAL unsigned short statusButtonUnlockExtData;
_BUR_LOCAL unsigned short statusButtonUnlockData;
_BUR_LOCAL unsigned short statusButtonUnlockApp;
_BUR_LOCAL unsigned char statusButtonInactiv[16];
_BUR_LOCAL unsigned char statusButtonActiv[16];
_BUR_LOCAL unsigned short statusAcknInfoExtData;
_BUR_LOCAL unsigned short statusAcknInfoData;
_BUR_LOCAL plcstring Station[81];
_BUR_LOCAL plcbit slxused;
_BUR_LOCAL struct safeRemoteControl safeRemoteControl_0;
_BUR_LOCAL struct safeDownloadData safeDownloadData_1;
_BUR_LOCAL struct safeDownloadData safeDownloadData_0;
_BUR_LOCAL struct safeDownloadApplication safeDownloadApplication_0;
_BUR_LOCAL struct RemoteControlCmdTypeV1 remotecmd;
_BUR_LOCAL struct AsIOAccRead readUDIDlowSLX;
_BUR_LOCAL struct EplSDORead readUDIDlowSL;
_BUR_LOCAL struct AsIOAccRead readUDIDhighSLX;
_BUR_LOCAL struct EplSDORead readUDIDhighSL;
_BUR_LOCAL struct ConfigurationModuleFlagsTypeV1 *pModuleFlagsOut;
_BUR_LOCAL struct ConfigurationBitOptionsTypeV1 *pMachineOptionsBitOut;
_BUR_LOCAL struct ConfigurationDeviceTypeV1 (*pDeviceListOut)[2];
_BUR_LOCAL unsigned char Node;
_BUR_LOCAL plcstring Interface[81];
_BUR_LOCAL unsigned short indexRELed;
_BUR_LOCAL unsigned short indexMxchgLed;
_BUR_LOCAL unsigned short indexMessageText;
_BUR_LOCAL unsigned short indexHeaderText;
_BUR_LOCAL unsigned short indexFwAcknLed;
_BUR_LOCAL unsigned short indexFAILLed;
_BUR_LOCAL unsigned short indexCompareTextExtData;
_BUR_LOCAL unsigned short indexCompareTextData;
_BUR_LOCAL unsigned short indexButtonRight;
_BUR_LOCAL unsigned short indexButtonLeft;
_BUR_LOCAL plcbit executeRemoteCmd;
_BUR_LOCAL plcbit executedata2;
_BUR_LOCAL plcbit executedata1;
_BUR_LOCAL plcbit executeapp1;
_BUR_LOCAL plcbit dialogRemoteCmd;
_BUR_LOCAL plcbit dialogExtData;
_BUR_LOCAL plcbit dialogData;
_BUR_LOCAL plcbit dialogButtonRight;
_BUR_LOCAL plcbit dialogButtonLeft;
_BUR_LOCAL plcbit dialogApplication;
_BUR_LOCAL struct ConfigurationModuleFlagsTypeV1 dataModuleFlagsInput;
_BUR_LOCAL struct ConfigurationBitOptionsTypeV1 dataMachineOptionsBitInput;
_BUR_LOCAL struct DownloadCmdExtMaOpTypeV1 datacmd2;
_BUR_LOCAL struct DownloadCmdMaOpTypeV1 datacmd1;
_BUR_LOCAL struct DownloadAcknMaOpTypeV1 dataAcknMachineOptions;
_BUR_LOCAL struct DownloadCmdApplicationTypeV1 appcmd1;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/AsSafetySolution/SafetySample/SafetySample.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730232408_29_ */

