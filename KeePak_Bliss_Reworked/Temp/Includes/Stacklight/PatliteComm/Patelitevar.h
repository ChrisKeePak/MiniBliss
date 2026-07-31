/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1753370115_27_
#define _BUR_1753370115_27_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
 #define ERROR_COUNT_THRESH 10U
 #define GROUP_REG_ADR 6U
 #define GROUP_OFFSET 257U
#else
 _LOCAL_CONST unsigned short ERROR_COUNT_THRESH;
 _LOCAL_CONST unsigned short GROUP_REG_ADR;
 _LOCAL_CONST unsigned short GROUP_OFFSET;
#endif


/* Variables */
_BUR_LOCAL plcbit CommError;
_BUR_LOCAL unsigned short ErrorCount;
_BUR_LOCAL plcstring mb_station[21];
_BUR_LOCAL struct mbWriteSingleRegister mbWriteSingleRegister_0;
_BUR_LOCAL enum GroupEnum CurrentLightGroup;
_BUR_LOCAL enum GroupEnum NextLightGroup;
_BUR_LOCAL enum CommStateEnum CommState;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Stacklight/PatliteComm/Patelite.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1753370115_27_ */

