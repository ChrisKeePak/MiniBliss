#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ServoPnPHa/Mainst.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.nodebug"
#line 2 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


(gHMI.Parameters.ServoPnPJogVelocity=10);
(gHMI.Parameters.ServoPnPPositiveVelocity=9.00000000000000000000E+01);
(gHMI.Parameters.ServoPnPNegativeVelocity=9.00000000000000000000E+01);
(gHMI.Parameters.ServoPnPAccel=1.00000000000000000000E+03);


(gHMI.Parameters.ServoPnPStartPosition=0);
(gHMI.Parameters.ServoPnPVacuumOffPosition=80);
(gHMI.Parameters.ServoPnPEndPosition=100);


(gHMI.Parameters.ServoPnPStartDwellTime=100);
(gHMI.Parameters.BodyKickerTime=250);
(gHMI.Parameters.BodyKickerRetractTime=100);


(gHMI.Parameters.ServoPnPTorqueLimit=8.00000000000000000000E+00);

}}
#line 23 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.nodebug"
#line 25 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{


if(gHighSeverityAlarmActive){
(state=999);
}

(StartDwellTimer.IN=0);
(BodyKickerTimer.IN=0);
(BodyKickerRetractTimer.IN=0);






if(gHMI.Commands.RequestReset){
(BodyGrabFailAlarm=0);
}

switch(state){

case 0:{


if((gServoPnPInterface.Status.Homed&ServoPnPFirstHomeExecuted)){
(ServoPnPAutoHome=0);
(gPnPAtStopPosition=1);
(gHMI.Commands.CycleServoPnP=0);
(gServoPnPInterface.Commands.ToMapp.TorqueLimitingOn=1);
(state=10);
}else if((gServoPnPInterface.Status.PoweredOn&(ServoPnPFirstHomeExecuted^1))){
(ServoPnPAutoHome=1);

(state=5);
}

}break;case 5:{

if((gServoPnPInterface.Status.Homed&ServoPnPFirstHomeExecuted)){
(ServoPnPAutoHome=0);
(gPnPAtStopPosition=1);
(gHMI.Commands.CycleServoPnP=0);
(gServoPnPInterface.Commands.ToMapp.TorqueLimitingOn=1);
(state=10);
}

}break;case 10:{

(ServoPnPAutoHome=0);
(gServoPnPInterface.Status.MoveComplete=0);


if(((gHMI.Commands.CycleServoPnP|SingleCyclePnP)&ServoPnPFirstHomeExecuted)){
(gCyclesToFinish=(gCyclesToFinish+1));
(gServoPnPInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoPnPStartPosition);
(gServoPnPInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoPnPPositiveVelocity);
(gServoPnPInterface.Commands.RequestMoveAbs=1);
(state=20);
}

}break;case 20:{

(GuideCylinder=0);


if((gServoPnPInterface.Status.MoveComplete&gIO.DIs.BodyHopperMotor_RUN)){
(gIO.DOs.BodyVacuumOn=1);
(gServoPnPInterface.Status.MoveComplete=0);
if((((unsigned long)gHMI.Parameters.ServoPnPStartDwellTime>(unsigned long)0))){
(state=30);
}else{
(gServoPnPInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoPnPEndPosition);
(gServoPnPInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoPnPNegativeVelocity);
(gServoPnPInterface.Commands.RequestMoveAbs=1);
(state=50);
}
}

}break;case 30:{


(StartDwellTimer.IN=1);
if(StartDwellTimer.Q){
(StartDwellTimer.IN=0);
(gServoPnPInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoPnPEndPosition);
(gServoPnPInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoPnPNegativeVelocity);
(gServoPnPInterface.Commands.RequestMoveAbs=1);
(state=40);
}


}break;case 40:{


if(((gServoPnPInterface.Status.ActualPosition>20))){
if(gIO.DIs.BodyVacuumAchieved){

(FailureCount=0);
(state=50);
}else{
(FailureCount=(FailureCount+1));

if((((unsigned long)(unsigned char)FailureCount==(unsigned long)(unsigned char)NUM_PNP_TRIES))){
(BodyGrabFailAlarm=1);

(gServoPnPInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoPnPStartPosition);
(gServoPnPInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoPnPPositiveVelocity);
(gServoPnPInterface.Commands.RequestMoveAbs=1);
(state=999);
}else{
(state=70);
}
}
}

}break;case 50:{

if(((gServoPnPInterface.Status.ActualPosition>gHMI.Parameters.ServoPnPVacuumOffPosition))){
(gIO.DOs.BodyVacuumOn=0);
}


if(gServoPnPInterface.Status.MoveComplete){
(gIO.DOs.BodyVacuumOn=0);

if(SingleCyclePnP){
(SingleCyclePnP=0);
(state=10);
}else if((gServoRamInterface.Status.ClearOfRoller&gRamWaitingOnBox)){
(gServoPnPInterface.Status.MoveComplete=0);
(gIO.DOs.BodyKicker=1);
(state=60);
}
}


}break;case 60:{

(GuideCylinder=1);

(BodyKickerTimer.IN=1);
if(BodyKickerTimer.Q){
(gIO.DOs.BodyKicker=0);
(BodyKickerRetractTimer.IN=1);
}

(FTrig_AdhesivePhotoeye.CLK=gIO.DIs.AdhesivePhotoEye);;F_TRIG(&FTrig_AdhesivePhotoeye);
if((FTrig_AdhesivePhotoeye.Q&BodyKickerRetractTimer.Q)){
(BodyKickerTimer.IN=0);
(BodyKickerRetractTimer.IN=0);

if((gHMI.Commands.CycleServoPnP^1)){
(state=10);
}else{

(gCyclesToFinish=(gCyclesToFinish+1));
(gServoPnPInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoPnPStartPosition);
(gServoPnPInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoPnPPositiveVelocity);
(gServoPnPInterface.Commands.RequestMoveAbs=1);

(state=20);
}
}

}break;case 70:{
if(gServoPnPInterface.Status.MoveComplete){
(gServoPnPInterface.Status.MoveComplete=0);
(gServoPnPInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoPnPStartPosition);
(gServoPnPInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoPnPNegativeVelocity);
(gServoPnPInterface.Commands.RequestMoveAbs=1);
(state=20);
}


}break;case 999:{

(gServoPnPInterface.Status.MoveComplete=0);
(gHMI.Commands.CycleServoPnP=0);
(ServoPnPAutoHome=0);
(gServoPnPInterface.Commands.RequestMoveAbs=0);
(gIO.DOs.BodyVacuumOn=0);
(gIO.DOs.BodyKicker=0);
(SingleCyclePnP=0);
if((((unsigned long)gNumActiveAlarms==(unsigned long)0))){
(FailureCount=0);
(state=0);
}

}break;}


if(((gServoPnPInterface.Status.ActualPosition<9.70000000000000000000E+01))){
(gIO.DOs.BodyKicker=0);
}

(StartDwellTimer.PT=gHMI.Parameters.ServoPnPStartDwellTime);
TON(&StartDwellTimer);
(BodyKickerTimer.PT=gHMI.Parameters.BodyKickerTime);
TON(&BodyKickerTimer);
(BodyKickerRetractTimer.PT=gHMI.Parameters.BodyKickerRetractTime);
TON(&BodyKickerRetractTimer);







}}
#line 234 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.nodebug"
#line 236 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 239 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.nodebug"

void __AS__ImplInitMain_st(void){__BUR__ENTRY_INIT_FUNCT__();}

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
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoMotionPackGlobal.var\\\" scope \\\"restricted\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoPnPHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoPnPHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ServoPnPHa/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ServoPnPHa/Main.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/ServoMotion/ServoPnPHandler/Main.st\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_PNP_TRIES'\\n\"");
__asm__(".previous");
