/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1730142839_22_
#define _BUR_1730142839_22_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit TestAlarmActive;
_BUR_LOCAL plcbit TestAlarm2Active;
_BUR_LOCAL plcbit TestAlarm;
_BUR_LOCAL plcbit TestAlarm2;
_BUR_LOCAL signed long AlarmStatus;
_BUR_LOCAL struct MpAlarmXHistoryUISetupType AlarmXHistoryUISetup;
_BUR_LOCAL struct MpAlarmXHistoryUIConnectType AlarmXHistoryUIConnect;
_BUR_LOCAL struct MpAlarmXHistoryUI MpAlarmXHistoryUI_0;
_BUR_LOCAL struct MpAlarmXHistory MpAlarmXHistory_0;
_BUR_LOCAL unsigned short i;
_BUR_LOCAL plcbit status;
_BUR_LOCAL struct AlarmListAdapter_typ AlarmHistoryListAdapter;
_BUR_LOCAL struct AlarmListAdapter_typ AlarmListAdapter;
_BUR_LOCAL struct MpAlarmXListUIConnectType AlarmUIConnect;
_BUR_LOCAL struct MpAlarmXListUISetupType AlarmUISetup;
_BUR_LOCAL struct MpAlarmXListUI MpAlarmXListUI_0;
_BUR_LOCAL struct MpAlarmXCore MpAlarmXCore_0;
_BUR_LOCAL plcstring IOAlarmText[101];





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/AlarmControl/AlarmHandling/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1730142839_22_ */

