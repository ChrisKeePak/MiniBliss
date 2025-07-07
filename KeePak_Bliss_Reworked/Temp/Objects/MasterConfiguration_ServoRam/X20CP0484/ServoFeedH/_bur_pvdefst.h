#ifndef __AS__TYPE_ServoFeedState_enum
#define __AS__TYPE_ServoFeedState_enum
typedef enum ServoFeedState_enum
{	SERVOFEED_WAIT_FOR_HOME = 0,
	SERVOFEED_IDLE = 10,
	SERVOFEED_MOVE_VELOCITY = 20,
	SERVOFEED_ERROR = 999,
} ServoFeedState_enum;
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
_BUR_LOCAL plcbit HopperLowStop;
_BUR_LOCAL ServoFeedState_enum state;
_BUR_LOCAL struct TON FeedStopTimer;
_BUR_LOCAL_RETAIN unsigned long CycleCount;
