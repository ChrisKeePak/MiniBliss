#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_AdhesiveChannelColormaps_typ
#define __AS__TYPE_AdhesiveChannelColormaps_typ
typedef struct AdhesiveChannelColormaps_typ
{	unsigned char Delay[4];
	unsigned char Glue[4];
} AdhesiveChannelColormaps_typ;
#endif

#ifndef __AS__TYPE_AdhesiveChannelDatapoints_typ
#define __AS__TYPE_AdhesiveChannelDatapoints_typ
typedef struct AdhesiveChannelDatapoints_typ
{	unsigned short Delay[4];
	unsigned short Glue[4];
	unsigned short RowLabel;
} AdhesiveChannelDatapoints_typ;
#endif

#ifndef __AS__TYPE_ColorMapDatapoints_typ
#define __AS__TYPE_ColorMapDatapoints_typ
typedef struct ColorMapDatapoints_typ
{	struct AdhesiveChannelColormaps_typ AdhesiveChannelsColormaps[4];
	unsigned char AdhesiveSystemOK;
	unsigned char AdhesiveUnitFault;
	unsigned char AdhesiveUnitFeederFault;
	unsigned char AdhesiveUnitLevelLow;
	unsigned char AdhesiveUnitReady;
	unsigned char AdhesiveUnitServiceNeeded;
	unsigned char AdhesiveUseageLow;
	unsigned char AirPressureOK;
	unsigned char ATSAddOnOver;
	unsigned char ATSAddOnUnder;
	unsigned char AutoModeSelected;
	unsigned char DownstreamSensorOK;
	unsigned char DriveFaultOK;
	unsigned char GlueSystemOK;
	unsigned char JogModeSelected;
	unsigned char NordsonEditTemps;
	unsigned char RecipeLoaded;
	unsigned char RecipeSystemBusy;
	unsigned char SafetyOK;
	unsigned char VacuumOK;
	unsigned char VacuumPressureOK;
	unsigned char VacuumPumpOn;
	unsigned char Valve1OK;
	unsigned char Valve2OK;
	unsigned char Valve3OK;
	unsigned char Valve4OK;
} ColorMapDatapoints_typ;
#endif

#ifndef __AS__TYPE_StatusDatapoints_typ
#define __AS__TYPE_StatusDatapoints_typ
typedef struct StatusDatapoints_typ
{	struct AdhesiveChannelDatapoints_typ AdhesiveChannelSDPs[4];
	unsigned short AdhesivePatternDialogSDP;
	unsigned short AdhesivePatternConfirmDialogSDP;
	unsigned short AdhesivePatternConfirmedSDP;
	unsigned short AdhesiveUnitFaultSDP;
	unsigned short AdhesiveUnitLevelLowSDP;
	unsigned short AdhesiveUnitNotReadySDP;
	unsigned short AdhesiveUseageLowSDP;
	unsigned short AutoModeSDP;
	unsigned short BlissSDP;
	unsigned char HardwireValveSDP;
	unsigned short JogStatusDatapoint;
	unsigned short LinMotBotHomeSDP;
	unsigned short LinMotSDP;
	unsigned short LinMotTopHomeSDP;
	unsigned short LinMotTuningSDP;
	unsigned short MaintenanceSDP;
	unsigned short MotorVacuumSDP;
	unsigned short NordsonModbusSDP;
	unsigned short NordsonStandbyOffSDP;
	unsigned short PnuematicFolderSDP;
	unsigned short RecipeDialogSDP;
	unsigned short RecipeIndexSDP;
	unsigned short RecipeReq1SDP;
	unsigned short RecipeReq2SDP;
	unsigned short RestartInhibitSDP;
	unsigned short SafetyStartingSDP;
	unsigned short ServoLayerSDP;
	unsigned short ServoRamHomeSDP;
	unsigned short SmartVacuumLayerSDP;
	unsigned short TraySDP;
	unsigned short VacuumPressureFaultSDP;
	unsigned short VenturiVacuumSDP;
	unsigned short ZeroEncoderSDP;
	unsigned short HopperLowSDP;
	unsigned short HomeServoRamSDP;
	unsigned short LubeSDP;
	unsigned short BodyHopperSwitchSDP;
	unsigned short LeftHopperSwitchSDP;
	unsigned short RightHopperSwitchSDP;
} StatusDatapoints_typ;
#endif

_BUR_PUBLIC plcbit SetPatternSDPs(unsigned char NumGlueChannels, struct ColorMapDatapoints_typ(* FieldColormaps), struct StatusDatapoints_typ(* FieldSDPs));
