/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1748096290_25_
#define _BUR_1748096290_25_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit ResetUserLevel;
_BUR_LOCAL plcbit ResetTimeoutTimer;
_BUR_LOCAL unsigned char OldPage;
_BUR_LOCAL struct TON LogoutTimer;
_BUR_LOCAL plcbit SettingsLoaded;
_BUR_LOCAL plcbit status;
_BUR_LOCAL struct TON FlashON;
_BUR_LOCAL struct TON FlashOFF;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/HMI/HMIControl/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1748096290_25_ */

