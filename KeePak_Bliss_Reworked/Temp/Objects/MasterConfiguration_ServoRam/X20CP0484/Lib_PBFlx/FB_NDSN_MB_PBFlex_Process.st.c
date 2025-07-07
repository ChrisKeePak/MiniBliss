#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/Lib_PBFlx/FB_NDSN_MB_PBFlex_Processst.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_Process.nodebug"
#line 3 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_Process.st"
void FB_NDSN_MB_PBFlex_Process(struct FB_NDSN_MB_PBFlex_Process* inst){struct FB_NDSN_MB_PBFlex_Process* __inst__=inst;{
if(__inst__->IN_b_Enable){
(__inst__->st_ADI_List[0].ui_ADI=11682);(__inst__->st_ADI_List[0].ui_Size=18);
(__inst__->st_ADI_List[1].ui_ADI=11683);(__inst__->st_ADI_List[1].ui_Size=18);
(__inst__->st_ADI_List[2].ui_ADI=10853);(__inst__->st_ADI_List[2].ui_Size=1);
(__inst__->st_ADI_List[3].ui_ADI=10855);(__inst__->st_ADI_List[3].ui_Size=1);
(__inst__->st_ADI_List[4].ui_ADI=10858);(__inst__->st_ADI_List[4].ui_Size=1);
(__inst__->st_ADI_List[5].ui_ADI=10859);(__inst__->st_ADI_List[5].ui_Size=1);
(__inst__->st_ADI_List[6].ui_ADI=10860);(__inst__->st_ADI_List[6].ui_Size=1);
(__inst__->st_ADI_List[7].ui_ADI=11376);(__inst__->st_ADI_List[7].ui_Size=1);
(__inst__->st_ADI_List[8].ui_ADI=11378);(__inst__->st_ADI_List[8].ui_Size=1);
(__inst__->st_ADI_List[9].ui_ADI=10002);(__inst__->st_ADI_List[9].ui_Size=1);
(__inst__->st_ADI_List[10].ui_ADI=10547);(__inst__->st_ADI_List[10].ui_Size=1);
(__inst__->st_ADI_List[11].ui_ADI=10549);(__inst__->st_ADI_List[11].ui_Size=1);
(__inst__->st_ADI_List[12].ui_ADI=10548);(__inst__->st_ADI_List[12].ui_Size=1);
(__inst__->st_ADI_List[13].ui_ADI=6102);(__inst__->st_ADI_List[13].ui_Size=1);
(__inst__->st_ADI_List[14].ui_ADI=6203);(__inst__->st_ADI_List[14].ui_Size=2);
(__inst__->st_ADI_List[15].ui_ADI=6946);(__inst__->st_ADI_List[15].ui_Size=2);
(__inst__->st_ADI_List[16].ui_ADI=7046);(__inst__->st_ADI_List[16].ui_Size=2);
(__inst__->st_ADI_List[17].ui_ADI=7148);(__inst__->st_ADI_List[17].ui_Size=2);
(__inst__->st_ADI_List[18].ui_ADI=7248);(__inst__->st_ADI_List[18].ui_Size=2);
(__inst__->st_ADI_List[19].ui_ADI=7146);(__inst__->st_ADI_List[19].ui_Size=1);
(__inst__->st_ADI_List[20].ui_ADI=7147);(__inst__->st_ADI_List[20].ui_Size=1);
(__inst__->st_ADI_List[21].ui_ADI=13017);(__inst__->st_ADI_List[21].ui_Size=1);
(__inst__->st_ADI_List[22].ui_ADI=13003);(__inst__->st_ADI_List[22].ui_Size=1);
(__inst__->st_ADI_List[23].ui_ADI=13008);(__inst__->st_ADI_List[23].ui_Size=1);
(__inst__->st_ADI_List[24].ui_ADI=13009);(__inst__->st_ADI_List[24].ui_Size=1);
(__inst__->st_ADI_List[25].ui_ADI=13010);(__inst__->st_ADI_List[25].ui_Size=1);
(__inst__->st_ADI_List[26].ui_ADI=13012);(__inst__->st_ADI_List[26].ui_Size=1);
(__inst__->st_ADI_List[27].ui_ADI=13018);(__inst__->st_ADI_List[27].ui_Size=1);
(__inst__->st_ADI_List[28].ui_ADI=801);(__inst__->st_ADI_List[28].ui_Size=1);
(__inst__->st_ADI_List[29].ui_ADI=19);(__inst__->st_ADI_List[29].ui_Size=1);
(__inst__->st_ADI_List[30].ui_ADI=22);(__inst__->st_ADI_List[30].ui_Size=1);
(__inst__->st_ADI_List[31].ui_ADI=11681);(__inst__->st_ADI_List[31].ui_Size=18);
(__inst__->st_ADI_List[32].ui_ADI=11685);(__inst__->st_ADI_List[32].ui_Size=18);
(__inst__->st_ADI_List[33].ui_ADI=6103);(__inst__->st_ADI_List[33].ui_Size=2);
(__inst__->st_ADI_List[34].ui_ADI=6002);(__inst__->st_ADI_List[34].ui_Size=1);
(__inst__->st_ADI_List[35].ui_ADI=13002);(__inst__->st_ADI_List[35].ui_Size=1);
(__inst__->st_ADI_List[36].ui_ADI=29);(__inst__->st_ADI_List[36].ui_Size=1);
(__inst__->st_ADI_List[37].ui_ADI=13);(__inst__->st_ADI_List[37].ui_Size=1);
(__inst__->st_ADI_List[38].ui_ADI=16);(__inst__->st_ADI_List[38].ui_Size=2);
(__inst__->st_ADI_List[39].ui_ADI=30);(__inst__->st_ADI_List[39].ui_Size=4);


((*(__inst__->Melter)).st_r_Devices.b_r_TempCtrl_Board1=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit0);
((*(__inst__->Melter)).st_r_Devices.b_r_TempCtrl_Board2=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit1);
((*(__inst__->Melter)).st_r_Devices.b_r_TempCtrl_Board3=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit2);
((*(__inst__->Melter)).st_r_Devices.b_r_TempCtrl_Board4=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit3);
((*(__inst__->Melter)).st_r_Devices.b_r_OEM_Unit=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit8);
((*(__inst__->Melter)).st_r_Devices.b_r_OLED_Unit=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit9);
((*(__inst__->Melter)).st_r_Devices.b_r_WIFI_Board=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit10);
((*(__inst__->Melter)).st_r_Devices.b_r_Refill_Board=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit11);
((*(__inst__->Melter)).st_r_Devices.b_r_Anybus_Board=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit12);
((*(__inst__->Melter)).st_r_Devices.b_r_Press_Sensor=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit14);
((*(__inst__->Melter)).st_r_Devices.b_r_Press_CtrlValve=((_2byte_bit_field_*)(&((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[0])))->bit15);
((*(__inst__->Melter)).st_r_Devices.i_r_NumOfTempZones_External=(((signed long)(((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[1])))/((signed long)(256))));
((*(__inst__->Melter)).st_r_Devices.i_r_NumOfTempZones_Internal=(((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[1])-(((*(__inst__->Melter)).st_r_Devices.i_r_NumOfTempZones_External)*256)));
((*(__inst__->Melter)).st_r_Devices.i_r_NumOfPumps=(((signed long)(((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[2])))/((signed long)(256))));
((*(__inst__->Melter)).st_r_Devices.i_r_NumOfMotors=(((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[2])-(((*(__inst__->Melter)).st_r_Devices.i_r_NumOfPumps)*256)));
((*(__inst__->Melter)).st_r_Devices.i_r_NumOfWebClients=(((signed long)(((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[3])))/((signed long)(256))));
((*(__inst__->Melter)).st_r_Devices.i_r_NumOfATS=(((*(__inst__->Melter)).i_r_Gen_arr_SysInventory[3])-(((*(__inst__->Melter)).st_r_Devices.i_r_NumOfWebClients)*256)));


(__inst__->i_ADI_Range=0);
for((__inst__->i=0);__inst__->i<=__inst__->i_rwADI_Count;__inst__->i+=1){
(__inst__->i_ADI_Range=(__inst__->i_ADI_Range+(signed short)__inst__->st_ADI_List[__inst__->i].ui_Size));
(__inst__->arr_WriteIndex[__inst__->i]=__inst__->i_ADI_Range);
(__inst__->arr_WriteStartingAddress[(__inst__->i+1)]=__inst__->i_ADI_Range);
}imp1_endfor1_0:;







(__inst__->tm_Acyc.IN=(__inst__->b_read^1));;(__inst__->tm_Acyc.PT=2000);;TON(&__inst__->tm_Acyc);
(__inst__->b_read=__inst__->tm_Acyc.Q);













(__inst__->FB_AcycRead_Para.enable=1);;(__inst__->FB_AcycRead_Para.pStation=((unsigned long)(&__inst__->IN_mb_station)));;(__inst__->FB_AcycRead_Para.startAddress=__inst__->st_ADI_List[__inst__->i_Index].ui_ADI);;(__inst__->FB_AcycRead_Para.nrRegisters=__inst__->st_ADI_List[__inst__->i_Index].ui_Size);;(__inst__->FB_AcycRead_Para.pData=((unsigned long)(&__inst__->arr_ResponseValue)));;(__inst__->FB_AcycRead_Para.dataSize=(__inst__->st_ADI_List[__inst__->i_Index].ui_Size*2));;mbReadHoldingRegisters(&__inst__->FB_AcycRead_Para);
(__inst__->ui_AcycRdStatus_Para=__inst__->FB_AcycRead_Para.status);
(__inst__->b_AcycRD_Tick=0);
(__inst__->b_AcycRD_Done=0);





(__inst__->i_ADI=__inst__->st_ADI_List[__inst__->i_Index].ui_ADI);
(__inst__->i_Size=(signed short)__inst__->st_ADI_List[__inst__->i_Index].ui_Size);
if(((((unsigned long)(unsigned short)__inst__->ui_AcycRdStatus_Para!=(unsigned long)(unsigned short)65535))&__inst__->b_AcycRdDnRising)){
(__inst__->b_AcycRD_Done=1);
}
(__inst__->b_AcycRdDnRising=(((unsigned long)(unsigned short)__inst__->ui_AcycRdStatus_Para==(unsigned long)(unsigned short)65535)));
if(__inst__->b_AcycRD_Done){
brsmemcpy(((unsigned long)(&__inst__->arr_HMI[__inst__->i_ValueIndex])),((unsigned long)(&__inst__->arr_ResponseValue)),(__inst__->i_Size*2));
if((((signed long)(signed long)(short)__inst__->i_Size==(signed long)(signed long)(short)2))){
(__inst__->arr_i_DW_Temp[0]=__inst__->arr_ResponseValue[0]);
(__inst__->arr_i_DW_Temp[1]=__inst__->arr_ResponseValue[1]);

if(((((signed long)(signed long)(short)__inst__->i_ADI>(signed long)(signed long)(short)6000))&(((signed long)(signed long)(short)__inst__->i_ADI<(signed long)(signed long)(short)8000)))){
brsmemcpy(((unsigned long)(&__inst__->di_Press)),((unsigned long)(&__inst__->arr_ResponseValue)),4);

switch(((*(__inst__->Melter)).i_rw_Press_Unit)){
case 0:{
(__inst__->r_Press=((float)__inst__->di_Press/1.00000000000000000000E+03));
}break;case 1:{
(__inst__->r_Press=((float)__inst__->di_Press/1.45037734985351562500E+02));
}break;case 2:{
(__inst__->r_Press=((float)__inst__->di_Press/1.45037734375000000000E+04));
}break;}
brsmemcpy(((unsigned long)(&__inst__->arr_i_DW_Temp[0])),((unsigned long)(&__inst__->r_Press)),4);
(__inst__->arr_HMI[__inst__->i_ValueIndex]=__inst__->arr_i_DW_Temp[0]);
(__inst__->arr_HMI[(__inst__->i_ValueIndex+1)]=__inst__->arr_i_DW_Temp[1]);
}else{
(__inst__->arr_HMI[__inst__->i_ValueIndex]=__inst__->arr_i_DW_Temp[0]);
(__inst__->arr_HMI[(__inst__->i_ValueIndex+1)]=__inst__->arr_i_DW_Temp[1]);
}
}



(__inst__->i_ValueIndex=(__inst__->i_ValueIndex+(signed short)__inst__->st_ADI_List[__inst__->i_Index].ui_Size));
(__inst__->i_Index=(__inst__->i_Index+1));
}




if(__inst__->b_read){
brsmemcpy(((unsigned long)(&((*(__inst__->Melter)).i_rw_Temp_arr_ZoneSP[0]))),((unsigned long)(&__inst__->arr_HMI[0])),__inst__->i_SizeofStruct);
brsmemcpy(((unsigned long)(&__inst__->arr_HMI_Buffer[0])),((unsigned long)(&__inst__->arr_HMI[0])),(__inst__->i_rwDataSize*2));
}




if((((signed long)(signed long)(short)__inst__->i_Index==(signed long)(signed long)(short)__inst__->i_ADI_Size))){
(__inst__->i_Index=0);
(__inst__->b_AcycRD_Enable=0);
(__inst__->i_ValueIndex=0);
(__inst__->b_AcycWT_Start=0);
}



brsmemcpy(((unsigned long)(&__inst__->arr_HMI_Compare[0])),((unsigned long)(&((*(__inst__->Melter)).i_rw_Temp_arr_ZoneSP[0]))),(__inst__->i_rwDataSize*2));
}





(__inst__->tm_WriteEvent.IN=__inst__->b_WriteEvent);;(__inst__->tm_WriteEvent.PT=300);;TON(&__inst__->tm_WriteEvent);
if((__inst__->tm_WriteEvent.Q|(__inst__->b_AcycWT_Done&__inst__->b_AcycWT_Rising))){
(__inst__->b_WriteEvent=0);
}
(__inst__->b_AcycWT_Rising=(__inst__->b_AcycWT_Done^1));

(__inst__->b_WriteEventONS=0);
for((__inst__->i=0);__inst__->i<=(__inst__->i_rwDataSize-1);__inst__->i+=1){
if(((((unsigned long)(unsigned short)__inst__->arr_HMI_Compare[__inst__->i]!=(unsigned long)(unsigned short)__inst__->arr_HMI_Buffer[__inst__->i]))&(__inst__->b_AcycWT_Start^1))){
(__inst__->i_CompareIndex=__inst__->i);
(__inst__->b_WriteEvent=1);
(__inst__->b_WriteEventONS=1);
(__inst__->arr_HMI_Buffer[__inst__->i]=__inst__->arr_HMI_Compare[__inst__->i]);
(__inst__->b_AcycWT_Start=1);
(__inst__->i_wttest=(__inst__->i_wttest+1));
goto imp1_endfor10_0;
}
}imp1_endfor10_0:;

if(((__inst__->b_AcycWT_Done|__inst__->tm_WriteEvent.Q)&__inst__->b_AcycWT_DN_Rising)){
(__inst__->b_AcycWT_Start=0);
}
(__inst__->b_AcycWT_DN_Rising=((__inst__->b_AcycWT_Done|__inst__->tm_WriteEvent.Q)^1));

if(__inst__->b_WriteEventONS){



for((__inst__->i=0);__inst__->i<=__inst__->i_rwADI_Count;__inst__->i+=1){
if((((signed long)(signed long)(short)__inst__->i_CompareIndex<(signed long)(signed long)(short)__inst__->arr_WriteIndex[__inst__->i]))){
(__inst__->i_Index_Write=__inst__->i);
goto imp1_endfor14_0;
}
}imp1_endfor14_0:;



(__inst__->i_writesize=(signed short)__inst__->st_ADI_List[__inst__->i_Index_Write].ui_Size);
if((((signed long)(signed long)(short)__inst__->i_writesize==(signed long)(signed long)(short)2))){
brsmemcpy(((unsigned long)(&__inst__->r_PressConvert)),((unsigned long)(&__inst__->arr_HMI_Compare[__inst__->arr_WriteStartingAddress[__inst__->i_Index_Write]])),4);
switch(((*(__inst__->Melter)).i_rw_Press_Unit)){
case 0:{
(__inst__->di_Press_psi=(unsigned long)((__inst__->r_PressConvert*1.00000000000000000000E+03)>=0.0?(__inst__->r_PressConvert*1.00000000000000000000E+03)+0.5:(__inst__->r_PressConvert*1.00000000000000000000E+03)-0.5));
}break;case 1:{
(__inst__->di_Press_psi=(unsigned long)((__inst__->r_PressConvert*1.45037734985351562500E+02)>=0.0?(__inst__->r_PressConvert*1.45037734985351562500E+02)+0.5:(__inst__->r_PressConvert*1.45037734985351562500E+02)-0.5));
}break;case 2:{
(__inst__->di_Press_psi=(unsigned long)((__inst__->r_PressConvert*1.45037734375000000000E+04)>=0.0?(__inst__->r_PressConvert*1.45037734375000000000E+04)+0.5:(__inst__->r_PressConvert*1.45037734375000000000E+04)-0.5));
}break;}
brsmemcpy(((unsigned long)(&__inst__->arr_di_Press_psi[0])),((unsigned long)(&__inst__->di_Press_psi)),4);
(__inst__->i_arr_WriteBuffer[0]=__inst__->arr_di_Press_psi[0]);
(__inst__->i_arr_WriteBuffer[1]=__inst__->arr_di_Press_psi[1]);
brsmemcpy(((unsigned long)(&__inst__->arr_HMI[__inst__->arr_WriteStartingAddress[__inst__->i_Index_Write]])),((unsigned long)(&__inst__->arr_HMI_Compare[__inst__->arr_WriteStartingAddress[__inst__->i_Index_Write]])),4);
}else{
brsmemcpy(((unsigned long)(&__inst__->i_arr_WriteBuffer[0])),((unsigned long)(&__inst__->arr_HMI_Compare[__inst__->arr_WriteStartingAddress[__inst__->i_Index_Write]])),(__inst__->i_writesize*2));
brsmemcpy(((unsigned long)(&__inst__->arr_HMI[__inst__->arr_WriteStartingAddress[__inst__->i_Index_Write]])),((unsigned long)(&__inst__->arr_HMI_Compare[__inst__->arr_WriteStartingAddress[__inst__->i_Index_Write]])),(__inst__->i_writesize*2));
}
}






(__inst__->FB_AcycWrite.enable=__inst__->b_WriteEvent);;(__inst__->FB_AcycWrite.pStation=((unsigned long)(&__inst__->IN_mb_station)));;(__inst__->FB_AcycWrite.startAddress=__inst__->st_ADI_List[__inst__->i_Index_Write].ui_ADI);;(__inst__->FB_AcycWrite.nrRegisters=__inst__->st_ADI_List[__inst__->i_Index_Write].ui_Size);;(__inst__->FB_AcycWrite.pData=((unsigned long)(&__inst__->i_arr_WriteBuffer)));;(__inst__->FB_AcycWrite.dataSize=(__inst__->st_ADI_List[__inst__->i_Index_Write].ui_Size*2));;mbWriteMultipleRegisters(&__inst__->FB_AcycWrite);
(__inst__->ui_AcycWtStatus=__inst__->FB_AcycWrite.status);

(__inst__->b_AcycWT_Done=0);
if(((((unsigned long)(unsigned short)__inst__->ui_AcycWtStatus!=(unsigned long)(unsigned short)65535))&__inst__->b_AcycWTDnRising)){
(__inst__->b_AcycWT_Done=1);
}
(__inst__->b_AcycWTDnRising=(((unsigned long)(unsigned short)__inst__->ui_AcycWtStatus==(unsigned long)(unsigned short)65535)));

}}
#line 240 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_Process.nodebug"

void __AS__ImplInitFB_NDSN_MB_PBFlex_Process_st(void){}

__asm__(".section \".plc\"");
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
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/Lib_PBFlx/FB_NDSN_MB_PBFlex_Process.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/Lib_PBFlx/FB_NDSN_MB_PBFlex_Process.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_Process.st\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"FB_NDSN_MB_PBFlex_CtrlSts\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"FB_NDSN_MB_PBFlex_Process\\\" FUB\\n\"");
__asm__(".previous");
