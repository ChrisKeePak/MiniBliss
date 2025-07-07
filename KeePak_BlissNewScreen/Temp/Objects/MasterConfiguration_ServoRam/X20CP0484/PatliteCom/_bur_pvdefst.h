#ifndef __AS__TYPE_CommStateEnum
#define __AS__TYPE_CommStateEnum
typedef enum CommStateEnum
{	PATLITE_STATE_STANDBY = 0,
	PATLITE_STATE_WRITE_REGISTER = 1,
	PATLITE_STATE_ERROR = 2,
} CommStateEnum;
#endif

#ifndef __AS__TYPE_GroupEnum
#define __AS__TYPE_GroupEnum
typedef enum GroupEnum
{	GROUP_1_POWER_ON = 0,
	GROUP_2_HEATING = 1,
	GROUP_3_HEAT_AIR_OK = 2,
	GROUP_4_RUN = 3,
	GROUP_5_SAFETY = 4,
} GroupEnum;
#endif

struct mbWriteSingleRegister
{	unsigned long pStation;
	unsigned short startAddress;
	unsigned short value;
	unsigned short status;
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	plcbit enable;
};
_BUR_PUBLIC void mbWriteSingleRegister(struct mbWriteSingleRegister* inst);
_BUR_LOCAL unsigned short GROUP_OFFSET;
_BUR_LOCAL CommStateEnum CommState;
_BUR_LOCAL GroupEnum NextLightGroup;
_BUR_LOCAL GroupEnum CurrentLightGroup;
_BUR_LOCAL struct mbWriteSingleRegister mbWriteSingleRegister_0;
_BUR_LOCAL unsigned short GROUP_REG_ADR;
_BUR_LOCAL plcstring mb_station[21];
_BUR_LOCAL unsigned short ErrorCount;
_BUR_LOCAL unsigned short ERROR_COUNT_THRESH;
_BUR_LOCAL plcbit CommError;
