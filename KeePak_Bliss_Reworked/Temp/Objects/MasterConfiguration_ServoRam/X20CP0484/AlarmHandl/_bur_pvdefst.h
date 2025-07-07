#ifndef __AS__TYPE_MpComSeveritiesEnum
#define __AS__TYPE_MpComSeveritiesEnum
typedef enum MpComSeveritiesEnum
{	mpCOM_SEV_SUCCESS = 0,
	mpCOM_SEV_INFORMATIONAL = 1,
	mpCOM_SEV_WARNING = 2,
	mpCOM_SEV_ERROR = 3,
} MpComSeveritiesEnum;
#endif

#ifndef __AS__TYPE_MpComIdentType
#define __AS__TYPE_MpComIdentType
typedef struct MpComIdentType
{	unsigned long Internal[2];
} MpComIdentType;
#endif

#ifndef __AS__TYPE_MpComInternalDataType
#define __AS__TYPE_MpComInternalDataType
typedef struct MpComInternalDataType
{	unsigned long pObject;
	unsigned long State;
} MpComInternalDataType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIStatusEnum
#define __AS__TYPE_MpAlarmXListUIStatusEnum
typedef enum MpAlarmXListUIStatusEnum
{	mpALARMX_LIST_UI_STATUS_IDLE = 0,
	mpALARMX_LIST_UI_STATUS_ERROR = 99,
} MpAlarmXListUIStatusEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXStateEnum
#define __AS__TYPE_MpAlarmXStateEnum
typedef enum MpAlarmXStateEnum
{	mpALARMX_STATE_NONE = 0,
	mpALARMX_STATE_ACTIVE = 1,
	mpALARMX_STATE_INACTIVE = 2,
	mpALARMX_STATE_ACKNOWLEDGED = 3,
	mpALARMX_STATE_UNACKNOWLEDGED = 4,
} MpAlarmXStateEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIStatusEnum
#define __AS__TYPE_MpAlarmXHistoryUIStatusEnum
typedef enum MpAlarmXHistoryUIStatusEnum
{	mpALARMX_HISTORY_UI_STATUS_IDLE = 0,
	mpALARMX_HISTORY_UI_STATUS_ERROR = 99,
} MpAlarmXHistoryUIStatusEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXErrorEnum
#define __AS__TYPE_MpAlarmXErrorEnum
typedef enum MpAlarmXErrorEnum
{	mpALARMX_NO_ERROR = 0,
	mpALARMX_ERR_ACTIVATION = -1064239103,
	mpALARMX_ERR_MPLINK_NULL = -1064239102,
	mpALARMX_ERR_MPLINK_INVALID = -1064239101,
	mpALARMX_ERR_MPLINK_CHANGED = -1064239100,
	mpALARMX_ERR_MPLINK_CORRUPT = -1064239099,
	mpALARMX_ERR_MPLINK_IN_USE = -1064239098,
	mpALARMX_ERR_CONFIG_NULL = -1064239096,
	mpALARMX_ERR_CONFIG_INVALID = -1064239091,
	mpALARMX_ERR_NAME_NULL = -1064116224,
	mpALARMX_ERR_NAME_EMPTY = -1064116223,
	mpALARMX_WRN_MISSING_UICONNECT = -2137858045,
	mpALARMX_ERR_ALARM_NOT_ACTIVE = -1064116220,
	mpALARMX_ERR_ALARM_NOT_SELECTED = -1064116219,
	mpALARMX_ERR_ACK_NOT_ALLOWED = -1064116218,
	mpALARMX_ERR_INVALID_FILE_DEV = -1064116217,
	mpALARMX_INF_WAIT_CORE_FB = 1083367432,
	mpALARMX_ERR_CORE_INST_EXISTS = -1064116215,
	mpALARMX_ERR_MEMORY_INIT = -1064116214,
	mpALARMX_ERR_WRITE_EXPORT_FILE = -1064116213,
	mpALARMX_ERR_NAME_NOT_FOUND = -1064116212,
} MpAlarmXErrorEnum;
#endif

#ifndef __AS__TYPE_MpAlarmXStatusIDType
#define __AS__TYPE_MpAlarmXStatusIDType
typedef struct MpAlarmXStatusIDType
{	MpAlarmXErrorEnum ID;
	MpComSeveritiesEnum Severity;
	unsigned short Code;
} MpAlarmXStatusIDType;
#endif

#ifndef __AS__TYPE_MpAlarmXDiagType
#define __AS__TYPE_MpAlarmXDiagType
typedef struct MpAlarmXDiagType
{	MpAlarmXStatusIDType StatusID;
} MpAlarmXDiagType;
#endif

#ifndef __AS__TYPE_MpAlarmXInfoType
#define __AS__TYPE_MpAlarmXInfoType
typedef struct MpAlarmXInfoType
{	MpAlarmXDiagType Diag;
} MpAlarmXInfoType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIBacktraceType
#define __AS__TYPE_MpAlarmXListUIBacktraceType
typedef struct MpAlarmXListUIBacktraceType
{	unsigned long RecordID[5];
	plcstring LogbookName[5][101];
	signed long EventID[5];
	plcstring Description[5][256];
} MpAlarmXListUIBacktraceType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIAlarmListType
#define __AS__TYPE_MpAlarmXListUIAlarmListType
typedef struct MpAlarmXListUIAlarmListType
{	unsigned long Severity[50];
	unsigned long Code[50];
	plcwstring Message[50][256];
	plcwstring AdditionalInformation1[50][256];
	plcwstring AdditionalInformation2[50][256];
	unsigned long InstanceID[50];
	plcstring Scope[50][256];
	plcstring Name[50][256];
	plcbit StateActive[50];
	plcbit StateAcknowledged[50];
	plcstring Timestamp[50][51];
	unsigned short SelectedIndex;
	unsigned short MaxSelection;
	plcbit PageUp;
	plcbit PageDown;
	plcbit StepUp;
	plcbit StepDown;
	float RangeStart;
	float RangeEnd;
} MpAlarmXListUIAlarmListType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIDetailsType
#define __AS__TYPE_MpAlarmXListUIDetailsType
typedef struct MpAlarmXListUIDetailsType
{	unsigned long Severity;
	unsigned long Code;
	plcwstring Message[256];
	plcwstring AdditionalInformation1[256];
	plcwstring AdditionalInformation2[256];
	unsigned long InstanceID;
	plcstring Scope[256];
	plcstring Name[256];
	plcbit StateActive;
	plcbit StateAcknowledged;
	plcstring Timestamp[51];
	MpAlarmXListUIBacktraceType Backtrace;
} MpAlarmXListUIDetailsType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUIConnectType
#define __AS__TYPE_MpAlarmXListUIConnectType
typedef struct MpAlarmXListUIConnectType
{	MpAlarmXListUIStatusEnum Status;
	MpAlarmXListUIAlarmListType AlarmList;
	plcbit Acknowledge;
	plcbit AcknowledgeAll;
	MpAlarmXListUIDetailsType Details;
	plcstring Language[21];
	unsigned long AcknowledgeID;
} MpAlarmXListUIConnectType;
#endif

#ifndef __AS__TYPE_MpAlarmXListUISetupType
#define __AS__TYPE_MpAlarmXListUISetupType
typedef struct MpAlarmXListUISetupType
{	unsigned short AlarmListSize;
	unsigned char AlarmListScrollWindow;
	plcstring TimeStampPattern[51];
} MpAlarmXListUISetupType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIAlarmListType
#define __AS__TYPE_MpAlarmXHistoryUIAlarmListType
typedef struct MpAlarmXHistoryUIAlarmListType
{	unsigned long Severity[50];
	unsigned long Code[50];
	plcwstring Message[50][256];
	plcwstring AdditionalInformation1[50][256];
	plcwstring AdditionalInformation2[50][256];
	plcstring Scope[50][256];
	plcstring Name[50][256];
	MpAlarmXStateEnum OldState[50];
	MpAlarmXStateEnum NewState[50];
	plcstring Timestamp[50][51];
	unsigned short SelectedIndex;
	unsigned short MaxSelection;
	plcbit PageUp;
	plcbit PageDown;
	plcbit StepUp;
	plcbit StepDown;
	float RangeStart;
	float RangeEnd;
} MpAlarmXHistoryUIAlarmListType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIDetailsType
#define __AS__TYPE_MpAlarmXHistoryUIDetailsType
typedef struct MpAlarmXHistoryUIDetailsType
{	unsigned long Severity;
	unsigned long Code;
	plcwstring Message[256];
	plcwstring AdditionalInformation1[256];
	plcwstring AdditionalInformation2[256];
	plcstring Scope[256];
	plcstring Name[256];
	MpAlarmXStateEnum OldState;
	MpAlarmXStateEnum NewState;
	plcstring Timestamp[51];
	plcstring DataDescriptions[10][51];
	plcstring DataValues[10][256];
} MpAlarmXHistoryUIDetailsType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUIConnectType
#define __AS__TYPE_MpAlarmXHistoryUIConnectType
typedef struct MpAlarmXHistoryUIConnectType
{	MpAlarmXHistoryUIStatusEnum Status;
	MpAlarmXHistoryUIAlarmListType AlarmList;
	MpAlarmXHistoryUIDetailsType Details;
	plcstring Language[21];
} MpAlarmXHistoryUIConnectType;
#endif

#ifndef __AS__TYPE_MpAlarmXHistoryUISetupType
#define __AS__TYPE_MpAlarmXHistoryUISetupType
typedef struct MpAlarmXHistoryUISetupType
{	unsigned short AlarmListSize;
	unsigned char AlarmListScrollWindow;
	plcstring TimeStampPattern[51];
} MpAlarmXHistoryUISetupType;
#endif

#ifndef __AS__TYPE_AlarmListAdapter_typ
#define __AS__TYPE_AlarmListAdapter_typ
typedef struct AlarmListAdapter_typ
{	plcstring Acknowledged[50][11];
	plcstring Active[50][11];
	plcstring Code[50][11];
} AlarmListAdapter_typ;
#endif

struct MpAlarmXCore
{	struct MpComIdentType(* MpLink);
	signed long StatusID;
	unsigned long ActiveAlarms;
	unsigned long PendingAlarms;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void MpAlarmXCore(struct MpAlarmXCore* inst);
struct MpAlarmXListUI
{	struct MpComIdentType(* MpLink);
	MpAlarmXListUISetupType UISetup;
	struct MpAlarmXListUIConnectType(* UIConnect);
	signed long StatusID;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void MpAlarmXListUI(struct MpAlarmXListUI* inst);
struct MpAlarmXHistoryUI
{	struct MpComIdentType(* MpLink);
	MpAlarmXHistoryUISetupType UISetup;
	struct MpAlarmXHistoryUIConnectType(* UIConnect);
	signed long StatusID;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void MpAlarmXHistoryUI(struct MpAlarmXHistoryUI* inst);
struct MpAlarmXHistory
{	struct MpComIdentType(* MpLink);
	plcstring(* DeviceName)[51];
	plcstring(* Language)[21];
	signed long StatusID;
	MpAlarmXInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Export;
	plcbit Active;
	plcbit Error;
	plcbit CommandBusy;
	plcbit CommandDone;
};
_BUR_PUBLIC void MpAlarmXHistory(struct MpAlarmXHistory* inst);
_BUR_LOCAL plcstring IOAlarmText[101];
_BUR_LOCAL struct MpAlarmXCore MpAlarmXCore_0;
_BUR_LOCAL struct MpAlarmXListUI MpAlarmXListUI_0;
_BUR_LOCAL MpAlarmXListUISetupType AlarmUISetup;
_BUR_LOCAL MpAlarmXListUIConnectType AlarmUIConnect;
_BUR_LOCAL AlarmListAdapter_typ AlarmListAdapter;
_BUR_LOCAL AlarmListAdapter_typ AlarmHistoryListAdapter;
_BUR_LOCAL plcbit status;
_BUR_LOCAL unsigned short i;
_BUR_LOCAL struct MpAlarmXHistory MpAlarmXHistory_0;
_BUR_LOCAL struct MpAlarmXHistoryUI MpAlarmXHistoryUI_0;
_BUR_LOCAL MpAlarmXHistoryUIConnectType AlarmXHistoryUIConnect;
_BUR_LOCAL MpAlarmXHistoryUISetupType AlarmXHistoryUISetup;
_BUR_LOCAL signed long AlarmStatus;
_BUR_LOCAL plcbit TestAlarm2;
_BUR_LOCAL plcbit TestAlarm;
_BUR_LOCAL plcbit TestAlarm2Active;
_BUR_LOCAL plcbit TestAlarmActive;
