#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/MappCall/AxisBasicld.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/MappCall/AxisBasic.nodebug"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/MappCall/AxisBasic.ld"
void AxisBasic(struct AxisBasic* inst){struct {unsigned long pMpLink;unsigned long pAxis;unsigned long pEndlessPosition;struct Axis_Interface_typ(* AxisInterface);double OdometerValue;float Override;struct MpAxisBasic AxisBasic;struct MpAxisBasicConfig AxisConfig;double AbsDistance;	unsigned long zz000700010000;
	unsigned long zz000700010001;
	unsigned long zz000700010002;
	unsigned long zz000700010003;
	unsigned long zz000700010004;
	double zz000E00010000;
	double zz000E00010001;
	double zz000E00010002;
	unsigned short zz000600010000;
	unsigned short zz000600010001;
	unsigned char zz000500010000;
	plcbit zzBOOL00010000;
	plcbit zzBOOL00010001;
	plcbit zzBOOL00010002;
	plcbit zzBOOL00010003;
	plcbit zzBOOL00010004;
	plcbit zzBOOL00010005;
	plcbit zzBOOL00010006;
	struct r_trig zzRTR000010000;
	struct r_trig zzRTR000010001;
	signed long zz000400010000;
struct MC_SetOverride SetOverride;plcbit ErrorReset;}*__inst__=(void*)inst;{((*(unsigned long*)&(__inst__->AxisConfig.MpLink))=__inst__->pMpLink);

(__inst__->AxisConfig.Enable=1);

((*(unsigned long*)&(__inst__->AxisConfig.Configuration))=((unsigned long)(&((*(__inst__->AxisInterface)).Parameters.AxisAndDrivePars))));




(__inst__->AxisConfig.Load=((*(__inst__->AxisInterface)).Commands.ToMapp.LoadConfig));

(__inst__->AxisConfig.Save=((*(__inst__->AxisInterface)).Commands.ToMapp.SaveConfig));

MpAxisBasicConfig(&__inst__->AxisConfig);
((*(__inst__->AxisInterface)).Status.ConfigCommandDone=__inst__->AxisConfig.CommandDone);


((*(unsigned long*)&(__inst__->AxisBasic.MpLink))=__inst__->pMpLink);

(__inst__->AxisBasic.Enable=1);

(__inst__->AxisBasic.ErrorReset=__inst__->ErrorReset);

((*(unsigned long*)&(__inst__->AxisBasic.Parameters))=((unsigned long)(&((*(__inst__->AxisInterface)).Parameters.MovementParameters))));




(__inst__->AxisBasic.Update=((((*(__inst__->AxisInterface)).Commands.ToMapp.Update)&((*(__inst__->AxisInterface)).Status.AxisBasicActive))&(__inst__->AxisBasic.UpdateDone^1)));



(__inst__->AxisBasic.Axis=__inst__->pAxis);

(__inst__->AxisBasic.Power=((*(__inst__->AxisInterface)).Commands.ToMapp.Power));

(__inst__->AxisBasic.Home=((*(__inst__->AxisInterface)).Commands.ToMapp.Home));

(__inst__->AxisBasic.MoveVelocity=((*(__inst__->AxisInterface)).Commands.ToMapp.MoveVelocity));

(__inst__->AxisBasic.MoveAbsolute=((*(__inst__->AxisInterface)).Commands.ToMapp.MoveAbs));

(__inst__->AxisBasic.MoveAdditive=((*(__inst__->AxisInterface)).Commands.ToMapp.MoveAdditive));

(__inst__->AxisBasic.Stop=((*(__inst__->AxisInterface)).Commands.ToMapp.Stop));

(__inst__->AxisBasic.JogPositive=((*(__inst__->AxisInterface)).Commands.ToMapp.JogPos));

(__inst__->AxisBasic.JogNegative=((*(__inst__->AxisInterface)).Commands.ToMapp.JogNeg));

(__inst__->AxisBasic.TorqueLimit=((*(__inst__->AxisInterface)).Commands.ToMapp.TorqueLimitingOn));

MpAxisBasic(&__inst__->AxisBasic);
((*(__inst__->AxisInterface)).Status.AxisBasicActive=__inst__->AxisBasic.Active);

((*(__inst__->AxisInterface)).Status.Error=__inst__->AxisBasic.Error);

if(__inst__->AxisBasic.UpdateDone){
((*(__inst__->AxisInterface)).Commands.ToMapp.Update=0);
}((*(__inst__->AxisInterface)).Status.ActualPosition=__inst__->AxisBasic.Position);

((*(__inst__->AxisInterface)).Status.ActualSpeed=__inst__->AxisBasic.Velocity);

((*(__inst__->AxisInterface)).Status.MappCommandBusy=__inst__->AxisBasic.CommandBusy);

((*(__inst__->AxisInterface)).Status.PoweredOn=__inst__->AxisBasic.PowerOn);

((*(__inst__->AxisInterface)).Status.Homed=__inst__->AxisBasic.IsHomed);

((*(__inst__->AxisInterface)).Status.InPosition=__inst__->AxisBasic.InPosition);

((*(__inst__->AxisInterface)).Status.InMotion=__inst__->AxisBasic.MoveActive);


((*(__inst__->AxisInterface)).Status.PositiveStatusID=(__inst__->zz000500010000=StatusID_Decoder(__inst__->AxisBasic.Info.Diag.StatusID.ID)));




((*(__inst__->AxisInterface)).Status.StatusSeverity=(__inst__->zz000700010000=Severity_Decoder(__inst__->AxisBasic.Info.Diag.StatusID.Severity)));




((*(__inst__->AxisInterface)).Status.StatusCode=(__inst__->zz000600010000=__inst__->AxisBasic.Info.Diag.StatusID.Code));




((*(__inst__->AxisInterface)).Status.InternalID=(__inst__->zz000400010000=__inst__->AxisBasic.Info.Diag.Internal.ID));




((*(__inst__->AxisInterface)).Status.InternalSeverity=(__inst__->zz000700010001=Severity_Decoder(__inst__->AxisBasic.Info.Diag.Internal.Severity)));




if((__inst__->zzBOOL00010001=(__inst__->zzBOOL00010000=(((signed long)__inst__->AxisBasic.Info.Diag.Internal.Facility==(signed long)-1))))){


}else{goto imp1_EN0000;
}((*(__inst__->AxisInterface)).Status.PositiveInternalFacility=(__inst__->zz000700010002=1000));



;

imp1_EN0000:((*(__inst__->AxisInterface)).Status.PositiveInternalFacility=(__inst__->zz000700010003=Facility_Decoder((__inst__->zzBOOL00010002=(((signed long)__inst__->AxisBasic.Info.Diag.Internal.Facility!=(signed long)-1))),__inst__->AxisBasic.Info.Diag.Internal.Facility)));





((*(__inst__->AxisInterface)).Status.InternalCode=(__inst__->zz000600010001=__inst__->AxisBasic.Info.Diag.Internal.Code));




((*(__inst__->AxisInterface)).Status.ExecutingCmd=(__inst__->zz000700010004=__inst__->AxisBasic.Info.Diag.ExecutingCommand));




((*(__inst__->AxisInterface)).Status.AxisInitialized=(__inst__->zzBOOL00010003=__inst__->AxisBasic.Info.AxisInitialized));



((*(__inst__->AxisInterface)).Status.ReadyToPowerOn=(__inst__->zzBOOL00010004=__inst__->AxisBasic.Info.ReadyToPowerOn));



((*(__inst__->AxisInterface)).Status.ActualTorque=(__inst__->zz000E00010000=__inst__->AxisBasic.Info.CyclicRead.Torque.Value));




(__inst__->zzRTR000010000.CLK=__inst__->AxisBasic.MoveAbsolute);

r_trig(&__inst__->zzRTR000010000);
if((__inst__->zzBOOL00010005=__inst__->zzRTR000010000.Q)){

}else{goto imp1_EN0001;
}(__inst__->AbsDistance=(__inst__->zz000E00010001=RealAbs((((*(__inst__->AxisInterface)).Parameters.MovementParameters.Position)-__inst__->AxisBasic.Position))));


;

imp1_EN0001:(__inst__->zzRTR000010001.CLK=__inst__->AxisBasic.MoveActive);

r_trig(&__inst__->zzRTR000010001);
if((__inst__->zzBOOL00010006=(__inst__->zzRTR000010001.Q&__inst__->AxisBasic.MoveAbsolute))){


}else{goto imp1_EN0002;
}(__inst__->OdometerValue=(__inst__->zz000E00010002=(__inst__->OdometerValue+__inst__->AbsDistance)));



;

imp1_EN0002:(__inst__->SetOverride.Axis=__inst__->pAxis);

(__inst__->SetOverride.Enable=((*(__inst__->AxisInterface)).Status.PoweredOn));

(__inst__->SetOverride.VelFactor=__inst__->Override);

(__inst__->SetOverride.AccFactor=1.00000000000000000000E+00);

MC_SetOverride(&__inst__->SetOverride);}
}
#line 2 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/MappCall/AxisBasic.nodebug"

void __AS__ImplInitAxisBasic_ld(void){}

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
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/MappCall/AxisBasic.ld.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/MappCall/AxisBasic.ld.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Logical/Libraries/MappCall/AxisBasic.ld\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"AxisBasic\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"StatusID_Decoder\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"Severity_Decoder\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"Facility_Decoder\\\" FUN\\n\"");
__asm__(".previous");

__asm__(".section \".plc.internal.memory\"");
__asm__(".ascii \"AxisBasic|zz000700010000,UDINT,0,4|zz000700010001,UDINT,4,4|zz000700010002,UDINT,8,4|zz000700010003,UDINT,12,4|zz000700010004,UDINT,16,4|zz000E00010000,LREAL,20,8|zz000E00010001,LREAL,28,8|zz000E00010002,LREAL,36,8|zz000600010000,UINT,44,2|zz000600010001,UINT,46,2|zz000500010000,USINT,48,1|zzBOOL00010000,BOOL,49,1|zzBOOL00010001,BOOL,50,1|zzBOOL00010002,BOOL,51,1|zzBOOL00010003,BOOL,52,1|zzBOOL00010004,BOOL,53,1|zzBOOL00010005,BOOL,54,1|zzBOOL00010006,BOOL,55,1|zzRTR000010000,r_trig,56,3|zzRTR000010000.M,BOOL,58,1|zzRTR000010000.CLK,BOOL,56,1|zzRTR000010000.Q,BOOL,57,1|zzRTR000010001,r_trig,59,3|zzRTR000010001.M,BOOL,61,1|zzRTR000010001.CLK,BOOL,59,1|zzRTR000010001.Q,BOOL,60,1|zz000400010000,DINT,64,4||\"");
__asm__(".previous");
