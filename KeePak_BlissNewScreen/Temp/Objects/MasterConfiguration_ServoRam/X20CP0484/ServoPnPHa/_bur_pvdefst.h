#ifndef __AS__TYPE_ServoPnPState_enum
#define __AS__TYPE_ServoPnPState_enum
typedef enum ServoPnPState_enum
{	SERVOPNP_WAIT_FOR_HOME = 0,
	SERVOPNP_WAIT_FOR_AUTO_HOME = 5,
	SERVOPNP_IDLE = 10,
	SERVOPNP_MOVE_TO_HOPPER = 20,
	SERVOPNP_DWELL_AT_HOPPER = 30,
	SERVOPNP_CHECK_FOR_BOX = 40,
	SERVOPNP_MOVE_TO_HORIZONTAL = 50,
	SERVOPNP_REMOVE_BOX = 60,
	SERVOPNP_ABORT_AND_RETURN = 70,
	SERVOPNP_ERROR = 999,
} ServoPnPState_enum;
#endif

struct F_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void F_TRIG(struct F_TRIG* inst);
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
_BUR_LOCAL unsigned char FailureCount;
_BUR_LOCAL ServoPnPState_enum state;
_BUR_LOCAL struct F_TRIG FTrig_AdhesivePhotoeye;
_BUR_LOCAL struct TON BodyKickerTimer;
_BUR_LOCAL struct TON BodyKickerRetractTimer;
_BUR_LOCAL plcbit SingleCyclePnP;
