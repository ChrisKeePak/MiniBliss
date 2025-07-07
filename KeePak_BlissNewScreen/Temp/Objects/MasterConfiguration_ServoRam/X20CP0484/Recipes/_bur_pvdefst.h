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

#ifndef __AS__TYPE_MpRecipeErrorEnum
#define __AS__TYPE_MpRecipeErrorEnum
typedef enum MpRecipeErrorEnum
{	mpRECIPE_NO_ERROR = 0,
	mpRECIPE_ERR_ACTIVATION = -1064239103,
	mpRECIPE_ERR_MPLINK_NULL = -1064239102,
	mpRECIPE_ERR_MPLINK_INVALID = -1064239101,
	mpRECIPE_ERR_MPLINK_CHANGED = -1064239100,
	mpRECIPE_ERR_MPLINK_CORRUPT = -1064239099,
	mpRECIPE_ERR_MPLINK_IN_USE = -1064239098,
	mpRECIPE_ERR_CONFIG_INVALID = -1064239091,
	mpRECIPE_ERR_SAVE_DATA = -1064140799,
	mpRECIPE_ERR_LOAD_DATA = -1064140798,
	mpRECIPE_ERR_INVALID_FILE_DEV = -1064140797,
	mpRECIPE_ERR_INVALID_FILE_NAME = -1064140796,
	mpRECIPE_ERR_CMD_IN_PROGRESS = -1064140795,
	mpRECIPE_WRN_SAVE_WITH_WARN = -2137882618,
	mpRECIPE_WRN_LOAD_WITH_WARN = -2137882617,
	mpRECIPE_ERR_SAVE_WITH_ERRORS = -1064140792,
	mpRECIPE_ERR_LOAD_WITH_ERRORS = -1064140791,
	mpRECIPE_ERR_MISSING_RECIPE = -1064140790,
	mpRECIPE_ERR_MISSING_MPFILE = -1064140789,
	mpRECIPE_ERR_INVALID_SORT_ORDER = -1064140788,
	mpRECIPE_WRN_MISSING_UICONNECT = -2137882611,
	mpRECIPE_ERR_INVALID_PV_NAME = -1064140786,
	mpRECIPE_ERR_INVALID_LOAD_TYPE = -1064140785,
	mpRECIPE_ERR_LISTING_FILES = -1064140784,
	mpRECIPE_ERR_PV_NAME_NULL = -1064140783,
	mpRECIPE_WRN_NO_PV_REGISTERED = -2137882606,
	mpRECIPE_ERR_SYNC_SAVE_ACTIVE = -1064140781,
	mpRECIPE_ERR_DELETING_FILE = -1064140780,
	mpRECIPE_WRN_EMPTY_RECIPE = -2137882603,
	mpRECIPE_INF_WAIT_RECIPE_FB = 1083342870,
	mpRECIPE_ERR_RENAMING_FILE = -1064140777,
	mpRECIPE_WRN_NO_PV_FOUND = -2137882600,
	mpRECIPE_WRN_LIST_SIZE = -2137882599,
} MpRecipeErrorEnum;
#endif

#ifndef __AS__TYPE_MpRecipeStatusIDType
#define __AS__TYPE_MpRecipeStatusIDType
typedef struct MpRecipeStatusIDType
{	MpRecipeErrorEnum ID;
	MpComSeveritiesEnum Severity;
	unsigned short Code;
} MpRecipeStatusIDType;
#endif

#ifndef __AS__TYPE_MpRecipeDiagType
#define __AS__TYPE_MpRecipeDiagType
typedef struct MpRecipeDiagType
{	MpRecipeStatusIDType StatusID;
} MpRecipeDiagType;
#endif

#ifndef __AS__TYPE_MpRecipeInfoType
#define __AS__TYPE_MpRecipeInfoType
typedef struct MpRecipeInfoType
{	MpRecipeDiagType Diag;
} MpRecipeInfoType;
#endif

#ifndef __AS__TYPE_MpRecipeXmlInfoType
#define __AS__TYPE_MpRecipeXmlInfoType
typedef struct MpRecipeXmlInfoType
{	unsigned long FileSize;
	unsigned long PendingSync;
	MpRecipeDiagType Diag;
	plcstring LastLoadedRecipe[256];
} MpRecipeXmlInfoType;
#endif

#ifndef __AS__TYPE_MpRecipeXmlHeaderType
#define __AS__TYPE_MpRecipeXmlHeaderType
typedef struct MpRecipeXmlHeaderType
{	plcstring Name[101];
	plcstring Description[256];
	plcstring Version[21];
	plcdt DateTime;
} MpRecipeXmlHeaderType;
#endif

#ifndef __AS__TYPE_MpRecipeXmlLoadEnum
#define __AS__TYPE_MpRecipeXmlLoadEnum
typedef enum MpRecipeXmlLoadEnum
{	mpRECIPE_XML_LOAD_ALL = 0,
	mpRECIPE_XML_LOAD_HEADER = 1,
} MpRecipeXmlLoadEnum;
#endif

struct MpRecipeRegPar
{	struct MpComIdentType(* MpLink);
	plcstring(* PVName)[101];
	plcstring(* Category)[51];
	signed long StatusID;
	MpRecipeInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
	plcbit UpdateNotification;
};
_BUR_PUBLIC void MpRecipeRegPar(struct MpRecipeRegPar* inst);
struct MpRecipeXml
{	struct MpComIdentType(* MpLink);
	plcstring(* DeviceName)[51];
	plcstring(* FileName)[256];
	struct MpRecipeXmlHeaderType(* Header);
	plcstring(* Category)[51];
	MpRecipeXmlLoadEnum LoadType;
	signed long StatusID;
	MpRecipeXmlInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Load;
	plcbit Save;
	plcbit UpdateNotification;
	plcbit Active;
	plcbit Error;
	plcbit CommandBusy;
	plcbit CommandDone;
};
_BUR_PUBLIC void MpRecipeXml(struct MpRecipeXml* inst);
_BUR_LOCAL plcstring LastRecipeLoaded[81];
_BUR_LOCAL struct MpRecipeXml MpRecipeXml_0;
_BUR_LOCAL struct MpRecipeRegPar MpRecipeRegPar_0;
_BUR_LOCAL struct MpRecipeRegPar MpRecipeRegPar_1;
_BUR_LOCAL struct MpRecipeRegPar MpRecipeRegPar_2;
_BUR_LOCAL struct MpRecipeRegPar MpRecipeRegPar_3;
_BUR_LOCAL struct MpRecipeRegPar MpRecipeRegPar_4;
_BUR_LOCAL struct MpRecipeRegPar MpRecipeRegPar_5;
_BUR_LOCAL plcbit RegParActive0;
_BUR_LOCAL plcbit RegParActive1;
_BUR_LOCAL plcbit RegParActive2;
_BUR_LOCAL plcbit RegParActive3;
_BUR_LOCAL plcbit RegParActive4;
_BUR_LOCAL plcbit RegParActive5;
_BUR_LOCAL plcbit AllParsRegistered;
