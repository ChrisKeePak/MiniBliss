#ifndef __AS__TYPE_ServoRamState_enum
#define __AS__TYPE_ServoRamState_enum
typedef enum ServoRamState_enum
{	SERVORAM_WAIT_FOR_HOME = 0,
	SERVORAM_WAIT_FOR_AUTO_HOME = 5,
	SERVORAM_IDLE = 10,
	SERVORAM_MOVE_TO_START = 20,
	SERVORAM_PICK_SIDES = 30,
	SERVORAM_CHECK_FOR_SIDES = 40,
	SERVORAM_WAITING_ON_BOX = 80,
	SERVORAM_TRIGGER_FOLD = 50,
	SERVORAM_RELEASE_FOLD = 60,
	SERVORAM_MOVE_TO_END = 90,
	SERVORAM_DWELL_AT_END = 100,
	SERVORAM_MOVE_TO_START_EX = 120,
	SERVORAM_PICK_SIDES_EX = 130,
	SERVORAM_CHECK_FOR_SIDES_EX = 140,
	SERVORAM_MOVE_TO_MIDDLE_EX = 150,
	SERVORAM_FOLD_SIDES_EX = 160,
	SERVORAM_CHECK_FOR_FOLDS_EX = 170,
	SERVORAM_WAITING_ON_BOX_EX = 180,
	SERVORAM_MOVE_TO_END_EX = 190,
	SERVORAM_DWELL_AT_END_EX = 191,
	SERVORAM_ERROR = 999,
} ServoRamState_enum;
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
_BUR_LOCAL struct TON EndDwellTimer;
_BUR_LOCAL ServoRamState_enum state;
_BUR_LOCAL struct TON SidePickTimer;
_BUR_LOCAL struct TON SidePickRetractTimer;
_BUR_LOCAL struct TON SideFoldTimer;
_BUR_LOCAL struct TON SideFoldRetractTimer;
_BUR_LOCAL unsigned char SideFailureCount;
_BUR_LOCAL unsigned char FoldFailureCount;
_BUR_LOCAL struct TON RamDelayTimer;
_BUR_LOCAL plcbit ResetTimeoutAlarm;
_BUR_LOCAL struct TON ResetTimeoutTimer;
_BUR_LOCAL plcbit ForceSafetyReset;
_BUR_LOCAL plcbit ExerciseRam;
