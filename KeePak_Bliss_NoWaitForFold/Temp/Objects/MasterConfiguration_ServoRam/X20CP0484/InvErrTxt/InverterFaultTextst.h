#ifndef __AS__TYPE_
#define __AS__TYPE_
static unsigned long __AS__STRCPY(unsigned long pDest, unsigned long pSrc);
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

#ifndef __AS__TYPE_ACPInverterFaultText_typ
#define __AS__TYPE_ACPInverterFaultText_typ
typedef struct ACPInverterFaultText_typ
{	signed short FaultNumber;
	plcstring FaultDescription[65];
} ACPInverterFaultText_typ;
#endif

#ifndef __AS__TYPE_EACPInverterType_enum
#define __AS__TYPE_EACPInverterType_enum
typedef enum EACPInverterType_enum
{	EACPInverter_S44 = 0,
	EACPInverter_X64 = 1,
	EACPInverter_P84 = 2,
	EACPInverter_P74 = 3,
} EACPInverterType_enum;
#endif

#ifndef __AS__TYPE_InvErrTxtStatus_enum
#define __AS__TYPE_InvErrTxtStatus_enum
typedef enum InvErrTxtStatus_enum
{	INACTIVE = 0,
	INITIALIZING_ERROR_TEXT = 1,
	IDLE = 2,
	BUSY = 3,
	ERROR = 4,
} InvErrTxtStatus_enum;
#endif

struct InverterFaultText
{	EACPInverterType_enum DriveType;
	unsigned long FaultText;
	signed short(* FaultNumber);
	InvErrTxtStatus_enum Status;
	signed short LastFault;
	struct ACPInverterFaultText_typ S44FaultTable[36];
	struct ACPInverterFaultText_typ X64FaultTable[32];
	struct ACPInverterFaultText_typ P84FaultTable[75];
	struct ACPInverterFaultText_typ P74FaultTable[67];
	signed short PreviousFault;
	unsigned char i;
	plcbit Execute;
	plcbit isInitialized;
};
_BUR_PUBLIC void InverterFaultText(struct InverterFaultText* inst);
_BUR_PUBLIC unsigned long strcpy(unsigned long pDest, unsigned long pSrc);
