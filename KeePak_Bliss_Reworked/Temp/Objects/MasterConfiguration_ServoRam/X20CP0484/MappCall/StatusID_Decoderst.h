#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_MpAxisErrorEnum
#define __AS__TYPE_MpAxisErrorEnum
typedef enum MpAxisErrorEnum
{	mpAXIS_NO_ERROR = 0,
	mpAXIS_ERR_ACTIVATION = -1064239103,
	mpAXIS_ERR_MPLINK_NULL = -1064239102,
	mpAXIS_ERR_MPLINK_INVALID = -1064239101,
	mpAXIS_ERR_MPLINK_CHANGED = -1064239100,
	mpAXIS_ERR_MPLINK_CORRUPT = -1064239099,
	mpAXIS_ERR_MPLINK_IN_USE = -1064239098,
	mpAXIS_ERR_PAR_NULL = -1064239097,
	mpAXIS_ERR_CONFIG_NULL = -1064239096,
	mpAXIS_ERR_CONFIG_NO_PV = -1064239095,
	mpAXIS_ERR_CONFIG_LOAD = -1064239094,
	mpAXIS_WRN_CONFIG_LOAD = -2137980917,
	mpAXIS_ERR_CONFIG_SAVE = -1064239092,
	mpAXIS_ERR_CONFIG_INVALID = -1064239091,
	mpAXIS_ERR_AXIS_HANDLE_NULL = -1064074752,
	mpAXIS_WRN_ERROR_TABLE_MISSING = -2137816575,
	mpAXIS_WRN_CFG_WAIT_ERROR_RESET = -2137816574,
	mpAXIS_WRN_CFG_WAIT_POWER_OFF = -2137816573,
	mpAXIS_WRN_CFG_WAIT_STANDSTILL = -2137816572,
	mpAXIS_ERR_PLC_OPEN = -1064074747,
	mpAXIS_WRN_PLC_OPEN = -2137816570,
	mpAXIS_WRN_READ_TORQUE_OFF = -2137816569,
	mpAXIS_ERR_MAX_TORQUE_REACHED = -1064074744,
	mpAXIS_ERR_SLAVE_NOT_FOUND = -1064074732,
	mpAXIS_ERR_MASTER_NOT_FOUND = -1064074731,
	mpAXIS_ERR_WRONG_DENOMINATOR = -1064074730,
	mpAXIS_ERR_WRONG_NUMERATOR = -1064074729,
	mpAXIS_ERR_NO_CAM_NAME = -1064074728,
	mpAXIS_WRN_SLAVE_NOT_READY = -2137816551,
	mpAXIS_ERR_CHECK_SLAVE_STATUS = -1064074726,
	mpAXIS_ERR_CMD_WRONG_AXISTYPE = -1064074725,
	mpAXIS_WRN_PARAMETER_LIMITED = -2137816548,
	mpAXIS_WRN_MULTIPLE_COMMAND = -2137816547,
	mpAXIS_ERR_CAM_PARAMETER = -1064074722,
	mpAXIS_ERR_RECOVERY_NOT_ALLOWED = -1064074721,
} MpAxisErrorEnum;
#endif

_BUR_PUBLIC unsigned char StatusID_Decoder(MpAxisErrorEnum IN);
