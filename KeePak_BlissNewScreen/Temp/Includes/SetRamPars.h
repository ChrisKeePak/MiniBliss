/* Automation Studio generated header file */
/* Do not edit ! */
/* SetRamPars  */

#ifndef _SETRAMPARS_
#define _SETRAMPARS_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "MpAxis.h"
		#include "Types.h"
#endif
#ifdef _SG4
		#include "MpAxis.h"
		#include "Types.h"
#endif
#ifdef _SGC
		#include "MpAxis.h"
		#include "Types.h"
#endif





/* Prototyping of functions and function blocks */
_BUR_PUBLIC unsigned char SetRamPars(struct RamCtrlInterface_Parameters_typ* InterfacePars, struct MpAxisBasicParType** MotionPars);
_BUR_PUBLIC float ComputeMoveDistance(float TargetPos, float CurrentPos);
_BUR_PUBLIC float ComputeDistanceMoved(float CurentPos, float OldPos);


#ifdef __cplusplus
};
#endif
#endif /* _SETRAMPARS_ */

