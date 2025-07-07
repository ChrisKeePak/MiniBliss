#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AdhesiveCo/Cyclicld.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/AdhesiveControl/Cyclic.nodebug"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/AdhesiveControl/Cyclic.ld"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{if((gAlarmSystemActive^1)){
return;

}(gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP=(zzBOOL00010000=(((signed long)gAdhesiveCtrlInterface.Parameters.NordsonFeedbackSelection==(signed long)1))));




(gAdhesiveCtrlInterface.Parameters.FeedbackIsHardwire=(zzBOOL00010001=(((signed long)gAdhesiveCtrlInterface.Parameters.NordsonFeedbackSelection==(signed long)0))));




if((zzBOOL00010002=((gHMI.Commands.SelectAutoMode^1)|(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Status.Error|(gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Status.Error|(gServoFeedInterface.Status.Error|(gIO.DIs.SafetyOK^1))))))){








}else{goto imp1_EN0000;
}(gAdhesiveCtrlInterface.Status.LatchedEncoderPos=(zz000800010000=9.99999900000000000000E+06));



;

imp1_EN0000:(gAdhesiveCtrlInterface.Status.GlueCyclePos=(zz000800010001=DistanceAfterLatch));




if(1){
(gIO.DOs.GlueChannel1=0);

}if(1){
(gIO.DOs.GlueChannel2=0);

}if(1){
(gIO.DOs.GlueChannel3=0);

}if(1){
(gIO.DOs.GlueChannel4=0);

}if(1){
(GlueChannel1=0);

}if(1){
(GlueChannel2=0);

}if(1){
(GlueChannel3=0);

}if(1){
(GlueChannel4=0);

}if((zzBOOL00010005=(zzBOOL00010004=((zzBOOL00010003=(((signed long)(signed long)(char)gCyclesToFinish>(signed long)(signed long)(char)0)))|(gHMI.Commands.SelectAutoMode&gHMI.Commands.RequestVFDRun))))){







}else{goto imp1_EN0001;
}(zz000700010000=((unsigned long)(&Switches0)));


(GlueChannel1=(zzBOOL00010006=GluePatternControl(&gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[0],gAdhesiveCtrlInterface.Status.GlueCyclePos,gAdhesiveCtrlInterface.Parameters.StitchPercentage,gAdhesiveCtrlInterface.Parameters.BeadLengths,gOnDelayCompensation,gOffDelayCompensation,zz000700010000,gAdhesiveCtrlInterface.Parameters.ChannelModulationCtrl[0])));



;

imp1_EN0001:(zzBOOL00010007=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NumAdhesiveChannels>=(unsigned long)(unsigned char)2)));


if((zzBOOL0001000A=(zzBOOL00010009=((zzBOOL00010008=(((signed long)(signed long)(char)gCyclesToFinish>(signed long)(signed long)(char)0)))|(zzBOOL00010007&gHMI.Commands.RequestVFDRun))))){







}else{goto imp1_EN0002;
}(zz000700010001=((unsigned long)(&Switches1)));


(GlueChannel2=(zzBOOL0001000B=GluePatternControl(&gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[1],gAdhesiveCtrlInterface.Status.GlueCyclePos,gAdhesiveCtrlInterface.Parameters.StitchPercentage,gAdhesiveCtrlInterface.Parameters.BeadLengths,gOnDelayCompensation,gOffDelayCompensation,zz000700010001,gAdhesiveCtrlInterface.Parameters.ChannelModulationCtrl[1])));



;

imp1_EN0002:(zzBOOL0001000C=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NumAdhesiveChannels>=(unsigned long)(unsigned char)3)));


if((zzBOOL0001000F=(zzBOOL0001000E=((zzBOOL0001000D=(((signed long)(signed long)(char)gCyclesToFinish>(signed long)(signed long)(char)0)))|(zzBOOL0001000C&gHMI.Commands.RequestVFDRun))))){







}else{goto imp1_EN0003;
}(zz000700010002=((unsigned long)(&Switches2)));


(GlueChannel3=(zzBOOL00010010=GluePatternControl(&gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[2],gAdhesiveCtrlInterface.Status.GlueCyclePos,gAdhesiveCtrlInterface.Parameters.StitchPercentage,gAdhesiveCtrlInterface.Parameters.BeadLengths,gOnDelayCompensation,gOffDelayCompensation,zz000700010002,gAdhesiveCtrlInterface.Parameters.ChannelModulationCtrl[2])));



;

imp1_EN0003:(zzBOOL00010011=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NumAdhesiveChannels>=(unsigned long)(unsigned char)4)));


if((zzBOOL00010014=(zzBOOL00010013=((zzBOOL00010012=(((signed long)(signed long)(char)gCyclesToFinish>(signed long)(signed long)(char)0)))|(zzBOOL00010011&gHMI.Commands.RequestVFDRun))))){







}else{goto imp1_EN0004;
}(zz000700010003=((unsigned long)(&Switches3)));


(GlueChannel4=(zzBOOL00010015=GluePatternControl(&gAdhesiveCtrlInterface.Parameters.AdhesivePatterns[3],gAdhesiveCtrlInterface.Status.GlueCyclePos,gAdhesiveCtrlInterface.Parameters.StitchPercentage,gAdhesiveCtrlInterface.Parameters.BeadLengths,gOnDelayCompensation,gOffDelayCompensation,zz000700010003,gAdhesiveCtrlInterface.Parameters.ChannelModulationCtrl[3])));



;

imp1_EN0004:(gIO.DOs.GlueChannel1=((GlueChannel1|gAdhesiveCtrlInterface.Commands.PurgeChannel1)&gIO.DIs.SafetyOK));




(gIO.DOs.GlueChannel2=((GlueChannel2|gAdhesiveCtrlInterface.Commands.PurgeChannel2)&gIO.DIs.SafetyOK));




(gIO.DOs.GlueChannel3=((GlueChannel3|gAdhesiveCtrlInterface.Commands.PurgeChannel3)&gIO.DIs.SafetyOK));




(gIO.DOs.GlueChannel4=((GlueChannel4|gAdhesiveCtrlInterface.Commands.PurgeChannel4)&gIO.DIs.SafetyOK));




(gAdhesiveCtrlInterface.Status.UnitFault=(((gIO.DIs.AdhesiveUnitNotFaulted^1)&gAdhesiveCtrlInterface.Parameters.FeedbackIsHardwire)|(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitFaulted&gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP)));






(gAdhesiveCtrlInterface.Status.UnitReady=((gIO.DIs.AdhesiveUnitReady&gAdhesiveCtrlInterface.Parameters.FeedbackIsHardwire)|(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitReady&gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP)));






(AdhesiveUnitReadyAlarmActive=(zzBOOL00010016=MpAlarmXCheckState(&gAlarmXCore,ALARM_ADHESIVE_NOT_READY,1)));




if((zzBOOL00010017=(((gAdhesiveCtrlInterface.Status.UnitReady^1)&(AdhesiveUnitReadyAlarmActive^1))&gRecipeInterface.Status.RecipeHasBeenLoaded))){



}else{goto imp1_EN0005;
}(status=(zz000700010004=MpAlarmXSet(&gAlarmXCore,ALARM_ADHESIVE_NOT_READY)));



;

imp1_EN0005:if((zzBOOL00010018=(gAdhesiveCtrlInterface.Status.UnitReady&AdhesiveUnitReadyAlarmActive))){


}else{goto imp1_EN0006;
}(status=(zz000700010005=MpAlarmXReset(&gAlarmXCore,ALARM_ADHESIVE_NOT_READY)));



;

imp1_EN0006:(AdhesiveUnitFaultedAlarmActive=(zzBOOL00010019=MpAlarmXCheckState(&gAlarmXCore,ALARM_ADHESIVE_FAULT,1)));




if((zzBOOL0001001A=((gAdhesiveCtrlInterface.Status.UnitFault&(AdhesiveUnitFaultedAlarmActive^1))&gRecipeInterface.Status.RecipeHasBeenLoaded))){



}else{goto imp1_EN0007;
}(status=(zz000700010006=MpAlarmXSet(&gAlarmXCore,ALARM_ADHESIVE_FAULT)));



;

imp1_EN0007:if((zzBOOL0001001B=((gAdhesiveCtrlInterface.Status.UnitFault^1)&AdhesiveUnitFaultedAlarmActive))){


}else{goto imp1_EN0008;
}(status=(zz000700010007=MpAlarmXReset(&gAlarmXCore,ALARM_ADHESIVE_FAULT)));



;

imp1_EN0008:(AdhesiveUnitLevelLowAlarmActive=(zzBOOL0001001C=MpAlarmXCheckState(&gAlarmXCore,ALARM_ADHESIVE_LOW,1)));




if((zzBOOL0001001D=(gIO.DIs.AdhesiveLevelLow&(AdhesiveUnitLevelLowAlarmActive^1)))){


}else{goto imp1_EN0009;
}(status=(zz000700010008=MpAlarmXSet(&gAlarmXCore,ALARM_ADHESIVE_LOW)));



;

imp1_EN0009:if((zzBOOL0001001E=(((gIO.DIs.AdhesiveLevelLow^1)&AdhesiveUnitLevelLowAlarmActive)&gRecipeInterface.Status.RecipeHasBeenLoaded))){



}else{goto imp1_EN000A;
}(status=(zz000700010009=MpAlarmXReset(&gAlarmXCore,ALARM_ADHESIVE_LOW)));



;

imp1_EN000A:(AdhesiveUnitUseageLowAlarmActive=(zzBOOL0001001F=MpAlarmXCheckState(&gAlarmXCore,ALARM_ADHESIVE_USEAGE_LOW,1)));




if((zzBOOL00010020=((gIO.DIs.LowAdhesiveUseage&(AdhesiveUnitUseageLowAlarmActive^1))&gRecipeInterface.Status.RecipeHasBeenLoaded))){



}else{goto imp1_EN000B;
}(status=(zz00070001000A=MpAlarmXSet(&gAlarmXCore,ALARM_ADHESIVE_USEAGE_LOW)));



;

imp1_EN000B:if((zzBOOL00010021=((gIO.DIs.LowAdhesiveUseage^1)&AdhesiveUnitUseageLowAlarmActive))){


}else{goto imp1_EN000C;
}(status=(zz00070001000B=MpAlarmXReset(&gAlarmXCore,ALARM_ADHESIVE_USEAGE_LOW)));



;

imp1_EN000C:if((zzBOOL00010022=(gIO.DIs.SafetyOK^1))){

(gIO.DOs.GlueChannel1=0);
}if(zzBOOL00010022){
(gIO.DOs.GlueChannel2=0);
}if(zzBOOL00010022){
(gIO.DOs.GlueChannel3=0);
}if(zzBOOL00010022){
(gIO.DOs.GlueChannel4=0);}}
}
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/AdhesiveControl/Cyclic.nodebug"

void __AS__ImplInitCyclic_ld(void){}

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
__asm__(".ascii \"iecfile \\\"Logical/Actuators/AdhesiveControl/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Actuators/AdhesiveControl/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AdhesiveCo/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AdhesiveCo/Cyclic.ld.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/AdhesiveControl/Cyclic.ld\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/AdhesiveCo/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ADHESIVE_FAULT'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ADHESIVE_LOW'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ADHESIVE_NOT_READY'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ADHESIVE_USEAGE_LOW'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_BEADS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_BEADS_M1'\\n\"");
__asm__(".previous");
