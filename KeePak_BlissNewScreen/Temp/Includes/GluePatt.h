/* Automation Studio generated header file */
/* Do not edit ! */
/* GluePatt  */

#ifndef _GLUEPATT_
#define _GLUEPATT_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "Types.h"
#endif
#ifdef _SG4
		#include "Types.h"
#endif
#ifdef _SGC
		#include "Types.h"
#endif


/* Constants */
#ifdef _REPLACE_CONST
 #define MAX_NUM_BEADS 64U
 #define MAX_NUM_BEADS_M1 63U
#else
 _GLOBAL_CONST unsigned char MAX_NUM_BEADS;
 _GLOBAL_CONST unsigned char MAX_NUM_BEADS_M1;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct Switches
{	float FirstOnPosition[64];
	float LastOnPosition[64];
} Switches;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC plcbit GluePatternControl(struct AdhesivePattern_typ* ChannelPattern, float PositionInCycle, float StitchPercentage, float BeadLengths[4], float OnDelayCompensation, float OffDelayCompensation, struct Switches (*Switches)[4], signed short ChannelModulationCtrl);
_BUR_PUBLIC plcbit SetPatternSDPs(unsigned char NumGlueChannels, struct ColorMapDatapoints_typ** FieldColormaps, struct StatusDatapoints_typ** FieldSDPs);


__asm__(".section \".plc\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Libraries/Constants/Constants.var\\\" scope \\\"global\\\"\\n\"");

__asm__(".previous");

#ifdef __cplusplus
};
#endif
#endif /* _GLUEPATT_ */

