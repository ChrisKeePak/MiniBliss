#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/HMIControl/Cyclicld.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/HMI/HMIControl/Cyclic.nodebug"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/HMI/HMIControl/Cyclic.ld"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{if((zzBOOL00010000=((gIO.DIs.SafetyOK^1)|(gServoFeedInterface.Status.Error|(gBodyHopperInterface.Status.Error|(gLeftHopperInterface.Status.Error|(gRightHopperInterface.Status.Error|(gServoRamInterface.Status.Error|(gModeControlInterface.Status.BlissPanelAlarmActive|(StopFeed|((gServoRamInterface.Status.Homed^1)|gAlarmActive))))))))))){



















(gModeControlInterface.Commands.SetAutoMode=0);
}if(zzBOOL00010000){
(gModeControlInterface.Commands.SetJogMode=0);
}if(zzBOOL00010000){
(gHMI.Commands.SelectJogMode=0);
}if(zzBOOL00010000){
(gHMI.Commands.SelectAutoMode=0);
}if(zzBOOL00010000){
(gModeControlInterface.Status.Dwelling=0);

}if((gServoRamInterface.Status.Homed^1)){
(gModeControlInterface.Status.Dwelling=0);

}if((zzBOOL00010001=gHMI.Commands.SelectAutoMode)){

(gModeControlInterface.Commands.SetAutoMode=1);
}if(zzBOOL00010001){
(gModeControlInterface.Commands.SetJogMode=0);

}(gModeControlInterface.Commands.SetShowMode=gHMI.Commands.EnableShowMode);


if((zzBOOL00010002=gHMI.Commands.SelectJogMode)){

(gModeControlInterface.Commands.SetJogMode=1);
}if(zzBOOL00010002){
(gModeControlInterface.Commands.SetAutoMode=0);
}if(zzBOOL00010002){
(gHMI.Commands.RequestVFDRun=0);

}if((zzBOOL00010003=gModeControlInterface.Commands.SetJogMode)){

}else{goto imp1_EN0000;
}(gHMI.ColorMapDatapoints.JogModeSelected=(zz000500010000=1));



(gHMI.ColorMapDatapoints.AutoModeSelected=(zz000500010001=0));



(gHMI.StatusDatapoints.JogStatusDatapoint=(zz000600010000=(zz000500010002=0)));





;

imp1_EN0000:if((zzBOOL00010004=gModeControlInterface.Commands.SetAutoMode)){

}else{goto imp1_EN0001;
}(gHMI.ColorMapDatapoints.JogModeSelected=(zz000500010003=0));



(gHMI.ColorMapDatapoints.AutoModeSelected=(zz000500010004=1));



(gHMI.StatusDatapoints.JogStatusDatapoint=(zz000600010001=(zz000500010005=3)));





;

imp1_EN0001:if((zzBOOL00010005=((gModeControlInterface.Commands.SetAutoMode^1)&(gModeControlInterface.Commands.SetJogMode^1)))){


}else{goto imp1_EN0002;
}(gHMI.ColorMapDatapoints.JogModeSelected=(zz000500010006=0));



(gHMI.ColorMapDatapoints.AutoModeSelected=(zz000500010007=0));



(gHMI.StatusDatapoints.JogStatusDatapoint=(zz000600010002=(zz000500010008=3)));





;

imp1_EN0002:if((zzBOOL00010006=gHMI.Commands.SelectAutoMode)){

}else{goto imp1_EN0003;
}(gHMI.StatusDatapoints.AutoModeSDP=(zz000600010003=(zz000500010009=0)));





;

imp1_EN0003:if((zzBOOL00010007=(gHMI.Commands.SelectAutoMode^1))){

}else{goto imp1_EN0004;
}(gHMI.StatusDatapoints.AutoModeSDP=(zz000600010004=(zz00050001000A=3)));





;

imp1_EN0004:(FlashON.IN=(FlashOFF.Q^1));

(FlashON.PT=500);

TON(&FlashON);

(FlashOFF.IN=FlashON.Q);

(FlashOFF.PT=500);

TON(&FlashOFF);

(gHMI.BitmapSelectDatapoints.ResetPress=(((gIO.DIs.SafetyOK^1)&FlashON.Q)|(gHMI.Commands.RequestReset|gIO.DIs.SafetyOK)));






(gHMI.BitmapSelectDatapoints.StopPress=gHMI.Commands.RequestStop);


(zzRTR000010000.CLK=gHMI.Commands.RequestStop);

r_trig(&zzRTR000010000);
if(((gIO.DIs.SafetyOK^1)|(gServoFeedInterface.Status.Error|(gBodyHopperInterface.Status.Error|(gLeftHopperInterface.Status.Error|(gRightHopperInterface.Status.Error|(gServoRamInterface.Status.Error|(gModeControlInterface.Status.BlissPanelAlarmActive|zzRTR000010000.Q)))))))){













(gHMI.Commands.RequestVFDRun=0);

}(gHMI.BitmapSelectDatapoints.RunPress=((((gIO.DIs.SafetyOK&(gServoRamInterface.Status.InMotion^1))&FlashON.Q)|(gModeControlInterface.Status.Dwelling|(gModeControlInterface.Status.WaitingOnDownstream|gServoFeedInterface.Status.InMotion)))&gHMI.Commands.SelectAutoMode));










(gVacCtrlInterface.Commands.VacuumOn=((zzBOOL00010008=(gHMI.Commands.RequestVacuumOn|((gHMI.Commands.RequestVacuumOn^1)&FlashON.Q)))&gHMI.Commands.RequestVacuumOn));







(gHMI.BitmapSelectDatapoints.VacuumPress=zzBOOL00010008);


(zz000700010000=((unsigned long)(&gHMI.ColorMapDatapoints)));


(zz000700010001=((unsigned long)(&gHMI.StatusDatapoints)));


(status=(zzBOOL00010009=SetPatternSDPs(gAdhesiveCtrlInterface.Parameters.NumAdhesiveChannels,zz000700010000,zz000700010001)));




if((zzBOOL0001000B=(zzBOOL0001000A=(((unsigned long)(unsigned char)gUserLevel<(unsigned long)(unsigned char)1))))){



}else{goto imp1_EN0005;
}(gHMI.StatusDatapoints.MaintenanceSDP=(zz000600010005=(zz00050001000B=3)));





;

imp1_EN0005:if((zzBOOL0001000D=(zzBOOL0001000C=(((unsigned long)(unsigned char)gUserLevel>(unsigned long)(unsigned char)0))))){



}else{goto imp1_EN0006;
}(gHMI.StatusDatapoints.MaintenanceSDP=(zz000600010006=(zz00050001000C=0)));





;

imp1_EN0006:if((zzBOOL0001000E=(((gIO.DIs.AdhesiveUnitReady^1)&gAdhesiveCtrlInterface.Parameters.FeedbackIsHardwire)|((gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitReady^1)&gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP)))){






}else{goto imp1_EN0007;
}(gHMI.StatusDatapoints.AdhesiveUnitNotReadySDP=(zz000600010007=UNHIDE));



(gHMI.ColorMapDatapoints.AdhesiveUnitReady=(zz00050001000D=NOTOK));



;

imp1_EN0007:if((zzBOOL0001000F=((gIO.DIs.AdhesiveUnitReady&gAdhesiveCtrlInterface.Parameters.FeedbackIsHardwire)|(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitReady&gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP)))){





}else{goto imp1_EN0008;
}(gHMI.StatusDatapoints.AdhesiveUnitNotReadySDP=(zz000600010008=HIDE));



(gHMI.ColorMapDatapoints.AdhesiveUnitReady=(zz00050001000E=OK));



;

imp1_EN0008:if((zzBOOL00010010=(gIO.DIs.AdhesiveUnitNotFaulted^1))){

}else{goto imp1_EN0009;
}(gHMI.StatusDatapoints.AdhesiveUnitFaultSDP=(zz000600010009=UNHIDE));



(gHMI.ColorMapDatapoints.AdhesiveUnitFault=(zz00050001000F=NOTOK));



;

imp1_EN0009:if((zzBOOL00010011=gIO.DIs.AdhesiveUnitNotFaulted)){

}else{goto imp1_EN000A;
}(gHMI.StatusDatapoints.AdhesiveUnitFaultSDP=(zz00060001000A=HIDE));



(gHMI.ColorMapDatapoints.AdhesiveUnitFault=(zz000500010010=OK));



;

imp1_EN000A:if((zzBOOL00010012=gIO.DIs.AdhesiveLevelLow)){

}else{goto imp1_EN000B;
}(gHMI.StatusDatapoints.AdhesiveUnitLevelLowSDP=(zz00060001000B=UNHIDE));



(gHMI.ColorMapDatapoints.AdhesiveUnitLevelLow=(zz000500010011=NOTOK));



;

imp1_EN000B:if((zzBOOL00010013=(gIO.DIs.AdhesiveLevelLow^1))){

}else{goto imp1_EN000C;
}(gHMI.StatusDatapoints.AdhesiveUnitLevelLowSDP=(zz00060001000C=HIDE));



(gHMI.ColorMapDatapoints.AdhesiveUnitLevelLow=(zz000500010012=OK));



;

imp1_EN000C:if((zzBOOL00010014=gIO.DIs.LowAdhesiveUseage)){

}else{goto imp1_EN000D;
}(gHMI.StatusDatapoints.AdhesiveUseageLowSDP=(zz00060001000D=UNHIDE));



(gHMI.ColorMapDatapoints.AdhesiveUseageLow=(zz000500010013=NOTOK));



;

imp1_EN000D:if((zzBOOL00010015=(gIO.DIs.LowAdhesiveUseage^1))){

}else{goto imp1_EN000E;
}(gHMI.StatusDatapoints.AdhesiveUseageLowSDP=(zz00060001000E=HIDE));



(gHMI.ColorMapDatapoints.AdhesiveUseageLow=(zz000500010014=OK));



;

imp1_EN000E:if((zzBOOL00010016=(gIO.DIs.VacuumPressureOK^1))){

}else{goto imp1_EN000F;
}(gHMI.StatusDatapoints.VacuumPressureFaultSDP=(zz00060001000F=OK));



;

imp1_EN000F:if((zzBOOL00010017=gIO.DIs.VacuumPressureOK)){

}else{goto imp1_EN0010;
}(gHMI.StatusDatapoints.VacuumPressureFaultSDP=(zz000600010010=NOTOK));



;

imp1_EN0010:if((zzBOOL00010018=gIO.DOs.VacuumOn)){

}else{goto imp1_EN0011;
}(gHMI.ColorMapDatapoints.VacuumPumpOn=(zz000500010015=OK));



;

imp1_EN0011:if((zzBOOL00010019=(gIO.DOs.VacuumOn^1))){

}else{goto imp1_EN0012;
}(gHMI.ColorMapDatapoints.VacuumPumpOn=(zz000500010016=NOTOK));



;

imp1_EN0012:(zzRTR000010001.CLK=gHMI.Commands.LoadRecipe);

r_trig(&zzRTR000010001);
if(zzRTR000010001.Q){
(gRecipeInterface.Commands.LoadRecipe=1);

}(zzRTR000010002.CLK=gHMI.Commands.SaveRecipe);

r_trig(&zzRTR000010002);
if(zzRTR000010002.Q){
(gRecipeInterface.Commands.SaveRecipe=1);

}if((zzBOOL0001001B=((zzBOOL0001001A=gHMI.Commands.RequestBoxType1)&(gHMI.Commands.LoadRecipeType1^1)))){



(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeDialogSDP))->bit0=0);
}if(zzBOOL0001001B){
(gHMI.Commands.RequestBoxType2=0);
}if((zzBOOL0001001C=(zzBOOL0001001A&gHMI.Commands.CancelBoxChange))){


(gHMI.Commands.RequestBoxType1=0);
}if(zzBOOL0001001C){
(gHMI.Commands.CancelBoxChange=0);
}if(zzBOOL0001001C){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeDialogSDP))->bit0=1);
}if((zzBOOL0001001D=(zzBOOL0001001A&gHMI.Commands.ConfirmBoxChange))){


(gHMI.Commands.LoadRecipeType1=1);
}if(zzBOOL0001001D){
(gHMI.Commands.ConfirmBoxChange=0);
}if(zzBOOL0001001D){
(gHMI.Commands.RequestBoxType1=0);
}if(zzBOOL0001001D){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeDialogSDP))->bit0=1);

}if((zzBOOL0001001F=((zzBOOL0001001E=gHMI.Commands.RequestBoxType2)&(gHMI.Commands.LoadRecipeType2^1)))){



(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeDialogSDP))->bit0=0);
}if(zzBOOL0001001F){
(gHMI.Commands.RequestBoxType1=0);
}if((zzBOOL00010020=(zzBOOL0001001E&gHMI.Commands.CancelBoxChange))){


(gHMI.Commands.RequestBoxType2=0);
}if(zzBOOL00010020){
(gHMI.Commands.CancelBoxChange=0);
}if(zzBOOL00010020){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeDialogSDP))->bit0=1);
}if((zzBOOL00010021=(zzBOOL0001001E&gHMI.Commands.ConfirmBoxChange))){


(gHMI.Commands.LoadRecipeType2=1);
}if(zzBOOL00010021){
(gHMI.Commands.ConfirmBoxChange=0);
}if(zzBOOL00010021){
(gHMI.Commands.RequestBoxType2=0);
}if(zzBOOL00010021){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeDialogSDP))->bit0=1);

}(zzRTR000010003.CLK=gHMI.Commands.LoadRecipeType1);

r_trig(&zzRTR000010003);
if((zzBOOL00010022=zzRTR000010003.Q)){

(gRecipeInterface.Commands.LoadRecipe=1);
}if(zzBOOL00010022){
(gHMI.Commands.LoadRecipeType2=0);
}if(zzBOOL00010022){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeReq2SDP))->bit1=0);
}if(zzBOOL00010022){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeReq1SDP))->bit1=1);
}if((zzBOOL00010023=zzBOOL00010022)){

}else{goto imp1_EN0013;
}{int zzIndex; plcstring* zzLValue=(plcstring*)zz006600010000; plcstring* zzRValue=(plcstring*)TYPE1_RECIPE_NAME; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};{int zzIndex; plcstring* zzLValue=(plcstring*)gRecipeInterface.Parameters.RecipeName; plcstring* zzRValue=(plcstring*)zz006600010000; for(zzIndex=0; zzIndex<100l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};



;

imp1_EN0013:(zzRTR000010004.CLK=gHMI.Commands.LoadRecipeType2);

r_trig(&zzRTR000010004);
if((zzBOOL00010024=zzRTR000010004.Q)){

(gRecipeInterface.Commands.LoadRecipe=1);
}if(zzBOOL00010024){
(gHMI.Commands.LoadRecipeType1=0);
}if(zzBOOL00010024){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeReq2SDP))->bit1=1);
}if(zzBOOL00010024){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RecipeReq1SDP))->bit1=0);
}if((zzBOOL00010025=zzBOOL00010024)){

}else{goto imp1_EN0014;
}{int zzIndex; plcstring* zzLValue=(plcstring*)zz006600010001; plcstring* zzRValue=(plcstring*)TYPE2_RECIPE_NAME; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};{int zzIndex; plcstring* zzLValue=(plcstring*)gRecipeInterface.Parameters.RecipeName; plcstring* zzRValue=(plcstring*)zz006600010001; for(zzIndex=0; zzIndex<100l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};



;

imp1_EN0014:if((zzBOOL00010026=1)){

}else{goto imp1_EN0015;
}(gHMI.StatusDatapoints.RecipeIndexSDP=(zz000600010011=gRecipeInterface.Status.LoadedRecipeIndex));



;

imp1_EN0015:if((zzBOOL00010027=((gHMI.Commands.LoadRecipeType1^1)&(gHMI.Commands.LoadRecipeType2^1)))){


}else{goto imp1_EN0016;
}(gHMI.Commands.LoadRecipeType1=(zzBOOL00010028=(((unsigned long)(unsigned short)gHMI.StatusDatapoints.RecipeIndexSDP==(unsigned long)(unsigned short)1))));



;

imp1_EN0016:if((zzBOOL00010029=((gHMI.Commands.LoadRecipeType1^1)&(gHMI.Commands.LoadRecipeType2^1)))){


}else{goto imp1_EN0017;
}(gHMI.Commands.LoadRecipeType2=(zzBOOL0001002A=(((unsigned long)(unsigned short)gHMI.StatusDatapoints.RecipeIndexSDP==(unsigned long)(unsigned short)2))));



;

imp1_EN0017:if((zzBOOL0001002B=gRecipeInterface.Status.Busy)){

}else{goto imp1_EN0018;
}(gHMI.ColorMapDatapoints.RecipeSystemBusy=(zz000500010017=OK));



;

imp1_EN0018:if((zzBOOL0001002C=(gRecipeInterface.Status.Busy^1))){

}else{goto imp1_EN0019;
}(gHMI.ColorMapDatapoints.RecipeSystemBusy=(zz000500010018=NOTOK));



;

imp1_EN0019:(SettingsLoaded=(zzBOOL0001002D=((__AS__STRING_CMP(gRecipeInterface.Parameters.RecipeName,gRecipeInterface.Status.LoadedRecipeName)==0))));




if((zzBOOL0001002E=SettingsLoaded)){

}else{goto imp1_EN001A;
}(gHMI.ColorMapDatapoints.RecipeLoaded=(zz000500010019=OK));



;

imp1_EN001A:if((zzBOOL0001002F=SettingsLoaded)){

}else{goto imp1_EN001B;
}(gHMI.ColorMapDatapoints.RecipeLoaded=(zz00050001001A=OK));



;

imp1_EN001B:if((zzBOOL00010030=(gAlarmActive^1))){

}else{goto imp1_EN001C;
}(gHMI.BitmapSelectDatapoints.AlarmActive=(zz00050001001B=ALARM_INACTIVE));



;

imp1_EN001C:if((zzBOOL00010031=gAlarmActive)){

}else{goto imp1_EN001D;
}(gHMI.BitmapSelectDatapoints.AlarmActive=(zz00050001001C=ALARM_ACTIVE));



;

imp1_EN001D:if((zzBOOL00010032=(gAdhesiveCtrlInterface.Status.AlarmActive^1))){

}else{goto imp1_EN001E;
}(gHMI.ColorMapDatapoints.AdhesiveSystemOK=(zz00050001001D=OK));



;

imp1_EN001E:if((zzBOOL00010033=gAdhesiveCtrlInterface.Status.AlarmActive)){

}else{goto imp1_EN001F;
}(gHMI.ColorMapDatapoints.AdhesiveSystemOK=(zz00050001001E=NOTOK));



;

imp1_EN001F:if((zzBOOL00010034=(gAirPressureAlarmActive^1))){

}else{goto imp1_EN0020;
}(gHMI.ColorMapDatapoints.AirPressureOK=(zz00050001001F=OK));



;

imp1_EN0020:if((zzBOOL00010035=gAirPressureAlarmActive)){

}else{goto imp1_EN0021;
}(gHMI.ColorMapDatapoints.AirPressureOK=(zz000500010020=NOTOK));



;

imp1_EN0021:if((zzBOOL00010036=(gVacCtrlInterface.Status.AlarmActive^1))){

}else{goto imp1_EN0022;
}(gHMI.ColorMapDatapoints.VacuumOK=(zz000500010021=OK));



;

imp1_EN0022:if((zzBOOL00010037=gVacCtrlInterface.Status.AlarmActive)){

}else{goto imp1_EN0023;
}(gHMI.ColorMapDatapoints.VacuumOK=(zz000500010022=NOTOK));



;

imp1_EN0023:if((zzBOOL00010038=(gSafetyNotOKAlarmActive^1))){

}else{goto imp1_EN0024;
}(gHMI.ColorMapDatapoints.SafetyOK=(zz000500010023=OK));



;

imp1_EN0024:if((zzBOOL00010039=gSafetyNotOKAlarmActive)){

}else{goto imp1_EN0025;
}(gHMI.ColorMapDatapoints.SafetyOK=(zz000500010024=NOTOK));



;

imp1_EN0025:if((zzBOOL0001003A=(((((((gServoFeedInterface.Status.Error^1)&(gBodyHopperInterface.Status.Error^1))&(gLeftHopperInterface.Status.Error^1))&(gRightHopperInterface.Status.Error^1))&(gServoRamInterface.Status.Error^1))&(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Status.Error^1))&(gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Status.Error^1)))){







}else{goto imp1_EN0026;
}(gHMI.ColorMapDatapoints.DriveFaultOK=(zz000500010025=OK));



;

imp1_EN0026:if((zzBOOL0001003B=(gServoFeedInterface.Status.Error|(gBodyHopperInterface.Status.Error|(gLeftHopperInterface.Status.Error|(gRightHopperInterface.Status.Error|(gServoRamInterface.Status.Error|(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Status.Error|gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Status.Error)))))))){












}else{goto imp1_EN0027;
}(gHMI.ColorMapDatapoints.DriveFaultOK=(zz000500010026=NOTOK));



;

imp1_EN0027:if((zzBOOL0001003C=gIO.DIs.DownstreamSensor)){

}else{goto imp1_EN0028;
}(gHMI.ColorMapDatapoints.DownstreamSensorOK=(zz000500010027=NOTOK));



;

imp1_EN0028:if((zzBOOL0001003D=(gIO.DIs.DownstreamSensor^1))){

}else{goto imp1_EN0029;
}(gHMI.ColorMapDatapoints.DownstreamSensorOK=(zz000500010028=OK));



;

imp1_EN0029:if((zzBOOL0001003E=(gFoldPushCtrlInterface.Status.TopFoldValveStatus^1))){

}else{goto imp1_EN002A;
}(gHMI.ColorMapDatapoints.Valve1OK=(zz000500010029=NOTOK));



;

imp1_EN002A:if((zzBOOL0001003F=gFoldPushCtrlInterface.Status.TopFoldValveStatus)){

}else{goto imp1_EN002B;
}(gHMI.ColorMapDatapoints.Valve1OK=(zz00050001002A=OK));



;

imp1_EN002B:if((zzBOOL00010040=(gFoldPushCtrlInterface.Status.BottomFoldValveStatus^1))){

}else{goto imp1_EN002C;
}(gHMI.ColorMapDatapoints.Valve2OK=(zz00050001002B=NOTOK));



;

imp1_EN002C:if((zzBOOL00010041=gFoldPushCtrlInterface.Status.BottomFoldValveStatus)){

}else{goto imp1_EN002D;
}(gHMI.ColorMapDatapoints.Valve2OK=(zz00050001002C=OK));



;

imp1_EN002D:if((zzBOOL00010042=(gFoldPushCtrlInterface.Status.CompOnValveStatus^1))){

}else{goto imp1_EN002E;
}(gHMI.ColorMapDatapoints.Valve3OK=(zz00050001002D=NOTOK));



;

imp1_EN002E:if((zzBOOL00010043=gFoldPushCtrlInterface.Status.CompOnValveStatus)){

}else{goto imp1_EN002F;
}(gHMI.ColorMapDatapoints.Valve3OK=(zz00050001002E=OK));



;

imp1_EN002F:if((zzBOOL00010044=(gFoldPushCtrlInterface.Status.PushValveStatus^1))){

}else{goto imp1_EN0030;
}(gHMI.ColorMapDatapoints.Valve4OK=(zz00050001002F=NOTOK));



;

imp1_EN0030:if((zzBOOL00010045=gFoldPushCtrlInterface.Status.PushValveStatus)){

}else{goto imp1_EN0031;
}(gHMI.ColorMapDatapoints.Valve4OK=(zz000500010030=OK));



;

imp1_EN0031:if((zzBOOL00010046=gFoldPushCtrlInterface.Status.HardwireConfig)){

}else{goto imp1_EN0032;
}(gHMI.StatusDatapoints.HardwireValveSDP=(zz000500010032=(zz000500010031=0)));





;

imp1_EN0032:if((zzBOOL00010047=gIO.SafetyStatus.SafetyProgramRunning)){

}else{goto imp1_EN0033;
}(gHMI.StatusDatapoints.SafetyStartingSDP=(zz000600010012=HIDE));



;

imp1_EN0033:if((zzBOOL00010048=(gIO.SafetyStatus.SafetyProgramRunning^1))){

}else{goto imp1_EN0034;
}(gHMI.StatusDatapoints.SafetyStartingSDP=(zz000600010013=UNHIDE));



;

imp1_EN0034:(zzRTR000010005.CLK=gAlarmActive);

r_trig(&zzRTR000010005);
if((zzBOOL00010049=zzRTR000010005.Q)){

}else{goto imp1_EN0035;
}(gChangePage=(zz000500010033=PAGE_ALARM));



;

imp1_EN0035:if((zzBOOL0001004B=(zzBOOL0001004A=(((unsigned long)(unsigned char)gModeControlInterface.Parameters.MachineType==(unsigned long)(unsigned char)MACHINE_TYPE_BLISS))))){



}else{goto imp1_EN0036;
}(gHMI.StatusDatapoints.BlissSDP=(zz000600010014=(zz000500010034=0)));





;

imp1_EN0036:if((zzBOOL0001004D=(zzBOOL0001004C=(((unsigned long)(unsigned char)gModeControlInterface.Parameters.MachineType!=(unsigned long)(unsigned char)MACHINE_TYPE_BLISS))))){



}else{goto imp1_EN0037;
}(gHMI.StatusDatapoints.BlissSDP=(zz000600010015=(zz000500010035=3)));





;

imp1_EN0037:if((zzBOOL0001004F=(zzBOOL0001004E=(((unsigned long)(unsigned char)gModeControlInterface.Parameters.MachineType==(unsigned long)(unsigned char)MACHINE_TYPE_CLASSICPAK))))){



}else{goto imp1_EN0038;
}(gModeControlInterface.Parameters.MaxPPM=(zz000600010016=20));



(gModeControlInterface.Parameters.MinPPM=(zz000600010017=0));



;

imp1_EN0038:if((zzBOOL00010051=(zzBOOL00010050=(((unsigned long)(unsigned char)gModeControlInterface.Parameters.MachineType==(unsigned long)(unsigned char)MACHINE_TYPE_BLISS))))){



}else{goto imp1_EN0039;
}(gModeControlInterface.Parameters.MaxPPM=(zz000600010018=25));



(gModeControlInterface.Parameters.MinPPM=(zz000600010019=0));



;

imp1_EN0039:if((zzBOOL00010053=(zzBOOL00010052=(((unsigned long)(unsigned char)gModeControlInterface.Parameters.MachineType==(unsigned long)(unsigned char)MACHINE_TYPE_TRAY))))){



}else{goto imp1_EN003A;
}(gModeControlInterface.Parameters.MaxPPM=(zz00060001001A=25));



(gModeControlInterface.Parameters.MinPPM=(zz00060001001B=0));



;
imp1_EN003A:if((zzBOOL00010054=zzBOOL00010052)){

}else{goto imp1_EN003B;
}(gHMI.StatusDatapoints.TraySDP=(zz00060001001C=(zz000500010036=0)));





;

imp1_EN003B:if((zzBOOL00010056=(zzBOOL00010055=(((unsigned long)(unsigned char)gModeControlInterface.Parameters.MachineType!=(unsigned long)(unsigned char)MACHINE_TYPE_TRAY))))){



}else{goto imp1_EN003C;
}(gHMI.StatusDatapoints.TraySDP=(zz00060001001D=(zz000500010037=3)));





;

imp1_EN003C:if((zzBOOL00010058=(zzBOOL00010057=(((unsigned long)(unsigned short)gModeControlInterface.Parameters.MaxPPM<(unsigned long)(unsigned short)gModeControlInterface.Parameters.PiecesPerMinute))))){



}else{goto imp1_EN003D;
}(gModeControlInterface.Parameters.PiecesPerMinute=(zz00060001001E=gModeControlInterface.Parameters.MaxPPM));



;

imp1_EN003D:if((zzBOOL0001005A=(zzBOOL00010059=(((unsigned long)(unsigned short)gModeControlInterface.Parameters.MinPPM>(unsigned long)(unsigned short)gModeControlInterface.Parameters.PiecesPerMinute))))){



}else{goto imp1_EN003E;
}(gModeControlInterface.Parameters.PiecesPerMinute=(zz00060001001F=gModeControlInterface.Parameters.MinPPM));



;

imp1_EN003E:(LogoutTimer.IN=(ResetTimeoutTimer^1));

(LogoutTimer.PT=120000);

TON(&LogoutTimer);
(ResetUserLevel=LogoutTimer.Q);


(zzRTR000010006.CLK=ResetUserLevel);

r_trig(&zzRTR000010006);
if((zzBOOL0001005B=zzRTR000010006.Q)){

}else{goto imp1_EN003F;
}(gUserLevel=(zz000500010038=0));



(gChangePage=(zz000500010039=0));



;

imp1_EN003F:(ResetTimeoutTimer=(zzBOOL0001005C=(((unsigned long)(unsigned char)gActivePage!=(unsigned long)(unsigned char)OldPage))));




(OldPage=(zz00050001003A=gActivePage));




(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.LinMotSDP))->bit0=(zzBOOL0001005D=(gFoldPushCtrlInterface.Status.LinMotConfig^1)));


(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.LinMotTopHomeSDP))->bit0=zzBOOL0001005D);

(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.LinMotBotHomeSDP))->bit0=zzBOOL0001005D);


(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.LinMotTopHomeSDP))->bit1=(zzBOOL0001005E=((_1byte_bit_field_*)(&gHMI.ColorMapDatapoints.AutoModeSelected))->bit0));


(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.LinMotBotHomeSDP))->bit1=zzBOOL0001005E);


(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.PnuematicFolderSDP))->bit0=(gFoldPushCtrlInterface.Status.PneumaticConfig^1));


if((zzBOOL0001005F=gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit)){

}else{goto imp1_EN0040;
}(gHMI.ColorMapDatapoints.ATSAddOnOver=(zz00050001003B=NOTOK));



;

imp1_EN0040:if((zzBOOL00010060=(gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit^1))){

}else{goto imp1_EN0041;
}(gHMI.ColorMapDatapoints.ATSAddOnOver=(zz00050001003C=OK));



;

imp1_EN0041:if((zzBOOL00010061=gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit)){

}else{goto imp1_EN0042;
}(gHMI.ColorMapDatapoints.ATSAddOnUnder=(zz00050001003D=NOTOK));



;

imp1_EN0042:if((zzBOOL00010062=(gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit^1))){

}else{goto imp1_EN0043;
}(gHMI.ColorMapDatapoints.ATSAddOnUnder=(zz00050001003E=OK));



;

imp1_EN0043:if((zzBOOL00010063=1)){

}else{goto imp1_EN0044;
}(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelDataSize=(zz000700010002=12));



;

imp1_EN0044:if((zzBOOL00010064=1)){

}else{goto imp1_EN0045;
}(zz000700010003=((unsigned long)(&gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual)));


(zz000700010004=((unsigned long)(&gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempRequested)));


(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelDataCmpResult=(zz000400010000=brsmemcmp(zz000700010003,zz000700010004,gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelDataSize)));



;

imp1_EN0045:if((zzBOOL00010065=1)){

}else{goto imp1_EN0046;
}(gHMI.ColorMapDatapoints.NordsonEditTemps=(zz00050001003F=(((signed long)gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelDataCmpResult!=(signed long)0))));


;

imp1_EN0046:(((_1byte_bit_field_*)(&gHMI.ColorMapDatapoints.NordsonEditTemps))->bit0=(((_1byte_bit_field_*)(&gHMI.ColorMapDatapoints.NordsonEditTemps))->bit0&FlashON.Q));



if((zzBOOL00010066=(gIO.DIs.BodyHopperLow|(gIO.DIs.LeftHopperLow|gIO.DIs.RightHopperLow)))){




}else{goto imp1_EN0047;
}(gHMI.StatusDatapoints.HopperLowSDP=(zz000600010020=(zz000500010040=0)));





;

imp1_EN0047:if((zzBOOL00010067=((gIO.DIs.BodyHopperLow^1)|((gIO.DIs.LeftHopperLow^1)|(gIO.DIs.RightHopperLow^1))))){





}else{goto imp1_EN0048;
}(gHMI.StatusDatapoints.HopperLowSDP=(zz000600010021=(zz000500010041=3)));





;

imp1_EN0048:if((zzBOOL00010068=(gHMI.Commands.CycleServoRam^1))){

}else{goto imp1_EN0049;
}(gHMI.StatusDatapoints.HomeServoRamSDP=(zz000600010022=(zz000500010042=0)));





;

imp1_EN0049:if((zzBOOL00010069=gHMI.Commands.CycleServoRam)){

}else{goto imp1_EN004A;
}(gHMI.StatusDatapoints.HomeServoRamSDP=(zz000600010023=(zz000500010043=3)));





;

imp1_EN004A:if((zzBOOL0001006A=LubricationOK)){

}else{goto imp1_EN004B;
}(gHMI.StatusDatapoints.LubeSDP=(zz000600010024=(zz000500010044=3)));





;

imp1_EN004B:if((zzBOOL0001006B=(LubricationOK^1))){

}else{goto imp1_EN004C;
}(gHMI.StatusDatapoints.LubeSDP=(zz000600010025=(zz000500010045=0)));





;

imp1_EN004C:(zzRTR000010007.CLK=((_2byte_bit_field_*)(&gHMI.StatusDatapoints.AdhesivePatternConfirmedSDP))->bit0);

r_trig(&zzRTR000010007);
if((zzBOOL0001006C=zzRTR000010007.Q)){

(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.AdhesivePatternConfirmDialogSDP))->bit0=1);
}if(zzBOOL0001006C){
(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.AdhesivePatternDialogSDP))->bit0=1);

}(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.BodyHopperSwitchSDP))->bit0=gIO.DIs.BodyHopperMotor_RUN);


(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.LeftHopperSwitchSDP))->bit0=gIO.DIs.LeftHopperMotor_RUN);


(((_2byte_bit_field_*)(&gHMI.StatusDatapoints.RightHopperSwitchSDP))->bit0=gIO.DIs.RightHopperMotor_RUN);
}
}
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/HMI/HMIControl/Cyclic.nodebug"

void __AS__ImplInitCyclic_ld(void){}

signed long __AS__STRING_CMP(char* pstr1, char* pstr2)
{while (*pstr1 != 0 && *pstr1 == *pstr2){ pstr1++;pstr2++; } return (*pstr1 == 0 && *pstr2 != 0) ? -1 : (*pstr1 != 0 && *pstr2 == 0) ? 1 : *pstr1 - *pstr2;}

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
__asm__(".ascii \"iecfile \\\"Logical/HMI/HMIControl/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/HMI/HMIControl/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/HMIControl/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/HMIControl/Cyclic.ld.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/HMI/HMIControl/Cyclic.ld\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/HMIControl/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'gAdhesiveCtrlInterface'\\n\"");
__asm__(".ascii \"plcdata_const 'HIDE'\\n\"");
__asm__(".ascii \"plcdata_const 'LOCK'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NOTOK'\\n\"");
__asm__(".ascii \"plcdata_const 'OK'\\n\"");
__asm__(".ascii \"plcdata_const 'UNHIDE'\\n\"");
__asm__(".ascii \"plcdata_const 'UNLOCK'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_INACTIVE'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ACTIVE'\\n\"");
__asm__(".ascii \"plcdata_const 'PAGE_ALARM'\\n\"");
__asm__(".ascii \"plcdata_const 'MACHINE_TYPE_BLISS'\\n\"");
__asm__(".ascii \"plcdata_const 'MACHINE_TYPE_CLASSICPAK'\\n\"");
__asm__(".ascii \"plcdata_const 'MACHINE_TYPE_TRAY'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'TYPE1_RECIPE_NAME'\\n\"");
__asm__(".ascii \"plcdata_const 'TYPE2_RECIPE_NAME'\\n\"");
__asm__(".previous");
