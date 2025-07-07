#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AlarmHandl/Cyclicld.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AlarmControl/AlarmHandling/Cyclic.nodebug"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AlarmControl/AlarmHandling/Cyclic.ld"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{(HistoryCodeToString.AC.SL=(HistoryCodeToString.AC.DS=(HistoryCodeToString.AC.SD=(HistoryCodeToString.AC.P=(HistoryCodeToString.AC.D=(HistoryCodeToString.AC.L=(HistoryCodeToString.AC.S0=(HistoryCodeToString.AC.R0=(HistoryCodeToString.AC.N=0)))))))));










((*(unsigned long*)&(MpAlarmXCore_0.MpLink))=((unsigned long)(&gAlarmXCore)));




(MpAlarmXCore_0.Enable=1);

(MpAlarmXCore_0.ErrorReset=gSoftwareReset);

MpAlarmXCore(&MpAlarmXCore_0);
(gAlarmSystemActive=MpAlarmXCore_0.Active);

(gNumActiveAlarms=MpAlarmXCore_0.ActiveAlarms);

(gNumAlarms=MpAlarmXCore_0.PendingAlarms);


((*(unsigned long*)&(MpAlarmXListUI_0.MpLink))=((unsigned long)(&gAlarmXCore)));




(MpAlarmXListUI_0.Enable=1);

(MpAlarmXListUI_0.UISetup=*(struct MpAlarmXListUISetupType*)&AlarmUISetup);

((*(unsigned long*)&(MpAlarmXListUI_0.UIConnect))=((unsigned long)(&AlarmUIConnect)));




MpAlarmXListUI(&MpAlarmXListUI_0);

(gAlarmActive=(zzBOOL00020000=(((unsigned long)MpAlarmXCore_0.ActiveAlarms>(unsigned long)0))));




(status=(zzBOOL00020001=AlarmInfoAdapter(((unsigned long)(&AlarmListAdapter)),&AlarmUIConnect.AlarmList,gNumAlarms)));







((*(unsigned long*)&(MpAlarmXHistory_0.MpLink))=((unsigned long)(&gAlarmXHistory)));




(MpAlarmXHistory_0.Enable=1);

(MpAlarmXHistory_0.ErrorReset=gSoftwareReset);

((*(unsigned long*)&(MpAlarmXHistory_0.DeviceName))=((unsigned long)(&"recipes")));




MpAlarmXHistory(&MpAlarmXHistory_0);

((*(unsigned long*)&(MpAlarmXHistoryUI_0.MpLink))=((unsigned long)(&gAlarmXHistory)));




(MpAlarmXHistoryUI_0.Enable=1);

(MpAlarmXHistoryUI_0.ErrorReset=gSoftwareReset);

(MpAlarmXHistoryUI_0.UISetup=*(struct MpAlarmXHistoryUISetupType*)&AlarmXHistoryUISetup);

((*(unsigned long*)&(MpAlarmXHistoryUI_0.UIConnect))=((unsigned long)(&AlarmXHistoryUIConnect)));




MpAlarmXHistoryUI(&MpAlarmXHistoryUI_0);

if(1){
(HistoryCodeToString.AC.N=1);

}(gLowSeverityAlarmActive=(zzBOOL00020002=MpAlarmXCheckReaction(&gAlarmXCore,"LowSeverityAlarmActive")));




(gHighSeverityAlarmActive=(zzBOOL00020003=MpAlarmXCheckReaction(&gAlarmXCore,"HighSeverityAlarmActive")));




(gAdhesiveCtrlInterface.Status.AlarmActive=(zzBOOL00020004=MpAlarmXCheckReaction(&gAlarmXCore,"AdhesiveAlarm")));




(gVacCtrlInterface.Status.AlarmActive=(zzBOOL00020005=MpAlarmXCheckReaction(&gAlarmXCore,"VacuumAlarm")));




(gAirPressureAlarmActive=(zzBOOL00020006=MpAlarmXCheckReaction(&gAlarmXCore,"AirAlarm")));




(gSafetyNotOKAlarmActive=(zzBOOL00020007=MpAlarmXCheckReaction(&gAlarmXCore,"SafetyAlarm")));




(gModeControlInterface.Status.BlissPanelAlarmActive=(zzBOOL00020008=MpAlarmXCheckReaction(&gAlarmXCore,"BlissPanelAlarm")));




if((gAlarmSystemActive^1)){
return;

}(zz000700020000=((unsigned long)(&IOAlarmText)));


(status=(zzBOOL00020009=CheckIOModules(gIO.ModuleOKs,&gAlarmXCore,zz000700020000,gFoldPushCtrlInterface.Status.PowelinkConfig)));




(TestAlarmActive=(zzBOOL0002000A=MpAlarmXCheckState(&gAlarmXCore,ALARM_TEST_ALARM,1)));




if((zzBOOL0002000B=(TestAlarm&(TestAlarmActive^1)))){


}else{goto imp2_EN0000;
}(AlarmStatus=(zz000400020000=MpAlarmXSet(&gAlarmXCore,ALARM_TEST_ALARM)));



;

imp2_EN0000:if((zzBOOL0002000C=((TestAlarm^1)&TestAlarmActive))){


}else{goto imp2_EN0001;
}(AlarmStatus=(zz000400020001=MpAlarmXReset(&gAlarmXCore,ALARM_TEST_ALARM)));



;

imp2_EN0001:(TestAlarm2Active=(zzBOOL0002000D=MpAlarmXCheckState(&gAlarmXCore,ALARM_TEST_ALARM2,1)));




if((zzBOOL0002000E=(TestAlarm2&(TestAlarm2Active^1)))){


}else{goto imp2_EN0002;
}(AlarmStatus=(zz000400020002=MpAlarmXSet(&gAlarmXCore,ALARM_TEST_ALARM2)));



;

imp2_EN0002:if((zzBOOL0002000F=((TestAlarm2^1)&TestAlarm2Active))){


}else{goto imp2_EN0003;
}(AlarmStatus=(zz000400020003=MpAlarmXReset(&gAlarmXCore,ALARM_TEST_ALARM2)));



;

imp2_EN0003:SFCActionControl(&HistoryCodeToString.AC);
(HistoryCodeToString._x=HistoryCodeToString.AC.Q);

if((HistoryCodeToString.x&(HistoryCodeToString._x^1))){

__AS__Action__HistoryCodeToString();

}SFCActionControl(&HistoryCodeToString.AC);
if((HistoryCodeToString.x=(HistoryCodeToString._x=((HistoryCodeToString._x&HistoryCodeToString.AC.P)|HistoryCodeToString.AC.Q)))){




__AS__Action__HistoryCodeToString();}}
}
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AlarmControl/AlarmHandling/Cyclic.nodebug"
#line 2 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AlarmControl/AlarmHandling/Action.st"
static void __AS__Action__HistoryCodeToString(void){
{
for((i=0);i<=AlarmXHistoryUIConnect.AlarmList.MaxSelection;i+=1){

brsitoa(AlarmXHistoryUIConnect.AlarmList.Code[i],((unsigned long)(&AlarmHistoryListAdapter.Code[i])));

}imp1_endfor0_0:;

for((i=(AlarmXHistoryUIConnect.AlarmList.MaxSelection+1));i<=49;i+=1){
{int zzIndex; plcstring* zzLValue=(plcstring*)AlarmHistoryListAdapter.Code[i]; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp1_endfor1_0:;

}}
#line 2 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AlarmControl/AlarmHandling/Cyclic.nodebug"

void __AS__ImplInitCyclic_ld(void){{(HistoryCodeToString.x=0);(HistoryCodeToString._x=0);}}

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
__asm__(".ascii \"iecfile \\\"Logical/AlarmControl/AlarmHandling/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/AlarmControl/AlarmHandling/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/AlarmControl/AlarmHandling/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AlarmHandl/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AlarmHandl/Cyclic.ld.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AlarmControl/AlarmHandling/Cyclic.ld\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AlarmHandl/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"AlarmInfoAdapter\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"CheckIOModules\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_TEST_ALARM2'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_TEST_ALARM'\\n\"");
__asm__(".previous");
