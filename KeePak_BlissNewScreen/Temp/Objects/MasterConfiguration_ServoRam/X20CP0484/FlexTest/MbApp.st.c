#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FlexTest/MbAppst.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.nodebug"
#line 16 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{

(NordsonTxPacket.Byte0_MelterControl=1);
(NordsonTxPacket.Byte1_Command=3);
(NordsonTxPacket.Byte2_Data_Index=120);
(NordsonTxPacket.Byte3_Channel_Num=3);
(NordsonTxPacket.Byte4_5_WriteData=0);
(NordsonTxPacket.Byte6_7_Mot1Spd=0);
(NordsonTxPacket.Byte8_9_Mot2Spd=0);
(NordsonTxPacket.Byte10_11_Mot3Spd=0);
(NordsonTxPacket.Byte12_13_Mot4Spd=0);
(NordsonTxPacket.Byte14_15_NotUsed=0);

(state=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)mb_station; plcstring* zzRValue=(plcstring*)"IF2.ST2"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(write_register_address=1024);
(read_register_address=0);
(num_registers_to_write=8);
(num_registers_to_read=8);

(testChannel=CHANNEL_ACT_TEMP_START);
(testIdx=IDX_ACT_TEMP);

(gAdhesiveCtrlInterface.Commands.MelterOn=1);
(gAdhesiveCtrlInterface.Commands.PumpsOn=1);



(FirstTimeCopySetTemps=0);



}}
#line 50 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.nodebug"
#line 53 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if(gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP){
(gHMI.StatusDatapoints.NordsonModbusSDP=0);
}else{
(gHMI.StatusDatapoints.NordsonModbusSDP=3);
}

(StandbyTimer.IN=((gRamCtrlInterface.Status.Running^1)&(gAdhesiveCtrlInterface.Commands.MelterStandbyOn^1)));
(StandbyTimer.PT=gAdhesiveCtrlInterface.Parameters.NordsonComms.StandbyTimeoutTime);
TON(&StandbyTimer);

if(StandbyTimer.Q){
(gAdhesiveCtrlInterface.Commands.MelterStandbyOn=1);
}


if(gAdhesiveCtrlInterface.Commands.MelterStandbyOff){
(gAdhesiveCtrlInterface.Commands.MelterStandbyOff=1);
(gAdhesiveCtrlInterface.Commands.MelterStandbyOn=0);
}

if((gAdhesiveCtrlInterface.Status.NordsonInStandby&gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP)){
(gHMI.StatusDatapoints.NordsonStandbyOffSDP=0);
}else{
(gHMI.StatusDatapoints.NordsonStandbyOffSDP=3);
}


if(gAdhesiveCtrlInterface.Parameters.NordsonComms.ByPassFeedback){
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount=0);
}


switch(state){

case 0:{
(FeedbackCycleTimer.IN=(gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP&(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ByPassFeedback==(unsigned long)(unsigned char)0))));

if((((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP==(unsigned long)(unsigned char)0))){
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount=0);
}

if(gAdhesiveCtrlInterface.Commands.WriteChannelTemp){
(gAdhesiveCtrlInterface.Commands.WriteChannelTemp=0);
(TempChannelToWrite=0);
(state=12);

}else if(FeedbackCycleTimer.Q){
(FeedbackCycleTimer.IN=0);
(state=5);
}

}break;case 5:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MelterCmd);
(NordsonTxPacket.Byte1_Command=READ_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=IDX_MELTER_STATUS);
(NordsonTxPacket.Byte3_Channel_Num=0);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(state=6);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 6:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){

(ReadMultipleRegisters.enable=0);

if((((unsigned long)(unsigned char)NordsonRxPacket.Byte2_Ack_Data_Index==(unsigned long)(unsigned char)NordsonTxPacket.Byte2_Data_Index))){

(gAdhesiveCtrlInterface.Parameters.NordsonComms.MelterStatus=NordsonRxPacket.Byte4_5_Read_Data_0);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.MelterIsOn=(((unsigned long)(unsigned short)gAdhesiveCtrlInterface.Parameters.NordsonComms.MelterStatus!=(unsigned long)(unsigned short)8)));

__AS__Action__DecodeStatus();



if(((((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.MelterIsOn==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((_1byte_bit_field_*)(&NordsonTxPacket.Byte0_MelterControl))->bit0==(unsigned long)(unsigned char)1)))){
(MelterCmd=0);
}else{

(MelterCmd=0);
if(gAdhesiveCtrlInterface.Commands.MelterOn){
(MelterCmd=(MelterCmd+MELTER_ON));
}

if((gAdhesiveCtrlInterface.Commands.PumpsOn&gAdhesiveCtrlInterface.Status.UnitReady)){
(MelterCmd=(MelterCmd+PUMPS_ON));
}

if(((((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Commands.MelterStandbyOn==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Status.NordsonInStandby==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((_1byte_bit_field_*)(&NordsonTxPacket.Byte0_MelterControl))->bit6==(unsigned long)(unsigned char)1))))){

}else if((((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Commands.MelterStandbyOn==(unsigned long)(unsigned char)1))){
(MelterCmd=(MelterCmd+STANDBY_ON));
}
}

(state=1);
}else{

}

}else{
(ReadMultipleRegisters.enable=0);
(MBError=ReadMultipleRegisters.status);
(state=999);
}

}break;case 1:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MelterCmd);
(NordsonTxPacket.Byte1_Command=READ_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=IDX_SET_TEMP);
(NordsonTxPacket.Byte3_Channel_Num=CHANNEL_SET_TEMP_START);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount=0);
(state=2);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 2:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(ReadMultipleRegisters.enable=0);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount=0);


if(((((unsigned long)(unsigned char)NordsonRxPacket.Byte2_Ack_Data_Index==(unsigned long)(unsigned char)NordsonTxPacket.Byte2_Data_Index))&(((unsigned long)(unsigned char)NordsonRxPacket.Byte3_Ack_Channel_Num==(unsigned long)(unsigned char)NordsonTxPacket.Byte3_Channel_Num)))){

__AS__Action__DecodeStatus();

(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual[0]=NordsonRxPacket.Byte4_5_Read_Data_0);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual[1]=NordsonRxPacket.Byte6_7_Read_Data_1);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual[2]=NordsonRxPacket.Byte8_9_Read_Data_2);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual[3]=NordsonRxPacket.Byte10_11_Read_Data_3);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual[4]=NordsonRxPacket.Byte12_13_Read_Data_4);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual[5]=NordsonRxPacket.Byte14_15_Read_Data_5);



if((((unsigned long)(unsigned char)FirstTimeCopySetTemps==(unsigned long)(unsigned char)0))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempRequested; unsigned char* zzRValue=(unsigned char*)gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempActual; for(zzIndex=0; zzIndex<12l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(FirstTimeCopySetTemps=1);
}

(state=3);
}else{

}
}else{
(ReadMultipleRegisters.enable=0);
(MBError=ReadMultipleRegisters.status);
(state=999);
}


}break;case 3:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MelterCmd);
(NordsonTxPacket.Byte1_Command=READ_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=IDX_ACT_TEMP);
(NordsonTxPacket.Byte3_Channel_Num=CHANNEL_ACT_TEMP_START);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(state=4);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 4:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(ReadMultipleRegisters.enable=0);


if(((((unsigned long)(unsigned char)NordsonRxPacket.Byte2_Ack_Data_Index==(unsigned long)(unsigned char)NordsonTxPacket.Byte2_Data_Index))&(((unsigned long)(unsigned char)NordsonRxPacket.Byte3_Ack_Channel_Num==(unsigned long)(unsigned char)NordsonTxPacket.Byte3_Channel_Num)))){

__AS__Action__DecodeStatus();

(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelActTemp[0]=NordsonRxPacket.Byte4_5_Read_Data_0);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelActTemp[1]=NordsonRxPacket.Byte6_7_Read_Data_1);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelActTemp[2]=NordsonRxPacket.Byte8_9_Read_Data_2);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelActTemp[3]=NordsonRxPacket.Byte10_11_Read_Data_3);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelActTemp[4]=NordsonRxPacket.Byte12_13_Read_Data_4);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelActTemp[5]=NordsonRxPacket.Byte14_15_Read_Data_5);






(state=14);
}else{

}

}else{
(ReadMultipleRegisters.enable=0);
(MBError=ReadMultipleRegisters.status);
(state=999);
}

}break;case 14:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MelterCmd);
(NordsonTxPacket.Byte1_Command=READ_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=IDX_ATS_ALARMS);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(state=15);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 15:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(ReadMultipleRegisters.enable=0);

if((((unsigned long)(unsigned char)NordsonRxPacket.Byte2_Ack_Data_Index==(unsigned long)(unsigned char)NordsonTxPacket.Byte2_Data_Index))){

__AS__Action__DecodeStatus();

(gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit=((_2byte_bit_field_*)(&NordsonRxPacket.Byte4_5_Read_Data_0))->bit0);
(gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit=((_2byte_bit_field_*)(&NordsonRxPacket.Byte4_5_Read_Data_0))->bit1);

(state=0);
}else{

}

}else{
(ReadMultipleRegisters.enable=0);
(MBError=ReadMultipleRegisters.status);
(state=999);
}

}break;case 12:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MelterCmd);
(NordsonTxPacket.Byte1_Command=WRITE_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=IDX_SET_TEMP);
(NordsonTxPacket.Byte3_Channel_Num=(TempChannelToWrite+1));
(NordsonTxPacket.Byte4_5_WriteData=gAdhesiveCtrlInterface.Parameters.NordsonComms.ChannelSetTempRequested[TempChannelToWrite]);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(state=13);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 13:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(ReadMultipleRegisters.enable=0);


if(((((unsigned long)(unsigned char)NordsonRxPacket.Byte2_Ack_Data_Index==(unsigned long)(unsigned char)NordsonTxPacket.Byte2_Data_Index))&(((unsigned long)(unsigned char)NordsonRxPacket.Byte3_Ack_Channel_Num==(unsigned long)(unsigned char)NordsonTxPacket.Byte3_Channel_Num)))){

__AS__Action__DecodeStatus();

if((((unsigned long)(unsigned char)TempChannelToWrite<(unsigned long)(unsigned char)NUM_NORDSON_TEMP_ZONES_M1))){
if((((unsigned long)(unsigned char)TempChannelToWrite==(unsigned long)(unsigned char)0))){
(TempChannelToWrite=2);
(state=12);
}else{
(TempChannelToWrite=(TempChannelToWrite+1));
(state=12);
}
}else{
(state=0);
}
}else{

}

}else{
(ReadMultipleRegisters.enable=0);
(MBError=ReadMultipleRegisters.status);
(state=999);
}

}break;case 7:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MelterCmd);
(NordsonTxPacket.Byte1_Command=READ_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=IDX_ADHESIVE_HOUR);
(NordsonTxPacket.Byte3_Channel_Num=CHANNEL_ADHESIVE_HOUR);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(state=4);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 8:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(ReadMultipleRegisters.enable=0);


if(((((unsigned long)(unsigned char)NordsonRxPacket.Byte2_Ack_Data_Index==(unsigned long)(unsigned char)NordsonTxPacket.Byte2_Data_Index))&(((unsigned long)(unsigned char)NordsonRxPacket.Byte3_Ack_Channel_Num==(unsigned long)(unsigned char)NordsonTxPacket.Byte3_Channel_Num)))){



(state=4);
}else{

}
}

}break;case 9:{

(WriteMultipleRegisters.enable=1);
(NordsonTxPacket.Byte0_MelterControl=MELTER_ON);
(NordsonTxPacket.Byte1_Command=READ_COMMAND);
(NordsonTxPacket.Byte2_Data_Index=testChannel);
(NordsonTxPacket.Byte3_Channel_Num=testIdx);

if(((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)WriteMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(WriteMultipleRegisters.enable=0);
(state=4);
}else{
(WriteMultipleRegisters.enable=0);
(MBError=WriteMultipleRegisters.status);
(state=999);
}

}break;case 10:{

(ReadMultipleRegisters.enable=1);

if(((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_ENABLE_FALSE))|(((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_FUB_BUSY)))){

}else if((((unsigned long)(unsigned short)ReadMultipleRegisters.status==(unsigned long)(unsigned short)ERR_OK))){
(ReadMultipleRegisters.enable=0);
(state=0);
}else{
(ReadMultipleRegisters.enable=0);
(MBError=ReadMultipleRegisters.status);
(state=999);
}

}break;case 999:{
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount=(gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount+1));
(state=0);

}break;}

if(((((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount>=(unsigned long)(unsigned char)10))&~Edge0000200000&1?((Edge0000200000=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount>=(unsigned long)(unsigned char)10))&1),1):((Edge0000200000=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount>=(unsigned long)(unsigned char)10))&1),0))){
MpAlarmXSet(&gAlarmXCore,ALARM_NORDSON_COMMS);
}else if((~(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount>=(unsigned long)(unsigned char)10))&Edge0000200001&1?((Edge0000200001=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount>=(unsigned long)(unsigned char)10))&1),1):((Edge0000200001=(((unsigned long)(unsigned char)gAdhesiveCtrlInterface.Parameters.NordsonComms.ConsecutiveErrorCount>=(unsigned long)(unsigned char)10))&1),0))){
MpAlarmXReset(&gAlarmXCore,ALARM_NORDSON_COMMS);
}

if((gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit&~Edge0000200002&1?((Edge0000200002=gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit&1),1):((Edge0000200002=gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit&1),0))){
MpAlarmXSet(&gAlarmXCore,ALARM_ATS_OVERLIMIT);
}else if((~gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit&Edge0000200003&1?((Edge0000200003=gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit&1),1):((Edge0000200003=gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit&1),0))){
MpAlarmXReset(&gAlarmXCore,ALARM_ATS_OVERLIMIT);
}

if((gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit&~Edge0000200004&1?((Edge0000200004=gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit&1),1):((Edge0000200004=gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit&1),0))){
MpAlarmXSet(&gAlarmXCore,ALARM_ATS_UNDERLIMIT);
}else if((~gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit&Edge0000200005&1?((Edge0000200005=gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit&1),1):((Edge0000200005=gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit&1),0))){
MpAlarmXReset(&gAlarmXCore,ALARM_ATS_UNDERLIMIT);
}

if((gAdhesiveCtrlInterface.Status.NordsonInStandby&~Edge0000200006&1?((Edge0000200006=gAdhesiveCtrlInterface.Status.NordsonInStandby&1),1):((Edge0000200006=gAdhesiveCtrlInterface.Status.NordsonInStandby&1),0))){
MpAlarmXSet(&gAlarmXCore,ALARM_NORDSON_STANDBY);
}else if((~gAdhesiveCtrlInterface.Status.NordsonInStandby&Edge0000200007&1?((Edge0000200007=gAdhesiveCtrlInterface.Status.NordsonInStandby&1),1):((Edge0000200007=gAdhesiveCtrlInterface.Status.NordsonInStandby&1),0))){
MpAlarmXReset(&gAlarmXCore,ALARM_NORDSON_STANDBY);
}


if((gAdhesiveCtrlInterface.Parameters.FeedbackIsModbusTCP&gAdhesiveCtrlInterface.Parameters.NordsonComms.ByPassFeedback)){
(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitReady=1);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitFaulted=0);
(gAdhesiveCtrlInterface.Status.ATS_AddOnOverLimit=0);
(gAdhesiveCtrlInterface.Status.ATS_AddOnUnderLimit=0);
}


(WriteMultipleRegisters.pStation=((unsigned long)(&mb_station)));
(WriteMultipleRegisters.startAddress=write_register_address);
(WriteMultipleRegisters.nrRegisters=num_registers_to_write);
(WriteMultipleRegisters.pData=((unsigned long)(&NordsonTxPacket)));
(WriteMultipleRegisters.dataSize=16);
mbWriteMultipleRegisters(&WriteMultipleRegisters);

(ReadMultipleRegisters.pStation=((unsigned long)(&mb_station)));
(ReadMultipleRegisters.startAddress=read_register_address);
(ReadMultipleRegisters.nrRegisters=num_registers_to_read);
(ReadMultipleRegisters.pData=((unsigned long)(&NordsonRxPacket)));
(ReadMultipleRegisters.dataSize=20);
mbReadHoldingRegisters(&ReadMultipleRegisters);

(FeedbackCycleTimer.PT=gAdhesiveCtrlInterface.Parameters.NordsonComms.FeedbackTime);
TON(&FeedbackCycleTimer);

}}
#line 520 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.nodebug"
#line 2 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/Action.st"
static void __AS__Action__DecodeStatus(void){
{
(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitReady=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit0);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.PumpStartUpProtectionOn=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit1);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.Alert=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit2);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.UnitFaulted=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit3);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.ShutDown=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit4);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.HeatUpPhaseActive=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit5);
(gAdhesiveCtrlInterface.Status.NordsonInStandby=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit6);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.CommFault=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit14);
(gAdhesiveCtrlInterface.Parameters.NordsonComms.CommFaultInDataValue=((_2byte_bit_field_*)(&NordsonRxPacket.Byte0_1_Status))->bit15);

}}
#line 521 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.nodebug"

void __AS__ImplInitMbApp_st(void){__BUR__ENTRY_INIT_FUNCT__();}

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
__asm__(".ascii \"iecfile \\\"Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FlexTest/MbApp.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FlexTest/MbApp.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/Actuators/NordsonComm/NordsonMBComm/MbApp.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/FlexTest/MbApp.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'NordsonRxPacket'\\n\"");
__asm__(".ascii \"plcdata_const 'NordsonTxPacket'\\n\"");
__asm__(".ascii \"plcdata_const 'ERR_OK'\\n\"");
__asm__(".ascii \"plcdata_const 'ERR_FUB_ENABLE_FALSE'\\n\"");
__asm__(".ascii \"plcdata_const 'ERR_FUB_BUSY'\\n\"");
__asm__(".ascii \"plcdata_const 'HIDE'\\n\"");
__asm__(".ascii \"plcdata_const 'LOCK'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'UNHIDE'\\n\"");
__asm__(".ascii \"plcdata_const 'UNLOCK'\\n\"");
__asm__(".ascii \"plcdata_const 'PUMPS_OFF'\\n\"");
__asm__(".ascii \"plcdata_const 'PUMPS_ON'\\n\"");
__asm__(".ascii \"plcdata_const 'MELTER_OFF'\\n\"");
__asm__(".ascii \"plcdata_const 'MELTER_ON'\\n\"");
__asm__(".ascii \"plcdata_const 'STANDBY_ON'\\n\"");
__asm__(".ascii \"plcdata_const 'WRITE_COMMAND'\\n\"");
__asm__(".ascii \"plcdata_const 'READ_COMMAND'\\n\"");
__asm__(".ascii \"plcdata_const 'IDX_SET_TEMP'\\n\"");
__asm__(".ascii \"plcdata_const 'CHANNEL_SET_TEMP_START'\\n\"");
__asm__(".ascii \"plcdata_const 'IDX_MELTER_STATUS'\\n\"");
__asm__(".ascii \"plcdata_const 'IDX_ATS_ALARMS'\\n\"");
__asm__(".ascii \"plcdata_const 'IDX_ACT_TEMP'\\n\"");
__asm__(".ascii \"plcdata_const 'CHANNEL_ACT_TEMP_START'\\n\"");
__asm__(".ascii \"plcdata_const 'IDX_ADHESIVE_HOUR'\\n\"");
__asm__(".ascii \"plcdata_const 'CHANNEL_ADHESIVE_HOUR'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_NORDSON_COMMS'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ATS_UNDERLIMIT'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_ATS_OVERLIMIT'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_NORDSON_STANDBY'\\n\"");
__asm__(".previous");
