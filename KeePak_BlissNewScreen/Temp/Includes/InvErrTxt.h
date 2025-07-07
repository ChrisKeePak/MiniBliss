/* Automation Studio generated header file */
/* Do not edit ! */
/* InvErrTxt 1.00.1 */

#ifndef _INVERRTXT_
#define _INVERRTXT_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _InvErrTxt_VERSION
#define _InvErrTxt_VERSION 1.00.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "asstring.h"
#endif
#ifdef _SG4
		#include "asstring.h"
#endif
#ifdef _SGC
		#include "asstring.h"
#endif


/* Datatypes and datatypes of function blocks */
typedef enum EACPInverterType_enum
{	EACPInverter_S44 = 0,
	EACPInverter_X64 = 1,
	EACPInverter_P84 = 2,
	EACPInverter_P74 = 3
} EACPInverterType_enum;

typedef enum InvErrTxtStatus_enum
{	INACTIVE = 0,
	INITIALIZING_ERROR_TEXT = 1,
	IDLE = 2,
	BUSY = 3,
	ERROR = 4
} InvErrTxtStatus_enum;

typedef struct ACPInverterFaultText_typ
{	signed short FaultNumber;
	plcstring FaultDescription[65];
} ACPInverterFaultText_typ;

typedef struct InverterFaultText
{
	/* VAR_INPUT (analog) */
	enum EACPInverterType_enum DriveType;
	unsigned long FaultText;
	signed short* FaultNumber;
	/* VAR_OUTPUT (analog) */
	enum InvErrTxtStatus_enum Status;
	signed short LastFault;
	/* VAR (analog) */
	struct ACPInverterFaultText_typ S44FaultTable[36];
	struct ACPInverterFaultText_typ X64FaultTable[32];
	struct ACPInverterFaultText_typ P84FaultTable[75];
	struct ACPInverterFaultText_typ P74FaultTable[67];
	signed short PreviousFault;
	unsigned char i;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR (digital) */
	plcbit isInitialized;
} InverterFaultText_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void InverterFaultText(struct InverterFaultText* inst);


#ifdef __cplusplus
};
#endif
#endif /* _INVERRTXT_ */

