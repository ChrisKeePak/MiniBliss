#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/SafetySamp/SafetySamplest.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/AsSafetySolution/SafetySample/SafetySample.nodebug"
#line 11 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/AsSafetySolution/SafetySample/SafetySample.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


{int zzIndex; plcstring* zzLValue=(plcstring*)remotecmd.Password; plcstring* zzRValue=(plcstring*)"safety"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)remotecmd.NewPassword; plcstring* zzRValue=(plcstring*)"safety"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)appcmd1.Password; plcstring* zzRValue=(plcstring*)"safety"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)datacmd1.Password; plcstring* zzRValue=(plcstring*)"safety"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)datacmd2.Password; plcstring* zzRValue=(plcstring*)"safety"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(visuUsedSLIDRemote=1);
(visuUsedSLIDData=1);

(slxused=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)Station; plcstring* zzRValue=(plcstring*)"IF6.ST6"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(visuEnableMachineOptions=1);
(visuEnableModuleFlags=1);

(visuLockSDP=2);



(remotecmd.Version=safeVERSION_R107);



(appcmd1.Version=safeVERSION_R107);

(appcmd1.ApplicationID=1);


(datacmd1.Version=safeVERSION_R107);

(datacmd1.pDeviceListInput=((unsigned long)(&visuDeviceListInput)));
(datacmd1.pMachineOptionsInput=((unsigned long)(&dataMachineOptionsBitInput)));
(datacmd1.pModuleFlagsInput=((unsigned long)(&dataModuleFlagsInput)));
(datacmd1.pAcknMachineOptions=((unsigned long)(&dataAcknMachineOptions)));


(datacmd2.Version=safeVERSION_R107);

(datacmd2.pIntDataInput=((unsigned long)(&visuIntInput)));
(datacmd2.NumberIntInput=1);
(datacmd2.pUintDataInput=((unsigned long)(&visuUintInput)));
(datacmd2.NumberUintInput=1);
(datacmd2.pDintDataInput=((unsigned long)(&visuDintInput)));
(datacmd2.NumberDintInput=1);
(datacmd2.pUdintDataInput=((unsigned long)(&visuUdintInput)));
(datacmd2.NumberUdintInput=1);
(datacmd2.pAcknMachineOptions=((unsigned long)(&visuAcknExtData)));




for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
}imp32769_endfor0_0:;


(statusButtonUnlockApp=1);
(statusButtonUnlockData=1);
(statusAcknInfoData=1);
(statusButtonUnlockExtData=1);
(statusAcknInfoExtData=1);
(statusDialog=1);


(visuUsedSLIDRemote=1);
(visuUsedSLIDData=1);

}}
#line 80 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/AsSafetySolution/SafetySample/SafetySample.nodebug"
#line 82 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/AsSafetySolution/SafetySample/SafetySample.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{




if((((unsigned long)(unsigned char)dialogRemoteCmd==(unsigned long)(unsigned char)1))){
(statusDialog=0);
(dialogRemoteCmd=0);
(indexButtonLeft=0);
(indexButtonRight=1);
(indexHeaderText=0);
if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_SK_FORMAT))){
(indexMessageText=0);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_SK_XCHG))){
(indexMessageText=1);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_1_UDID_ACKN))){
(indexMessageText=2);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_2_UDID_ACKN))){
(indexMessageText=3);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_3_UDID_ACKN))){
(indexMessageText=4);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_4_UDID_ACKN))){
(indexMessageText=5);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_N_UDID_ACKN))){
(indexMessageText=6);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_CLEAR_DATA))){
(indexMessageText=7);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_FW_ACKN))){
(indexMessageText=8);
}else if((((unsigned long)(unsigned short)remotecmd.Data==(unsigned long)(unsigned short)safeCMD_RESET))){
(indexMessageText=9);
}
}


if(((((unsigned long)(unsigned char)dialogButtonLeft==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)0)))){
(executeRemoteCmd=1);
(dialogButtonLeft=0);
(statusDialog=1);
}else if(((((unsigned long)(unsigned char)dialogButtonRight==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)0)))){
(dialogButtonRight=0);
(statusDialog=1);
}


if((((unsigned long)brsstrlen(((unsigned long)(&remotecmd.NewPassword)))<(unsigned long)6))){
(statusSetPassword=2);
}else{
(statusSetPassword=0);
}

(safeRemoteControl_0.SafeLOGICID=visuUsedSLIDRemote);;(safeRemoteControl_0.Execute=executeRemoteCmd);;(safeRemoteControl_0.pCommandData=((unsigned long)(&remotecmd)));;safeRemoteControl(&safeRemoteControl_0);

if(((((unsigned long)(unsigned char)safeRemoteControl_0.Done==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)safeRemoteControl_0.Error==(unsigned long)(unsigned char)1)))){
(executeRemoteCmd=0);
}


if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.SafeKEYChanged==(unsigned long)(unsigned char)1))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor7_0:;
(statusButtonActiv[1]=0);
(statusButtonInactiv[1]=1);
}else if(((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)1))&(((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)0)))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor8_0:;
(statusButtonActiv[3]=0);
(statusButtonInactiv[3]=1);
}else if(((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)2))&(((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)0)))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor9_0:;
(statusButtonActiv[4]=0);
(statusButtonInactiv[4]=1);
}else if(((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)3))&(((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)0)))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor10_0:;
(statusButtonActiv[5]=0);
(statusButtonInactiv[5]=1);
}else if(((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)4))&(((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)0)))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor11_0:;
(statusButtonActiv[6]=0);
(statusButtonInactiv[6]=1);
}else if(((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches>(unsigned long)(unsigned short)4))&(((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)0)))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor12_0:;
(statusButtonActiv[7]=0);
(statusButtonInactiv[7]=1);
}else if(((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfDifferentFirmware!=(unsigned long)(unsigned short)0))&(((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)0)))){
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor13_0:;
(statusButtonActiv[11]=0);
(statusButtonInactiv[11]=1);
}else{
for((xcnt=0);xcnt<=15;xcnt+=1){
(statusButtonActiv[xcnt]=1);
(statusButtonInactiv[xcnt]=0);
}imp1_endfor14_0:;
}

if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.LedTestActive==(unsigned long)(unsigned char)1))){
(indexMxchgLed=40);
}else if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.Scanning==(unsigned long)(unsigned char)1))){
(indexMxchgLed=30);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)1))){
(indexMxchgLed=1);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)2))){
(indexMxchgLed=2);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)3))){
(indexMxchgLed=3);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)4))){
(indexMxchgLed=4);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches>(unsigned long)(unsigned short)4))){
(indexMxchgLed=5);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfMissingModules!=(unsigned long)(unsigned short)0))){
(indexMxchgLed=20);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfUDIDMismatches==(unsigned long)(unsigned short)0))){
(indexMxchgLed=10);
}

if(((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.SafeKEYChanged==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfDifferentFirmware==(unsigned long)(unsigned short)0)))){
(indexFwAcknLed=10);
}else if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.SafeKEYChanged==(unsigned long)(unsigned char)1))){
(indexFwAcknLed=1);
}else if((((unsigned long)(unsigned short)safeRemoteControl_0.SafeLOGICStatus.NumberOfDifferentFirmware!=(unsigned long)(unsigned short)0))){
(indexFwAcknLed=2);
}

if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.FailSafe!=(unsigned long)(unsigned char)85))){
(indexFAILLed=2);
}else if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.openSAFETYstate==(unsigned long)(unsigned char)0))){
(indexFAILLed=0);
}else if((((unsigned long)(unsigned char)safeRemoteControl_0.SafeLOGICStatus.openSAFETYstate==(unsigned long)(unsigned char)1))){
(indexFAILLed=1);
}

(indexRELed=safeRemoteControl_0.SafeLOGICStatus.SafeOSState);





if((((unsigned long)(unsigned char)dialogApplication==(unsigned long)(unsigned char)1))){
(statusDialog=0);
(dialogApplication=0);
(indexButtonLeft=0);
(indexButtonRight=1);
(indexHeaderText=1);
(indexMessageText=10);
}


if(((((unsigned long)(unsigned char)dialogButtonLeft==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)1)))){
(appcmd1.Unlock=1);
(dialogButtonLeft=0);
(statusDialog=1);
}else if(((((unsigned long)(unsigned char)dialogButtonRight==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)1)))){
(appcmd1.Unlock=2);
(dialogButtonRight=0);
(statusDialog=1);
}


itoahex(safeDownloadApplication_0.ApplicationCRC,((unsigned long)(&visuApplicationCRC)));

(safeDownloadApplication_0.SafeLOGICID=appcmd1.ApplicationID);;(safeDownloadApplication_0.Execute=executeapp1);;(safeDownloadApplication_0.pCommandData=((unsigned long)(&appcmd1)));;safeDownloadApplication(&safeDownloadApplication_0);


if((((unsigned long)(unsigned char)safeDownloadApplication_0.UnlockRequired==(unsigned long)(unsigned char)1))){
(statusButtonUnlockApp=0);
}else{
(appcmd1.Unlock=0);
(statusButtonUnlockApp=1);
}





if((((unsigned long)(unsigned char)visuEnableMachineOptions==(unsigned long)(unsigned char)0))){
(datacmd1.pMachineOptionsInput=0);
}else{
(datacmd1.pMachineOptionsInput=((unsigned long)(&dataMachineOptionsBitInput)));
}


if((((unsigned long)(unsigned char)visuEnableModuleFlags==(unsigned long)(unsigned char)0))){
(datacmd1.pModuleFlagsInput=0);
}else{
(datacmd1.pModuleFlagsInput=((unsigned long)(&dataModuleFlagsInput)));
}


if((((unsigned long)(unsigned char)visuMachineOptionsBitInput[0]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataMachineOptionsBitInput.BitData[0]))->bit0=1);
}else{
(((_1byte_bit_field_*)(&dataMachineOptionsBitInput.BitData[0]))->bit0=0);
}

if((((unsigned long)(unsigned char)visuMachineOptionsBitInput[1]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataMachineOptionsBitInput.BitData[0]))->bit1=1);
}else{
(((_1byte_bit_field_*)(&dataMachineOptionsBitInput.BitData[0]))->bit1=0);
}

if((((unsigned long)(unsigned char)visuMachineOptionsBitInput[2]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataMachineOptionsBitInput.BitData[0]))->bit2=1);
}else{
(((_1byte_bit_field_*)(&dataMachineOptionsBitInput.BitData[0]))->bit2=0);
}

if((((unsigned long)(unsigned char)visuModuleFlagsOptionalInput[1]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Optional[0]))->bit1=1);
}else{
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Optional[0]))->bit1=0);
}

if((((unsigned long)(unsigned char)visuModuleFlagsOptionalInput[2]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Optional[0]))->bit2=1);
}else{
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Optional[0]))->bit2=0);
}

if((((unsigned long)(unsigned char)visuModuleFlagsStartupInput[1]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Startup[0]))->bit1=1);
}else{
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Startup[0]))->bit1=0);
}

if((((unsigned long)(unsigned char)visuModuleFlagsStartupInput[2]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Startup[0]))->bit2=1);
}else{
(((_1byte_bit_field_*)(&dataModuleFlagsInput.Startup[0]))->bit2=0);
}

if((((unsigned long)(unsigned char)visuModuleFlagsNotPresentInput[1]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataModuleFlagsInput.NotPresent[0]))->bit1=1);
}else{
(((_1byte_bit_field_*)(&dataModuleFlagsInput.NotPresent[0]))->bit1=0);
}

if((((unsigned long)(unsigned char)visuModuleFlagsNotPresentInput[2]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataModuleFlagsInput.NotPresent[0]))->bit2=1);
}else{
(((_1byte_bit_field_*)(&dataModuleFlagsInput.NotPresent[0]))->bit2=0);
}


if((((unsigned long)(unsigned char)visuAcknMachineOptions[0]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataAcknMachineOptions.AcknBitOptions[0]))->bit0=1);
}else{
(((_1byte_bit_field_*)(&dataAcknMachineOptions.AcknBitOptions[0]))->bit0=0);
}

if((((unsigned long)(unsigned char)visuAcknMachineOptions[1]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataAcknMachineOptions.AcknBitOptions[0]))->bit1=1);
}else{
(((_1byte_bit_field_*)(&dataAcknMachineOptions.AcknBitOptions[0]))->bit1=0);
}

if((((unsigned long)(unsigned char)visuAcknMachineOptions[2]==(unsigned long)(unsigned char)1))){
(((_1byte_bit_field_*)(&dataAcknMachineOptions.AcknBitOptions[0]))->bit2=1);
}else{
(((_1byte_bit_field_*)(&dataAcknMachineOptions.AcknBitOptions[0]))->bit2=0);
}


if((((unsigned long)(unsigned char)dialogData==(unsigned long)(unsigned char)1))){
(statusDialog=0);
(dialogData=0);
(indexButtonLeft=0);
(indexButtonRight=1);
(indexHeaderText=2);
(indexMessageText=11);
}


if(((((unsigned long)(unsigned char)dialogButtonLeft==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)2)))){
(datacmd1.Unlock=1);
(dialogButtonLeft=0);
(statusDialog=1);
}else if(((((unsigned long)(unsigned char)dialogButtonRight==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)2)))){
(datacmd1.Unlock=2);
(dialogButtonRight=0);
(statusDialog=1);
}

(safeDownloadData_0.SafeLOGICID=visuUsedSLIDData);;(safeDownloadData_0.Execute=executedata1);;(safeDownloadData_0.Type=safeDATA_TYPE_MAOP);;(safeDownloadData_0.pCommandData=((unsigned long)(&datacmd1)));;safeDownloadData(&safeDownloadData_0);


if((((unsigned long)(unsigned short)safeDownloadData_0.StatusID==(unsigned long)(unsigned short)safeERR_DL_COMPARE_FAILED))){
(indexCompareTextData=2);
}else{
(indexCompareTextData=0);
}

if((((unsigned long)(unsigned char)safeDownloadData_0.UnlockRequired==(unsigned long)(unsigned char)1))){

(indexCompareTextData=1);
if(((((unsigned long)datacmd1.pDeviceListOutput!=(unsigned long)0))&(((unsigned long)(unsigned short)datacmd1.NumberDevicesOutput!=(unsigned long)(unsigned short)0)))){
(pDeviceListOut=datacmd1.pDeviceListOutput);


(visuDeviceListOutput[0].SADR=((*(pDeviceListOut))[0].SADR));
brsmemcpy(((unsigned long)(&visuDeviceListOutput[0].UDID_High)),((unsigned long)(&((*(pDeviceListOut))[0].UDID[0]))),2);

(visuDeviceListOutput[0].UDID_High=swapUINT(visuDeviceListOutput[0].UDID_High));
brsmemcpy(((unsigned long)(&visuDeviceListOutput[0].UDID_Low)),((unsigned long)(&((*(pDeviceListOut))[0].UDID[2]))),4);

(visuDeviceListOutput[0].UDID_Low=swapUDINT(visuDeviceListOutput[0].UDID_Low));

(visuDeviceListOutput[1].SADR=((*(pDeviceListOut))[1].SADR));
brsmemcpy(((unsigned long)(&visuDeviceListOutput[1].UDID_High)),((unsigned long)(&((*(pDeviceListOut))[1].UDID[0]))),2);

(visuDeviceListOutput[1].UDID_High=swapUINT(visuDeviceListOutput[1].UDID_High));
brsmemcpy(((unsigned long)(&visuDeviceListOutput[1].UDID_Low)),((unsigned long)(&((*(pDeviceListOut))[1].UDID[2]))),4);

(visuDeviceListOutput[1].UDID_Low=swapUDINT(visuDeviceListOutput[1].UDID_Low));
}

if((((unsigned long)datacmd1.pMachineOptionsOutput!=(unsigned long)0))){
(pMachineOptionsBitOut=datacmd1.pMachineOptionsOutput);


if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pMachineOptionsBitOut)).BitData[0])))->bit0==(unsigned long)(unsigned char)1))){
(visuMachineOptionsBitOutput[0]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pMachineOptionsBitOut)).BitData[0])))->bit1==(unsigned long)(unsigned char)1))){
(visuMachineOptionsBitOutput[1]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pMachineOptionsBitOut)).BitData[0])))->bit2==(unsigned long)(unsigned char)1))){
(visuMachineOptionsBitOutput[2]=1);
}
}

if((((unsigned long)datacmd1.pModuleFlagsOutput!=(unsigned long)0))){
(pModuleFlagsOut=datacmd1.pModuleFlagsOutput);


if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pModuleFlagsOut)).Optional[0])))->bit1==(unsigned long)(unsigned char)1))){
(visuModuleFlagsOptionalOutput[1]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pModuleFlagsOut)).Optional[0])))->bit2==(unsigned long)(unsigned char)1))){
(visuModuleFlagsOptionalOutput[2]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pModuleFlagsOut)).Startup[0])))->bit1==(unsigned long)(unsigned char)1))){
(visuModuleFlagsStartupOutput[1]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pModuleFlagsOut)).Startup[0])))->bit2==(unsigned long)(unsigned char)1))){
(visuModuleFlagsStartupOutput[2]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pModuleFlagsOut)).NotPresent[0])))->bit1==(unsigned long)(unsigned char)1))){
(visuModuleFlagsNotPresentOutput[1]=1);
}

if((((unsigned long)(unsigned char)((_1byte_bit_field_*)(&((*(pModuleFlagsOut)).NotPresent[0])))->bit2==(unsigned long)(unsigned char)1))){
(visuModuleFlagsNotPresentOutput[2]=1);
}
}

(statusAcknInfoData=0);

if(((((unsigned long)(unsigned char)visuAcknMachineOptions[0]==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)visuAcknMachineOptions[1]==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)visuAcknMachineOptions[2]==(unsigned long)(unsigned char)1)))){
(statusButtonUnlockData=0);
}
}else if(((((unsigned long)(unsigned char)safeDownloadData_0.Done==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)safeDownloadData_0.Error==(unsigned long)(unsigned char)1)))){

brsmemset(((unsigned long)(&visuDeviceListOutput)),0,24);
brsmemset(((unsigned long)(&visuMachineOptionsBitOutput)),0,512);
brsmemset(((unsigned long)(&visuModuleFlagsOptionalOutput)),0,1024);
brsmemset(((unsigned long)(&visuModuleFlagsStartupOutput)),0,1024);
brsmemset(((unsigned long)(&visuModuleFlagsNotPresentOutput)),0,1024);

(statusAcknInfoData=1);

(datacmd1.Unlock=0);
(statusButtonUnlockData=1);

(visuAcknMachineOptions[0]=0);
(visuAcknMachineOptions[1]=0);
(visuAcknMachineOptions[2]=0);
}else{

(statusAcknInfoData=1);

(datacmd1.Unlock=0);
(statusButtonUnlockData=1);
}





if((((unsigned long)(unsigned char)visuEnableINTOptions!=(unsigned long)(unsigned char)0))){
(datacmd2.pIntDataInput=((unsigned long)(&visuIntInput)));
(datacmd2.NumberIntInput=1);
}else{
(datacmd2.pIntDataInput=0);
(datacmd2.NumberIntInput=0);
}

if((((unsigned long)(unsigned char)visuEnableUINTOptions!=(unsigned long)(unsigned char)0))){
(datacmd2.pUintDataInput=((unsigned long)(&visuUintInput)));
(datacmd2.NumberUintInput=1);
}else{
(datacmd2.pUintDataInput=0);
(datacmd2.NumberUintInput=0);
}

if((((unsigned long)(unsigned char)visuEnableDINTOptions!=(unsigned long)(unsigned char)0))){
(datacmd2.pDintDataInput=((unsigned long)(&visuDintInput)));
(datacmd2.NumberDintInput=1);
}else{
(datacmd2.pDintDataInput=0);
(datacmd2.NumberDintInput=0);
}

if((((unsigned long)(unsigned char)visuEnableUDINTOptions!=(unsigned long)(unsigned char)0))){
(datacmd2.pUdintDataInput=((unsigned long)(&visuUdintInput)));
(datacmd2.NumberUdintInput=1);
}else{
(datacmd2.pUdintDataInput=0);
(datacmd2.NumberUdintInput=0);
}


if((((unsigned long)(unsigned char)dialogExtData==(unsigned long)(unsigned char)1))){
(statusDialog=0);
(dialogExtData=0);
(indexButtonLeft=0);
(indexButtonRight=1);
(indexHeaderText=3);
(indexMessageText=11);
}


if(((((unsigned long)(unsigned char)dialogButtonLeft==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)3)))){
(datacmd2.Unlock=1);
(dialogButtonLeft=0);
(statusDialog=1);
}else if(((((unsigned long)(unsigned char)dialogButtonRight==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned short)indexHeaderText==(unsigned long)(unsigned short)3)))){
(datacmd2.Unlock=2);
(dialogButtonRight=0);
(statusDialog=1);
}

(safeDownloadData_1.SafeLOGICID=visuUsedSLIDData);;(safeDownloadData_1.Execute=executedata2);;(safeDownloadData_1.Type=safeDATA_TYPE_EXTMAOP);;(safeDownloadData_1.pCommandData=((unsigned long)(&datacmd2)));;safeDownloadData(&safeDownloadData_1);


if((((unsigned long)(unsigned short)safeDownloadData_1.StatusID==(unsigned long)(unsigned short)safeERR_DL_COMPARE_FAILED))){
(indexCompareTextExtData=2);
}else{
(indexCompareTextExtData=0);
}

if((((unsigned long)(unsigned char)safeDownloadData_1.UnlockRequired==(unsigned long)(unsigned char)1))){

(indexCompareTextExtData=1);


if(((((unsigned long)datacmd2.pIntDataOutput!=(unsigned long)0))&(((unsigned long)(unsigned short)datacmd2.NumberIntOutput!=(unsigned long)(unsigned short)0)))){
brsmemcpy(((unsigned long)(&visuIntOutput)),datacmd2.pIntDataOutput,4);
}

if(((((unsigned long)datacmd2.pUintDataOutput!=(unsigned long)0))&(((unsigned long)(unsigned short)datacmd2.NumberUintOutput!=(unsigned long)(unsigned short)0)))){
brsmemcpy(((unsigned long)(&visuUintOutput)),datacmd2.pUintDataOutput,4);
}

if(((((unsigned long)datacmd2.pDintDataOutput!=(unsigned long)0))&(((unsigned long)(unsigned short)datacmd2.NumberDintOutput!=(unsigned long)(unsigned short)0)))){
brsmemcpy(((unsigned long)(&visuDintOutput)),datacmd2.pDintDataOutput,8);
}

if(((((unsigned long)datacmd2.pUdintDataOutput!=(unsigned long)0))&(((unsigned long)(unsigned short)datacmd2.NumberUdintOutput!=(unsigned long)(unsigned short)0)))){
brsmemcpy(((unsigned long)(&visuUdintOutput)),datacmd2.pUdintDataOutput,8);
}

(statusAcknInfoExtData=0);

if(((((unsigned long)(unsigned char)visuAcknExtData.AcknIntOptions[0]==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)visuAcknExtData.AcknUintOptions[0]==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)visuAcknExtData.AcknDintOptions[0]==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)visuAcknExtData.AcknUdintOptions[0]==(unsigned long)(unsigned char)1)))){
(statusButtonUnlockExtData=0);
}
}else if(((((unsigned long)(unsigned char)safeDownloadData_1.Done==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)safeDownloadData_1.Error==(unsigned long)(unsigned char)1)))){

brsmemset(((unsigned long)(&visuIntOutput)),0,4);
brsmemset(((unsigned long)(&visuUintOutput)),0,4);
brsmemset(((unsigned long)(&visuDintOutput)),0,8);
brsmemset(((unsigned long)(&visuUdintOutput)),0,8);

(statusAcknInfoExtData=1);

(datacmd2.Unlock=0);
(statusButtonUnlockExtData=1);

(visuAcknExtData.AcknIntOptions[0]=0);
(visuAcknExtData.AcknUintOptions[0]=0);
(visuAcknExtData.AcknDintOptions[0]=0);
(visuAcknExtData.AcknUdintOptions[0]=0);
}else{

(statusAcknInfoExtData=1);

(datacmd2.Unlock=0);
(statusButtonUnlockExtData=1);
}





if((((unsigned long)(unsigned char)slxused==(unsigned long)(unsigned char)1))){
(readUDIDlowSLX.enable=1);;(readUDIDlowSLX.pDeviceName=((unsigned long)(&Station)));;(readUDIDlowSLX.pChannelName=((unsigned long)(&"UDID_low")));;AsIOAccRead(&readUDIDlowSLX);

if((((unsigned long)(unsigned short)readUDIDlowSLX.status==(unsigned long)(unsigned short)0))){
(UDID_Low=readUDIDlowSLX.value);
}else if((((unsigned long)(unsigned short)readUDIDlowSLX.status!=(unsigned long)(unsigned short)65535))){
(UDID_Low=0);
}

(readUDIDhighSLX.enable=1);;(readUDIDhighSLX.pDeviceName=((unsigned long)(&Station)));;(readUDIDhighSLX.pChannelName=((unsigned long)(&"UDID_high")));;AsIOAccRead(&readUDIDhighSLX);

if((((unsigned long)(unsigned short)readUDIDhighSLX.status==(unsigned long)(unsigned short)0))){
(UDID_High=(unsigned short)readUDIDhighSLX.value);
}else if((((unsigned long)(unsigned short)readUDIDhighSLX.status!=(unsigned long)(unsigned short)65535))){
(UDID_High=0);
}


(stautsSLXInformation=0);
(statusSLInformation=1);

}else{
(readUDIDlowSL.enable=1);;((*(unsigned long*)&(readUDIDlowSL.pDevice))=((unsigned long)(&Interface)));;(readUDIDlowSL.node=Node);;(readUDIDlowSL.index=8192);;(readUDIDlowSL.subindex=6);;(readUDIDlowSL.pData=((unsigned long)(&UDID_Low)));;(readUDIDlowSL.datalen=4);;EplSDORead(&readUDIDlowSL);

if(((((unsigned long)(unsigned short)readUDIDlowSL.status!=(unsigned long)(unsigned short)0))&(((unsigned long)(unsigned short)readUDIDlowSL.status!=(unsigned long)(unsigned short)65535)))){
(UDID_Low=0);
}

(readUDIDhighSL.enable=1);;((*(unsigned long*)&(readUDIDhighSL.pDevice))=((unsigned long)(&Interface)));;(readUDIDhighSL.node=Node);;(readUDIDhighSL.index=8192);;(readUDIDhighSL.subindex=7);;(readUDIDhighSL.pData=((unsigned long)(&UDID_High)));;(readUDIDhighSL.datalen=2);;EplSDORead(&readUDIDhighSL);

if(((((unsigned long)(unsigned short)readUDIDhighSL.status!=(unsigned long)(unsigned short)0))&(((unsigned long)(unsigned short)readUDIDhighSL.status!=(unsigned long)(unsigned short)65535)))){
(UDID_High=0);
}


(stautsSLXInformation=1);
(statusSLInformation=0);
}


itoahex(UDID_Low,((unsigned long)(&visuUDID_Low)));
itoahex(UDID_High,((unsigned long)(&visuUDID_High)));





(appcmd1.UDID_Low=UDID_Low);
(appcmd1.UDID_High=UDID_High);
(datacmd1.UDID_Low=UDID_Low);
(datacmd1.UDID_High=UDID_High);
(datacmd2.UDID_Low=UDID_Low);
(datacmd2.UDID_High=UDID_High);


}}
#line 666 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/AsSafetySolution/SafetySample/SafetySample.nodebug"

void __AS__ImplInitSafetySample_st(void){__BUR__ENTRY_INIT_FUNCT__();}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10man/Acp10man.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sdc/acp10sdc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sim/acp10sim.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxis.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxisError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxisAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmXError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpComError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Types/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Vacuum.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/FoldPush.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/GluePatt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/SetRamPars.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/GrayToBin.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/DistCalc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxis.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/MappCall.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/AxisFUBs.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Lib_PBFlx.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Includes/AS_TempDecl/MasterConfiguration_ServoRam/GlobalComponents/MpComponents.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Constants/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Constants/AlarmNames.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10par/Acp10par.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sdc/acp10sdc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sim/acp10sim.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/AsSafetySolution/SafetySample/SafetySample.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/AsSafetySolution/SafetySample/SafetySample.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/AsSafetySolution/SafetySample/SafetySample.fun\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/SafetySamp/SafetySample.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/SafetySamp/SafetySample.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/AsSafetySolution/SafetySample/SafetySample.st\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"itoahex\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'statusButtonActiv'\\n\"");
__asm__(".ascii \"plcdata_const 'UDID_High'\\n\"");
__asm__(".ascii \"plcdata_const 'UDID_Low'\\n\"");
__asm__(".ascii \"plcdata_const 'visuDeviceListOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuDintOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuIntOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuMachineOptionsBitOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuModuleFlagsNotPresentOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuModuleFlagsOptionalOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuModuleFlagsStartupOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuUdintOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'visuUintOutput'\\n\"");
__asm__(".ascii \"plcdata_const 'safeVERSION_R107'\\n\"");
__asm__(".ascii \"plcdata_const 'safeDATA_TYPE_MAOP'\\n\"");
__asm__(".ascii \"plcdata_const 'safeDATA_TYPE_EXTMAOP'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_N_UDID_ACKN'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_4_UDID_ACKN'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_3_UDID_ACKN'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_2_UDID_ACKN'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_1_UDID_ACKN'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_FW_ACKN'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_SK_XCHG'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_SK_FORMAT'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_RESET'\\n\"");
__asm__(".ascii \"plcdata_const 'safeCMD_CLEAR_DATA'\\n\"");
__asm__(".ascii \"plcdata_const 'safeERR_DL_COMPARE_FAILED'\\n\"");
__asm__(".previous");
