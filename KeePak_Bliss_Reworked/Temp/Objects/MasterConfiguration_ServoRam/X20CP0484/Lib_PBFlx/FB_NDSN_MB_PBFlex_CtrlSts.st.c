#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlStsst.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlSts.nodebug"
#line 3 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlSts.st"
void FB_NDSN_MB_PBFlex_CtrlSts(struct FB_NDSN_MB_PBFlex_CtrlSts* inst){struct FB_NDSN_MB_PBFlex_CtrlSts* __inst__=inst;{



if(__inst__->IN_b_Enable){



(__inst__->i_StartAddressInput=0);
(__inst__->i_StartAddressOutput=1024);
(__inst__->i_nrRegisters=64);
(__inst__->i_datasize=128);









(__inst__->FB_AcycRead.enable=1);;(__inst__->FB_AcycRead.pStation=((unsigned long)(&__inst__->IN_mb_station)));;(__inst__->FB_AcycRead.startAddress=__inst__->i_StartAddressInput);;(__inst__->FB_AcycRead.nrRegisters=__inst__->i_nrRegisters);;(__inst__->FB_AcycRead.pData=((unsigned long)(&__inst__->IO_Input)));;(__inst__->FB_AcycRead.dataSize=__inst__->i_datasize);;mbReadHoldingRegisters(&__inst__->FB_AcycRead);
(__inst__->ui_AcycRdStatus=__inst__->FB_AcycRead.status);

((*(__inst__->Melter)).b_r_SystemReady=((_2byte_bit_field_*)(&__inst__->IO_Input[0]))->bit0);
((*(__inst__->Melter)).b_r_Fault=((_2byte_bit_field_*)(&__inst__->IO_Input[0]))->bit1);
((*(__inst__->Melter)).b_r_Alert=((_2byte_bit_field_*)(&__inst__->IO_Input[0]))->bit2);
((*(__inst__->Melter)).b_r_Stop=((_2byte_bit_field_*)(&__inst__->IO_Input[0]))->bit3);

((*(__inst__->Melter)).b_r_HeatersOn=((_2byte_bit_field_*)(&__inst__->IO_Input[8]))->bit0);
((*(__inst__->Melter)).b_r_StandbyOn=((_2byte_bit_field_*)(&__inst__->IO_Input[8]))->bit1);
((*(__inst__->Melter)).b_r_TemperatureAlert=((_2byte_bit_field_*)(&__inst__->IO_Input[8]))->bit2);
((*(__inst__->Melter)).b_r_TemperatureFault=((_2byte_bit_field_*)(&__inst__->IO_Input[8]))->bit3);
((*(__inst__->Melter)).b_r_TemperatureReady=((_2byte_bit_field_*)(&__inst__->IO_Input[8]))->bit4);

((*(__inst__->Melter)).b_r_TankLevelEmpty=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit0);
((*(__inst__->Melter)).b_r_TankLevelLow=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit1);
((*(__inst__->Melter)).b_r_FillSysAlert=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit2);
((*(__inst__->Melter)).b_r_FillSysFault=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit3);
((*(__inst__->Melter)).b_r_Filling=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit4);
((*(__inst__->Melter)).b_r_LidOpen=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit5);
((*(__inst__->Melter)).b_r_PumpEnabled=((_2byte_bit_field_*)(&__inst__->IO_Input[4]))->bit1);
((*(__inst__->Melter)).b_r_PumpRunning=((_2byte_bit_field_*)(&__inst__->IO_Input[4]))->bit2);
((*(__inst__->Melter)).b_r_Purging=((_2byte_bit_field_*)(&__inst__->IO_Input[4]))->bit3);
((*(__inst__->Melter)).b_r_EmptyCalibrated=((_2byte_bit_field_*)(&__inst__->IO_Input[12]))->bit6);


(__inst__->tm_Command.IN=(((*(__inst__->Melter)).b_w_CalibrateEmpty)|((*(__inst__->Melter)).b_w_ClearAlertFault)));;(__inst__->tm_Command.PT=500);;TON(&__inst__->tm_Command);
if((__inst__->tm_Command.Q&__inst__->b_CommandTimerRising)){
((*(__inst__->Melter)).b_w_ClearAlertFault=0);
((*(__inst__->Melter)).b_w_CalibrateEmpty=0);
}
(__inst__->b_CommandTimerRising=(__inst__->tm_Command.Q^1));

(((_2byte_bit_field_*)(&__inst__->IO_Output[0]))->bit0=((*(__inst__->Melter)).b_w_ClearAlertFault));
(((_2byte_bit_field_*)(&__inst__->IO_Output[12]))->bit0=((*(__inst__->Melter)).b_w_ManualFill));
(((_2byte_bit_field_*)(&__inst__->IO_Output[4]))->bit3=((*(__inst__->Melter)).b_w_Purge));
(((_2byte_bit_field_*)(&__inst__->IO_Output[12]))->bit2=((*(__inst__->Melter)).b_w_CalibrateEmpty));








(__inst__->tm_HeaterOff.IN=(((*(__inst__->Melter)).b_r_HeatersOn)^1));;(__inst__->tm_HeaterOff.PT=200);;TON(&__inst__->tm_HeaterOff);
(__inst__->b_HeaterOff=__inst__->tm_HeaterOff.Q);
if((__inst__->b_HeaterOff&__inst__->b_Temp1)){
(__inst__->b_HeaterOn=0);
}
(__inst__->b_Temp1=(__inst__->b_HeaterOff^1));




if((((*(__inst__->Melter)).b_r_HeatersOn)&__inst__->b_Temp2)){
(__inst__->b_HeaterOn=1);
}
(__inst__->b_Temp2=(((*(__inst__->Melter)).b_r_HeatersOn)^1));



if(((((*(__inst__->Melter)).b_r_HeatersOn)^1)&((*(__inst__->Melter)).b_w_HeatersOnOff))){
(__inst__->b_HeaterOn=1);
}

if((((*(__inst__->Melter)).b_r_HeatersOn)&((*(__inst__->Melter)).b_w_HeatersOnOff))){
(__inst__->b_HeaterOn=0);
}
if((((*(__inst__->Melter)).b_r_Fault)|((*(__inst__->Melter)).b_r_TemperatureFault))){
(__inst__->b_HeaterOn=0);
}



(__inst__->tm_HeaterOnStuck.IN=((((*(__inst__->Melter)).b_r_HeatersOn)^1)&__inst__->b_HeaterOn));;(__inst__->tm_HeaterOnStuck.PT=3000);;TON(&__inst__->tm_HeaterOnStuck);
(__inst__->b_HeaterOnStuck=__inst__->tm_HeaterOnStuck.Q);

(__inst__->tm_HeaterOffStuck.IN=(((*(__inst__->Melter)).b_r_HeatersOn)&(__inst__->b_HeaterOn^1)));;(__inst__->tm_HeaterOffStuck.PT=3000);;TON(&__inst__->tm_HeaterOffStuck);
(__inst__->b_HeaterOffStuck=__inst__->tm_HeaterOffStuck.Q);

if((__inst__->b_HeaterOnStuck&__inst__->b_HeaterOn)){
(__inst__->b_HeaterOn=0);
(__inst__->b_HeaterOnStuck=0);
}
if((__inst__->b_HeaterOffStuck&(__inst__->b_HeaterOn^1))){
(__inst__->b_HeaterOn=1);
(__inst__->b_HeaterOffStuck=0);
}



if(((*(__inst__->Melter)).b_w_HeatersOnOff)){
((*(__inst__->Melter)).b_w_HeatersOnOff=0);
}
(((_2byte_bit_field_*)(&__inst__->IO_Output[8]))->bit0=__inst__->b_HeaterOn);





(__inst__->tm_PumpOff.IN=(((*(__inst__->Melter)).b_r_PumpEnabled)^1));;(__inst__->tm_PumpOff.PT=200);;TON(&__inst__->tm_PumpOff);
(__inst__->b_PumpOff=__inst__->tm_PumpOff.Q);
if(((((*(__inst__->Melter)).b_r_PumpEnabled)^1)&((*(__inst__->Melter)).b_w_PumpOnOff)&(((*(__inst__->Melter)).b_r_StandbyOn)^1))){
(__inst__->b_PumpOn=1);
}
if((((*(__inst__->Melter)).b_r_PumpEnabled)&((*(__inst__->Melter)).b_w_PumpOnOff))){
(__inst__->b_PumpOn=0);
}




if((((*(__inst__->Melter)).b_r_StandbyOn)|__inst__->b_HeaterOff|((*(__inst__->Melter)).b_r_Stop))){
(__inst__->b_PumpOn=0);
}




if((((*(__inst__->Melter)).b_r_PumpEnabled)&__inst__->b_Temp3)){
(__inst__->b_PumpOn=1);
}
(__inst__->b_Temp3=(((*(__inst__->Melter)).b_r_PumpEnabled)^1));
if((__inst__->b_PumpOff&__inst__->b_Temp4)){
(__inst__->b_PumpOn=0);
}
(__inst__->b_Temp4=(__inst__->b_PumpOff^1));



(__inst__->tm_PumpOnStuck.IN=((((*(__inst__->Melter)).b_r_PumpEnabled)^1)&__inst__->b_PumpOn));;(__inst__->tm_PumpOnStuck.PT=3000);;TON(&__inst__->tm_PumpOnStuck);
(__inst__->b_PumpOnStuck=__inst__->tm_PumpOnStuck.Q);

(__inst__->tm_PumpOffStuck.IN=(((*(__inst__->Melter)).b_r_PumpEnabled)&(__inst__->b_PumpOn^1)));;(__inst__->tm_PumpOffStuck.PT=3000);;TON(&__inst__->tm_PumpOffStuck);
(__inst__->b_PumpOffStuck=__inst__->tm_PumpOffStuck.Q);

if((__inst__->b_PumpOnStuck&__inst__->b_PumpOn)){
(__inst__->b_PumpOn=0);
(__inst__->b_PumpOnStuck=0);
}
if((__inst__->b_PumpOffStuck&(__inst__->b_PumpOn^1))){
(__inst__->b_PumpOn=1);
(__inst__->b_PumpOffStuck=0);
}



if(((*(__inst__->Melter)).b_w_PumpOnOff)){
((*(__inst__->Melter)).b_w_PumpOnOff=0);
}
(((_2byte_bit_field_*)(&__inst__->IO_Output[4]))->bit1=__inst__->b_PumpOn);





(__inst__->tm_StandbyOff.IN=(((*(__inst__->Melter)).b_r_StandbyOn)^1));;(__inst__->tm_StandbyOff.PT=200);;TON(&__inst__->tm_StandbyOff);
(__inst__->b_StandbyOff=__inst__->tm_StandbyOff.Q);
if((__inst__->b_StandbyOff&__inst__->b_Temp5)){
(__inst__->b_StandbyOn=0);
}
(__inst__->b_Temp5=(__inst__->b_StandbyOff^1));

if((((*(__inst__->Melter)).b_r_StandbyOn)&__inst__->b_Temp6)){
(__inst__->b_StandbyOn=1);
}
(__inst__->b_Temp6=(((*(__inst__->Melter)).b_r_StandbyOn)^1));

if((__inst__->b_HeaterOff|((*(__inst__->Melter)).b_r_Fault))){
(__inst__->b_StandbyOn=0);
}




if(((((*(__inst__->Melter)).b_r_HeatersOn)|((*(__inst__->Melter)).b_r_TemperatureReady))&(((*(__inst__->Melter)).b_r_StandbyOn)^1)&((*(__inst__->Melter)).b_w_StandbyOnOff))){
(__inst__->b_StandbyOn=1);
}

if((((*(__inst__->Melter)).b_r_StandbyOn)&((*(__inst__->Melter)).b_w_StandbyOnOff))){
(__inst__->b_StandbyOn=0);
}

(__inst__->tm_StandbyOnStuck.IN=((((*(__inst__->Melter)).b_r_StandbyOn)^1)&__inst__->b_StandbyOn));;(__inst__->tm_StandbyOnStuck.PT=3000);;TON(&__inst__->tm_StandbyOnStuck);
(__inst__->b_StandbyOnStuck=__inst__->tm_StandbyOnStuck.Q);

(__inst__->tm_StandbyOffStuck.IN=(((*(__inst__->Melter)).b_r_StandbyOn)&(__inst__->b_StandbyOn^1)));;(__inst__->tm_StandbyOffStuck.PT=3000);;TON(&__inst__->tm_StandbyOffStuck);
(__inst__->b_StandbyOffStuck=__inst__->tm_StandbyOffStuck.Q);
if((__inst__->b_StandbyOnStuck&__inst__->b_StandbyOn)){
(__inst__->b_StandbyOn=0);
(__inst__->b_StandbyOnStuck=0);
}
if((__inst__->b_HeaterOffStuck&(__inst__->b_StandbyOn^1))){
(__inst__->b_StandbyOn=1);
(__inst__->b_StandbyOffStuck=0);
}



if(((*(__inst__->Melter)).b_w_StandbyOnOff)){
((*(__inst__->Melter)).b_w_StandbyOnOff=0);
}
(((_2byte_bit_field_*)(&__inst__->IO_Output[8]))->bit1=__inst__->b_StandbyOn);






(__inst__->FB_AcycWrite.enable=1);;(__inst__->FB_AcycWrite.pStation=((unsigned long)(&__inst__->IN_mb_station)));;(__inst__->FB_AcycWrite.startAddress=__inst__->i_StartAddressOutput);;(__inst__->FB_AcycWrite.nrRegisters=__inst__->i_nrRegisters);;(__inst__->FB_AcycWrite.pData=((unsigned long)(&__inst__->IO_Output)));;(__inst__->FB_AcycWrite.dataSize=__inst__->i_datasize);;mbWriteMultipleRegisters(&__inst__->FB_AcycWrite);
(__inst__->ui_AcycWtStatus=__inst__->FB_AcycWrite.status);
}
}imp1_else0_0:imp1_end0_0:;}
#line 237 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlSts.nodebug"

void __AS__ImplInitFB_NDSN_MB_PBFlex_CtrlSts_st(void){}

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
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlSts.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlSts.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/Lib_PBFlx/FB_NDSN_MB_PBFlex_CtrlSts.st\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"FB_NDSN_MB_PBFlex_CtrlSts\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"FB_NDSN_MB_PBFlex_Process\\\" FUB\\n\"");
__asm__(".previous");
