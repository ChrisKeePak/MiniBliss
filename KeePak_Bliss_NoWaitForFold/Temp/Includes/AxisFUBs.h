/* Automation Studio generated header file */
/* Do not edit ! */
/* AxisFUBs  */

#ifndef _AXISFUBS_
#define _AXISFUBS_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "standard.h"
		#include "Types.h"
#endif
#ifdef _SG4
		#include "standard.h"
		#include "Types.h"
#endif
#ifdef _SGC
		#include "standard.h"
		#include "Types.h"
#endif


/* Datatypes and datatypes of function blocks */
typedef struct AxisHandler
{
	/* VAR_INPUT (analog) */
	plcbit* FirstHomeExecuted;
	struct Axis_Interface_typ* pInterface;
	struct MpAxisHomingType* pHomingParameters;
	/* VAR (analog) */
	AxisStates_enum state;
	AxisInitStates_enum axisInitState;
	struct TON DriveReadyTimeout;
	struct MC_SetOverride SetOverride;
	/* VAR_INPUT (digital) */
	plcbit AlarmActive;
	plcbit IsSimulated;
} AxisHandler_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void AxisHandler(struct AxisHandler* inst);


#ifdef __cplusplus
};
#endif
#endif /* _AXISFUBS_ */

