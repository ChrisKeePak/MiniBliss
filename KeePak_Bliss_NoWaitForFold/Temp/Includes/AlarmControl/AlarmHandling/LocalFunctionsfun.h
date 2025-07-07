/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730232408_23_
#define _BUR_1730232408_23_

#include <bur/plctypes.h>




/* Prototyping of functions and function blocks */
plcbit AlarmInfoAdapter(struct AlarmListAdapter_typ** pAlarmListAdapter, struct MpAlarmXListUIAlarmListType* AlarmList, unsigned long NumPendingAlarms);
plcbit CheckIOModules(plcbit ModuleOKs[100], struct MpComIdentType* AlarmLink, unsigned long pAlarmMsg, plcbit NumaticsPresent);


__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/AlarmControl/AlarmHandling/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */
#ifdef _ALARMHANDLING_EXPORT
	__asm__(".ascii \"plcexport \\\"AlarmInfoAdapter\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"CheckIOModules\\\" FUN\\n\"");
#endif

__asm__(".previous");


#endif /* _BUR_1730232408_23_ */

