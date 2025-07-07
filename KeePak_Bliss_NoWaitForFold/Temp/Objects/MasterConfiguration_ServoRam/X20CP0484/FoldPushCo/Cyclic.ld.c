#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FoldPushCo/Cyclicld.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Actuators/FoldPushControl/Cyclic.nodebug"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Actuators/FoldPushControl/Cyclic.ld"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{(gIO.DOs.TopFolder=(zzBOOL00010000=FoldPushControl((zz000800010000=(float)gServoRamInterface.Status.ActualPosition),gFoldPushCtrlInterface.Parameters.TopFolderOnPos,gFoldPushCtrlInterface.Parameters.TopFolderOffPos)));






(gIO.DOs.BottomFolder=(zzBOOL00010001=FoldPushControl((zz000800010001=(float)gServoRamInterface.Status.ActualPosition),gFoldPushCtrlInterface.Parameters.BottomFolderOnPos,gFoldPushCtrlInterface.Parameters.BottomFolderOffPos)));






(gIO.DOs.HighCompression=(zzBOOL00010002=FoldPushControl((zz000800010002=(float)gServoRamInterface.Status.ActualPosition),gFoldPushCtrlInterface.Parameters.HighCompressionOnPos,gFoldPushCtrlInterface.Parameters.HighCompressionOffPos)));






(gIO.DOs.LowCompression=(zzBOOL00010003=FoldPushControl((zz000800010003=(float)gServoRamInterface.Status.ActualPosition),gFoldPushCtrlInterface.Parameters.LowCompressionOnPos,gFoldPushCtrlInterface.Parameters.LowCompressionOffPos)));






(gIO.DOs.CompressionAirOn=(zzBOOL00010004=FoldPushControl((zz000800010004=(float)gServoRamInterface.Status.ActualPosition),gFoldPushCtrlInterface.Parameters.HighCompressionOnPos,gFoldPushCtrlInterface.Parameters.LowCompressionOffPos)));






(gPusherOn=(zzBOOL00010005=FoldPushControl((zz000800010005=(float)gServoRamInterface.Status.ActualPosition),gFoldPushCtrlInterface.Parameters.PushOn,gFoldPushCtrlInterface.Parameters.PushOff)));






(Valve4OnNotBliss=((zzBOOL00010006=(gIO.DOs.PushOn&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode)))&(gModeControlInterface.Status.MachineIsBliss^1)));






(Valve4OnBliss=(zzBOOL00010006&gModeControlInterface.Status.MachineIsBliss));



if((zzBOOL00010008=(zzBOOL00010007=((gAdhesiveCtrlInterface.Status.GlueCyclePos>0))))){


}else{goto imp1_EN0000;
}(gFoldPushCtrlInterface.Status.CompressionAllowed=(zzBOOL00010009=((gAdhesiveCtrlInterface.Status.GlueCyclePos<360))));


;

imp1_EN0000:(Valve2OnBliss=((gIO.DOs.LowCompression&gModeControlInterface.Status.MachineIsBliss)&gModeControlInterface.Commands.SetAutoMode));




(Valve0OnBliss=((gIO.DOs.HighCompression&gModeControlInterface.Status.MachineIsBliss)&gModeControlInterface.Commands.SetAutoMode));




(Valve6OnBliss=((gIO.DOs.CompressionAirOn&gModeControlInterface.Status.MachineIsBliss)&gModeControlInterface.Commands.SetAutoMode));




(gFoldPushCtrlInterface.Status.TopFoldValveStatus=(((_2byte_bit_field_*)(&gIO.DIs.Pneumatics580StatusWord3))->bit0|(gFoldPushCtrlInterface.Status.HardwireConfig&(gIO.DIs.PnuematicsHWStatusV0^1))));





(gFoldPushCtrlInterface.Status.BottomFoldValveStatus=(((_2byte_bit_field_*)(&gIO.DIs.Pneumatics580StatusWord3))->bit2|(gFoldPushCtrlInterface.Status.HardwireConfig&(gIO.DIs.PnuematicsHWStatusV2^1))));





(gFoldPushCtrlInterface.Status.PushValveStatus=(((_2byte_bit_field_*)(&gIO.DIs.Pneumatics580StatusWord3))->bit4|(gFoldPushCtrlInterface.Status.HardwireConfig&(gIO.DIs.PnuematicsHWStatusV4^1))));





(gFoldPushCtrlInterface.Status.CompOnValveStatus=(gFoldPushCtrlInterface.Status.HardwireConfig&(gIO.DIs.PnuematicsHWStatusV6^1)));



(gFoldPushCtrlInterface.Status.LinMotConfig=(zzBOOL0001000A=(((signed long)gFoldPushCtrlInterface.Parameters.FolderTypeSelection==(signed long)1))));




(gFoldPushCtrlInterface.Status.PneumaticConfig=(zzBOOL0001000B=(((signed long)gFoldPushCtrlInterface.Parameters.FolderTypeSelection==(signed long)0))));




(gFoldPushCtrlInterface.Status.HardwireConfig=(zzBOOL0001000C=(((signed long)gFoldPushCtrlInterface.Parameters.NumaticsTypeSelection==(signed long)0))));




(gFoldPushCtrlInterface.Status.PowelinkConfig=(zzBOOL0001000D=(((signed long)gFoldPushCtrlInterface.Parameters.NumaticsTypeSelection==(signed long)1))));




(Valve0OnNotBliss=(((gFoldPushCtrlInterface.Status.PneumaticConfig&gIO.DOs.TopFolder)&(gModeControlInterface.Status.MachineIsBliss^1))&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode)));







(Valve2OnNotBliss=(((gFoldPushCtrlInterface.Status.PneumaticConfig&gIO.DOs.BottomFolder)&(gModeControlInterface.Status.MachineIsBliss^1))&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode)));







(((_2byte_bit_field_*)(&gIO.DOs.Pneumatics580ControlWord1))->bit0=(zzBOOL0001000E=(Valve0OnBliss|Valve0OnNotBliss)));



(gIO.DOs.PnuematicsValve0=(zzBOOL0001000E&gFoldPushCtrlInterface.Status.HardwireConfig));



(((_2byte_bit_field_*)(&gIO.DOs.Pneumatics580ControlWord1))->bit2=(zzBOOL0001000F=(Valve2OnBliss|Valve2OnNotBliss)));



(gIO.DOs.PnuematicsValve2=(zzBOOL0001000F&gFoldPushCtrlInterface.Status.HardwireConfig));



(((_2byte_bit_field_*)(&gIO.DOs.Pneumatics580ControlWord1))->bit4=(zzBOOL00010010=(Valve4OnNotBliss|Valve4OnBliss)));



(gIO.DOs.PnuematicsValve4=(zzBOOL00010010&gFoldPushCtrlInterface.Status.HardwireConfig));



(((_2byte_bit_field_*)(&gIO.DOs.Pneumatics580ControlWord1))->bit6=(zzBOOL00010011=(Valve6OnBliss|Valve6OnNotBliss)));



(gIO.DOs.PnuematicsValve6=(zzBOOL00010011&gFoldPushCtrlInterface.Status.HardwireConfig));



(zzRTR000010000.CLK=gIO.DOs.TopFolder);

r_trig(&zzRTR000010000);
if((zzBOOL00010013=(zzBOOL00010012=((gFoldPushCtrlInterface.Status.LinMotConfig&zzRTR000010000.Q)&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode))))){






}else{goto imp1_EN0001;
}(gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Parameter.MpBasicParameters.Position=(zz000E00010000=gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Parameter.ExtendPos));



;
imp1_EN0001:if((zzBOOL00010014=zzBOOL00010012)){

}else{goto imp1_EN0002;
}(gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Command.MoveAbsoluteRequest=(zzBOOL00010015=1));



;

imp1_EN0002:(zzFTR000010000.CLK=gIO.DOs.TopFolder);

f_trig(&zzFTR000010000);
(zzRTR000010001.CLK=gRamCtrlInterface.Status.Running);

r_trig(&zzRTR000010001);
if((zzBOOL00010017=(zzBOOL00010016=((gFoldPushCtrlInterface.Status.LinMotConfig&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode))&(zzFTR000010000.Q|((gIO.DOs.TopFolder^1)&zzRTR000010001.Q)))))){











}else{goto imp1_EN0003;
}(gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Parameter.MpBasicParameters.Position=(zz000E00010001=gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Parameter.RetractPos));



;
imp1_EN0003:if((zzBOOL00010018=zzBOOL00010016)){

}else{goto imp1_EN0004;
}(gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Command.MoveAbsoluteRequest=(zzBOOL00010019=1));



;

imp1_EN0004:(zzRTR000010002.CLK=gIO.DOs.BottomFolder);

r_trig(&zzRTR000010002);
if((zzBOOL0001001B=(zzBOOL0001001A=((gFoldPushCtrlInterface.Status.LinMotConfig&zzRTR000010002.Q)&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode))))){






}else{goto imp1_EN0005;
}(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Parameter.MpBasicParameters.Position=(zz000E00010002=gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Parameter.ExtendPos));



;
imp1_EN0005:if((zzBOOL0001001C=zzBOOL0001001A)){

}else{goto imp1_EN0006;
}(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Command.MoveAbsoluteRequest=(zzBOOL0001001D=1));



;

imp1_EN0006:(zzFTR000010001.CLK=gIO.DOs.BottomFolder);

f_trig(&zzFTR000010001);
(zzRTR000010003.CLK=gRamCtrlInterface.Status.Running);

r_trig(&zzRTR000010003);
if((zzBOOL0001001F=(zzBOOL0001001E=((gFoldPushCtrlInterface.Status.LinMotConfig&(gModeControlInterface.Commands.SetAutoMode|gModeControlInterface.Commands.SetJogMode))&(zzFTR000010001.Q|((gIO.DOs.BottomFolder^1)&zzRTR000010003.Q)))))){











}else{goto imp1_EN0007;
}(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Parameter.MpBasicParameters.Position=(zz000E00010003=gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Parameter.RetractPos));



;
imp1_EN0007:if((zzBOOL00010020=zzBOOL0001001E)){

}else{goto imp1_EN0008;
}(gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Command.MoveAbsoluteRequest=(zzBOOL00010021=1));



;}imp1_EN0008:;
}
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Actuators/FoldPushControl/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Actuators/FoldPushControl/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Actuators/FoldPushControl/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FoldPushCo/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FoldPushCo/Cyclic.ld.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Actuators/FoldPushControl/Cyclic.ld\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FoldPushCo/Cyclic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES_M1'\\n\"");
__asm__(".previous");
