#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ServoRamHa/Mainst.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.nodebug"
#line 2 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


(gHMI.Parameters.ServoRamJogVelocity=50);

(gHMI.Parameters.ServoRamSideFormingVelocity=5.00000000000000000000E+02);
(gHMI.Parameters.ServoRamBoxFormingVelocity=7.50000000000000000000E+02);
(gHMI.Parameters.ServoRamNegativeVelocity=7.50000000000000000000E+02);

(gHMI.Parameters.ServoRamAccel=2.00000000000000000000E+03);


(gHMI.Parameters.ServoRamStartPosition=1.47200002670288085938E+01);
(gHMI.Parameters.ServoRamMiddlePosition=2.55000000000000000000E+02);
(gHMI.Parameters.ServoRamFoldStartPos=7.50000000000000000000E+01);
(gHMI.Parameters.ServoRamFoldEndPos=2.90000000000000000000E+02);
(gHMI.Parameters.ServoRamEndPosition=8.05000000000000000000E+02);


(gHMI.Parameters.ServoRamEndDwellTime=100);
(gHMI.Parameters.ServoRamStartDwellTime=100);
(gHMI.Parameters.ServoRamSidePickTime=300);
(gHMI.Parameters.ServoRamSidePickRetractTime=300);
(gHMI.Parameters.ServoRamSideFoldTime=100);
(gHMI.Parameters.ServoRamSideFoldRetractTime=50);
(gHMI.Parameters.RamDelay=100);


(gHMI.Parameters.ServoRamTorqueLimit=6.00000000000000000000E+00);
(gHMI.Parameters.ServoRamClearPosition=300);



*((char volatile*)&(gPassword)) = *((char*)&(gPassword));




}}
#line 40 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.nodebug"
#line 42 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{


if(gHighSeverityAlarmActive){
(state=999);
}

(gIO.DOs.ResetSafety=(gHMI.Commands.RequestReset|ForceSafetyReset));


if(gHMI.Commands.RequestReset){
(SideGrabFailAlarm=0);
(SideFoldFailAlarm=0);
(ResetTimeoutAlarm=0);
}


(EndDwellTimer.IN=0);
(SidePickTimer.IN=0);
(SidePickRetractTimer.IN=0);
(SideFoldTimer.IN=0);
(SideFoldRetractTimer.IN=0);
(RamDelayTimer.IN=0);
(ResetTimeoutTimer.IN=0);


if(((gHMI.Commands.CycleServoRam^1)&(gServoRamInterface.Status.Error^1))){
(ResetTimeoutTimer.IN=1);
}
if(ResetTimeoutTimer.Q){

}

if(((gServoRamInterface.Status.ActualPosition<=gHMI.Parameters.ServoRamClearPosition))){
(gServoRamInterface.Status.ClearOfRoller=1);
}else{
(gServoRamInterface.Status.ClearOfRoller=0);
}







switch(state){

case 0:{


if((gServoRamInterface.Status.Homed&ServoRamFirstHomeExecuted)){
(ServoRamAutoHome=0);
(gRamAtStopPosition=1);
(gHMI.Commands.CycleServoRam=0);
(gServoRamInterface.Commands.ToMapp.TorqueLimitingOn=1);
(state=10);
}else if((gServoRamInterface.Status.PoweredOn&(ServoRamFirstHomeExecuted^1))){
(ServoRamAutoHome=1);
(state=5);
}

}break;case 5:{

if((gServoRamInterface.Status.Homed&ServoRamFirstHomeExecuted)){
(ServoRamAutoHome=0);
(gRamAtStopPosition=1);
(gHMI.Commands.CycleServoRam=0);
(gServoRamInterface.Commands.ToMapp.TorqueLimitingOn=1);
(state=10);
}

}break;case 10:{

(ServoRamAutoHome=0);
(gServoRamInterface.Status.MoveComplete=0);

(gCyclesToFinish=0);


if((gHMI.Commands.CycleServoRam&ServoRamFirstHomeExecuted)){
(ServoRamBusy=1);
(gRamWaitingOnBox=1);
(gServoRamInterface.Commands.ToMapp.TorqueLimitingOn=1);
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamStartPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamNegativeVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(gRamAtStopPosition=0);
(ServoRamBusy=1);
(state=20);



}else if(ExerciseRam){
(gServoRamInterface.Commands.ToMapp.TorqueLimitingOn=1);
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamStartPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamNegativeVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(state=120);
}

}break;case 20:{



if(((gHMI.Commands.CycleServoRam^1)&gServoRamInterface.Status.MoveComplete&(((signed long)(signed long)(char)gCyclesToFinish==(signed long)(signed long)(char)0)))){
(gServoRamInterface.Status.MoveComplete=0);
(state=10);
}
else if((gServoRamInterface.Status.MoveComplete&gIO.DIs.LeftHopperMotor_RUN&gIO.DIs.RightHopperMotor_RUN&gIO.DIs.BodyHopperMotor_RUN&gServoFeedInterface.Status.InMotion&(gIO.DIs.BodyPickHome^1)&(((signed long)(signed long)(char)gCyclesToFinish>(signed long)(signed long)(char)0)))){
(gRamAtStopPosition=1);
(gServoRamInterface.Status.MoveComplete=0);
(ServoRamBusy=0);
(gIO.DOs.SidePanelVacOn=1);
(gIO.DOs.SidePanelHoldVacuum=1);
(gIO.DOs.SidePickCylinder=1);
(state=30);
}

}break;case 30:{
(SidePickTimer.IN=1);

if(SidePickTimer.Q){
(gIO.DOs.SidePickCylinder=0);
(SidePickRetractTimer.IN=1);
}

if(SidePickRetractTimer.Q){
(SidePickTimer.IN=0);
(SidePickRetractTimer.IN=0);
(state=40);
}

}break;case 40:{
if(gIO.DIs.SidePickVacuumAchieved){

(SideFailureCount=0);
(state=80);
}else{

(SideFailureCount=(SideFailureCount+1));
if((((unsigned long)(unsigned char)SideFailureCount==(unsigned long)(unsigned char)NUM_SIDE_TRIES))){

(SideGrabFailAlarm=1);
(state=999);
}else{

(gIO.DOs.SidePickCylinder=1);
(state=30);
}
}

}break;case 80:{

(RamDelayTimer.IN=gIO.DIs.BodyDetect);

if((gIO.DIs.SidePickVacuumAchieved&RamDelayTimer.Q)){
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamEndPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamBoxFormingVelocity);
(gRamAtStopPosition=0);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(ServoRamBusy=1);
(gRamWaitingOnBox=0);
(state=50);
}else{
if((gIO.DIs.SidePickVacuumAchieved^1)){
(SideGrabFailAlarm=1);
(state=999);
}
}

}break;case 50:{
if(((gServoRamInterface.Status.ActualPosition>gHMI.Parameters.ServoRamFoldStartPos))){
(gIO.DOs.FoldingHoldVacuum=1);
(gIO.DOs.LeftSideFoldCylinder=1);
(gIO.DOs.RightSideFoldCylinder=1);
(state=60);
}

}break;case 60:{
if(((gServoRamInterface.Status.ActualPosition>gHMI.Parameters.ServoRamFoldEndPos))){
(gIO.DOs.LeftSideFoldCylinder=0);
(gIO.DOs.RightSideFoldCylinder=0);
(state=90);
}

}break;case 90:{

if((gIO.DIs.SidePickVacuumAchieved&gServoRamInterface.Status.MoveComplete)){
(gServoRamInterface.Status.MoveComplete=0);
(gRamAtStopPosition=1);
(ServoRamBusy=0);
(gServoRamInterface.Commands.ToMapp.Update=1);
if((((unsigned long)gHMI.Parameters.ServoRamEndDwellTime>(unsigned long)0))){

(EndDwellTimer.IN=1);
(state=100);
}else{

(gCyclesToFinish=(gCyclesToFinish-1));

(CycleCount=(CycleCount+1));
(LubeCount=(LubeCount+1));
(gIO.DOs.SidePanelVacOn=0);
(gIO.DOs.SidePanelHoldVacuum=0);
(gIO.DOs.FoldingHoldVacuum=0);
(gIO.DOs.LeftSideFoldCylinder=0);
(gIO.DOs.RightSideFoldCylinder=0);
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamStartPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamNegativeVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(gRamAtStopPosition=0);
(ServoRamBusy=1);
(gRamWaitingOnBox=1);
(state=20);
}
}else{
if((gIO.DIs.SidePickVacuumAchieved^1)){
(SideGrabFailAlarm=1);
(state=999);
}
}

}break;case 100:{


(EndDwellTimer.IN=1);
if(EndDwellTimer.Q){
(gCyclesToFinish=(gCyclesToFinish-1));


(EndDwellTimer.IN=0);
(CycleCount=(CycleCount+1));
(LubeCount=(LubeCount+1));
(gIO.DOs.SidePanelVacOn=0);
(gIO.DOs.SidePanelHoldVacuum=0);
(gIO.DOs.FoldingHoldVacuum=0);
(gIO.DOs.LeftSideFoldCylinder=0);
(gIO.DOs.RightSideFoldCylinder=0);
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamStartPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamNegativeVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(gRamAtStopPosition=0);
(ServoRamBusy=1);
(gRamWaitingOnBox=1);
(state=20);
}



}break;case 120:{

if(gServoRamInterface.Status.MoveComplete){
(gServoRamInterface.Status.MoveComplete=0);
(ServoRamBusy=0);
if((ExerciseRam^1)){
(state=10);
}else{
(state=130);
}

}

}break;case 130:{
(SidePickTimer.IN=1);

if(SidePickTimer.Q){
(SidePickRetractTimer.IN=1);
}

if(SidePickRetractTimer.Q){
(SidePickTimer.IN=0);
(SidePickRetractTimer.IN=0);
(state=140);
}

}break;case 140:{

(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamMiddlePosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamSideFormingVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(state=150);

}break;case 150:{

if(gServoRamInterface.Status.MoveComplete){
(gServoRamInterface.Status.MoveComplete=0);
(state=160);
}

}break;case 160:{
(SideFoldTimer.IN=1);

if(SideFoldTimer.Q){
(SideFoldRetractTimer.IN=1);
}

if(SideFoldRetractTimer.Q){
(state=170);
}

}break;case 170:{
(state=180);

}break;case 180:{
(RamDelayTimer.IN=1);

if(RamDelayTimer.Q){
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamEndPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamBoxFormingVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(state=190);
}

}break;case 190:{

if(gServoRamInterface.Status.MoveComplete){
(gServoRamInterface.Status.MoveComplete=0);
if((((unsigned long)gHMI.Parameters.ServoRamEndDwellTime>(unsigned long)0))){

(EndDwellTimer.IN=1);
(state=191);
}else{

(CycleCount=(CycleCount+1));
(LubeCount=(LubeCount+1));
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamStartPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamNegativeVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(state=120);
}
}

}break;case 191:{


(EndDwellTimer.IN=1);
if(EndDwellTimer.Q){

(EndDwellTimer.IN=0);
(CycleCount=(CycleCount+1));
(LubeCount=(LubeCount+1));
(gServoRamInterface.Parameters.MovementParameters.Position=gHMI.Parameters.ServoRamStartPosition);
(gServoRamInterface.Parameters.MovementParameters.Velocity=gHMI.Parameters.ServoRamNegativeVelocity);
(gServoRamInterface.Commands.RequestMoveAbs=1);
(state=120);
}

}break;case 999:{

(gCyclesToFinish=0);

(ServoRamAutoHome=0);
(gServoRamInterface.Status.MoveComplete=0);
(gHMI.Commands.CycleServoRam=0);
(ServoRamBusy=0);
(ServoRamAutoHome=0);
(gIO.DOs.SidePanelHoldVacuum=0);
(gIO.DOs.LeftSideFoldCylinder=0);
(gIO.DOs.RightSideFoldCylinder=0);
(gIO.DOs.SidePickCylinder=0);
(gIO.DOs.SidePanelHoldVacuum=0);
(gIO.DOs.BodyVacuumOn=0);
(gIO.DOs.FoldingHoldVacuum=0);
(gRamWaitingOnBox=0);

if((((unsigned long)gNumActiveAlarms==(unsigned long)0))){
(SideFailureCount=0);
(FoldFailureCount=0);
(state=0);
}

}break;}


(EndDwellTimer.PT=gHMI.Parameters.ServoRamEndDwellTime);
TON(&EndDwellTimer);
(SidePickTimer.PT=gHMI.Parameters.ServoRamSidePickTime);
TON(&SidePickTimer);
(SidePickRetractTimer.PT=gHMI.Parameters.ServoRamSidePickRetractTime);
TON(&SidePickRetractTimer);
(SideFoldTimer.PT=gHMI.Parameters.ServoRamSideFoldTime);
TON(&SideFoldTimer);
(SideFoldRetractTimer.PT=gHMI.Parameters.ServoRamSideFoldRetractTime);
TON(&SideFoldRetractTimer);
(RamDelayTimer.PT=gHMI.Parameters.RamDelay);
TON(&RamDelayTimer);
(ResetTimeoutTimer.PT=gHMI.Parameters.ServoRamTimeoutTime);
TON(&ResetTimeoutTimer);

}}
#line 431 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.nodebug"
#line 433 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 436 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoRamHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoRamHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ServoRamHa/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ServoRamHa/Main.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/ServoMotion/ServoRamHandler/Main.st\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'gPassword'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_SIDE_TRIES'\\n\"");
__asm__(".previous");
