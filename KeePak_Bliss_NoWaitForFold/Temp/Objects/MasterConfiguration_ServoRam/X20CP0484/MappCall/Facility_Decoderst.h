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

#ifndef __AS__TYPE_MpComFacilitiesEnum
#define __AS__TYPE_MpComFacilitiesEnum
typedef enum MpComFacilitiesEnum
{	mpCOM_FAC_UNDEFINED = -1,
	mpCOM_FAC_ARCORE = 0,
	mpCOM_FAC_SAFETY1 = 1,
	mpCOM_FAC_SAFETY2 = 2,
	mpCOM_FAC_GMC1 = 96,
	mpCOM_FAC_GMC2 = 97,
	mpCOM_FAC_GMCAXIS = 98,
	mpCOM_FAC_GMCAXESGROUP = 99,
	mpCOM_FAC_GMCARNCGROUP = 103,
	mpCOM_FAC_TRF = 105,
	mpCOM_FAC_MAPP_INTERNAL = 144,
	mpCOM_FAC_MAPP_CORE = 145,
	mpCOM_FAC_MAPP_INFRASTRUCTURE = 146,
	mpCOM_FAC_MAPP_MECHATRONIC = 147,
	mpCOM_FAC_MAPP_INDUSTRY = 148,
} MpComFacilitiesEnum;
#endif

_BUR_PUBLIC unsigned long Facility_Decoder(plcbit EN, MpComFacilitiesEnum IN);
