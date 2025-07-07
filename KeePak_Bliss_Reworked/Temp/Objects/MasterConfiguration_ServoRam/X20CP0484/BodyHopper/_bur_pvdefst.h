#ifndef __AS__TYPE_ServoHopperState_enum
#define __AS__TYPE_ServoHopperState_enum
typedef enum ServoHopperState_enum
{	SERVOHOPPER_WAIT_FOR_HOME = 0,
	SERVOHOPPER_IDLE = 5,
	SERVOHOPPER_MOVE_VELOCITY = 10,
	SERVOHOPPER_COOLDOWN = 15,
	SERVOHOPPER_ERROR = 999,
	SERVOHOPPER_MOVE_TO_END = 20,
	SERVOHOPPER_DWELL_AT_END = 40,
	SERVOHOPPER_MOVE_TO_START = 60,
	SERVOHOPPER_DWELL_AT_START = 80,
} ServoHopperState_enum;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_LOCAL struct TON StartDwellTimer;
_BUR_LOCAL struct TON AtTorqueTimer;
_BUR_LOCAL ServoHopperState_enum state;
_BUR_LOCAL_RETAIN unsigned long CycleCount;
_BUR_LOCAL plcbit ResetTimeoutAlarm;
_BUR_LOCAL struct TON ResetTimeoutTimer;
