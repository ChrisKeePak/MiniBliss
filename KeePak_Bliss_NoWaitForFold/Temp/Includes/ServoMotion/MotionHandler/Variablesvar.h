/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730232408_46_
#define _BUR_1730232408_46_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct MC_BR_SetHardwareInputs SetHardwareInputs;
_BUR_LOCAL float OldTorqueLimitRam;
_BUR_LOCAL float OldTorqueLimitFeed;
_BUR_LOCAL float OldTorqueLimitRightHopper;
_BUR_LOCAL float OldTorqueLimitLeftHopper;
_BUR_LOCAL float OldTorqueLimitBodyHopper;
_BUR_LOCAL struct AxisHandler ServoRamHandler;
_BUR_LOCAL struct AxisHandler RightHopperHandler;
_BUR_LOCAL struct AxisHandler LeftHopperHandler;
_BUR_LOCAL struct AxisHandler BodyHopperHandler;
_BUR_LOCAL struct AxisHandler ServoPnPHandler;
_BUR_LOCAL struct AxisHandler ServoFeedHandler;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/MotionHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/AxisFUBs.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730232408_46_ */

