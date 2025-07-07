######################################################
#                                                    #
# Automatic generated Makefile for Visual Components #
#                                                    #
#                  Do NOT edit!                      #
#                                                    #
######################################################

VCC:=@'$(AS_BIN_PATH)/br.vc.pc.exe'
LINK:=@'$(AS_BIN_PATH)/BR.VC.Link.exe'
MODGEN:=@'$(AS_BIN_PATH)/BR.VC.ModGen.exe'
VCPL:=@'$(AS_BIN_PATH)/BR.VC.PL.exe'
VCHWPP:=@'$(AS_BIN_PATH)/BR.VC.HWPP.exe'
VCDEP:=@'$(AS_BIN_PATH)/BR.VC.Depend.exe'
VCFLGEN:=@'$(AS_BIN_PATH)/BR.VC.lfgen.exe'
VCREFHANDLER:=@'$(AS_BIN_PATH)/BR.VC.CrossReferenceHandler.exe'
VCXREFEXTENDER:=@'$(AS_BIN_PATH)/BR.AS.CrossRefVCExtender.exe'
RM=CMD /C DEL
PALFILE_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Palette.vcr
VCCFLAGS_Panel=-server -proj Panel -vc '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/VCObject.vc' -prj_path '$(AS_PROJECT_PATH)' -temp_path '$(AS_TEMP_PATH)' -cfg $(AS_CONFIGURATION) -plc $(AS_PLC) -plctemp $(AS_TEMP_PLC) -cpu_path '$(AS_CPU_PATH)'
VCFIRMWARE=4.72.0
VCFIRMWAREPATH=$(AS_VC_PATH)/Firmware/V4.72.0/SG4
VCOBJECT_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/VCObject.vc
VCSTARTUP='vcstart.br'
VCLOD='vclod.br'
VCSTPOST='vcstpost.br'
TARGET_FILE_Panel=$(AS_CPU_PATH)/Panel.br
OBJ_SCOPE_Panel=AsSafetySolution
PRJ_PATH_Panel=$(AS_PROJECT_PATH)
SRC_PATH_Panel=$(AS_PROJECT_PATH)/Logical/$(OBJ_SCOPE_Panel)/Panel
TEMP_PATH_Panel=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Panel
TEMP_PATH_Shared=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared
TEMP_PATH_ROOT_Panel=$(AS_TEMP_PATH)
VC_LIBRARY_LIST_Panel=$(TEMP_PATH_Panel)/libraries.vci
VC_XREF_BUILDFILE_Panel=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcxref.build
VC_XREF_CLEANFILE=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcxref.clean
VC_LANGUAGES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr
CPUHWC='$(TEMP_PATH_Panel)/cpuhwc.vci'
VC_STATIC_OPTIONS_Panel='$(TEMP_PATH_Panel)/vcStaticOptions.xml'
VC_STATIC_OPTIONS_Shared='$(TEMP_PATH_Shared)/vcStaticOptions.xml'

DSOFLAGS=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)'
LIB_SHARED=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/vcshared.vca

#
# Shared Runtime Options
#
VCRS_OBJECT=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/vcrt_s.vco
VCRS_SOURCE=$(AS_PROJECT_PATH)/Logical/VCShared/Package.vcp

# All Shared Source Objects
VCR_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr 

TXTGRP_SHARED_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmAcknowledgeState.txtgrp \
	$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmBypassState.txtgrp \
	$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmEvent.txtgrp \
	$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmState.txtgrp \
	$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/DateTimeFormats.txtgrp \
	$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/httpURL_SDM.txtgrp \
	$(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/Users.txtgrp 

VCUG_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Length.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Mass.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Volume.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Power.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Memory.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Pressure.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Temperatures.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Energy.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/ppm.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/degree.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Time.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/degreePerSec.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/RPM.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Amps.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/SpeedPropAmplification.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/PositionPropAmplification.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Velocity.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Acceleration.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Speed_mm_s.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/accel_mm_ss.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Position_mm.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Torque.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/degreeAccel.vcug \
	$(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Percent.vcug 

ALCFG_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/AlarmGroups/AlarmSystem.alcfg 

ALGRP_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/AlarmGroups/SystemAlarms.algrp 

DSO_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/DataSources/Internal.dso \
	$(AS_PROJECT_PATH)/Logical/VCShared/DataSources/DataSource.dso 

CVINFO_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo 



# UnitGroups
VCUG_OBJECTS_Panel = $(addprefix $(AS_CPU_PATH)/VCShared/vcug., $(notdir $(VCUG_SOURCES_Panel:.vcug=.vco)))

$(AS_CPU_PATH)/VCShared/vcug.Length.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Length.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Mass.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Mass.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Volume.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Volume.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Power.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Power.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Memory.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Memory.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Pressure.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Pressure.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Temperatures.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Temperatures.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Energy.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Energy.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.ppm.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/ppm.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.degree.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/degree.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Time.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Time.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.degreePerSec.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/degreePerSec.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.RPM.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/RPM.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Amps.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Amps.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.SpeedPropAmplification.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/SpeedPropAmplification.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.PositionPropAmplification.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/PositionPropAmplification.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Velocity.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Velocity.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Acceleration.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Acceleration.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Speed_mm_s.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Speed_mm_s.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.accel_mm_ss.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/accel_mm_ss.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Position_mm.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Position_mm.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Torque.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Torque.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.degreeAccel.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/degreeAccel.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/vcug.Percent.vco: $(AS_PROJECT_PATH)/Logical/VCShared/UnitGroups/Percent.vcug
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#UnitGroups END




# AlarmGroups
ALGRP_OBJECTS_Panel = $(addprefix $(AS_CPU_PATH)/VCShared/algrp., $(notdir $(ALGRP_SOURCES_Panel:.algrp=.vco)))

$(AS_CPU_PATH)/VCShared/algrp.SystemAlarms.vco: $(AS_PROJECT_PATH)/Logical/VCShared/AlarmGroups/SystemAlarms.algrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#AlarmGroups END




# AlarmSystem
ALCFG_OBJECTS_Panel = $(addprefix $(AS_CPU_PATH)/VCShared/alcfg., $(notdir $(ALCFG_SOURCES_Panel:.alcfg=.vco)))

$(AS_CPU_PATH)/VCShared/alcfg.AlarmSystem.vco: $(AS_PROJECT_PATH)/Logical/VCShared/AlarmGroups/AlarmSystem.alcfg
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#AlarmSystem END




# Text Groups
TXTGRP_SHARED_OBJECTS_Panel = $(addprefix $(AS_CPU_PATH)/VCShared/txtgrp., $(notdir $(TXTGRP_SHARED_SOURCES_Panel:.txtgrp=.vco)))

$(AS_CPU_PATH)/VCShared/txtgrp.AlarmAcknowledgeState.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmAcknowledgeState.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/txtgrp.AlarmBypassState.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmBypassState.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/txtgrp.AlarmEvent.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmEvent.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/txtgrp.AlarmState.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/AlarmState.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/txtgrp.DateTimeFormats.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/DateTimeFormats.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/txtgrp.httpURL_SDM.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/httpURL_SDM.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(AS_CPU_PATH)/VCShared/txtgrp.Users.vco: $(AS_PROJECT_PATH)/Logical/VCShared/TextGroups/Users.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Text Groups END


#
# Datapoint Objects
#
$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/dso.Internal.vco: $(AS_PROJECT_PATH)/Logical/VCShared/DataSources/Internal.dso 
	 $(VCC) -f '$<' -o '$@' $(DSOFLAGS) $(VCCFLAGS_Panel) -p Panel -vcr 4720 -sfas

$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/dso.DataSource.vco: $(AS_PROJECT_PATH)/Logical/VCShared/DataSources/DataSource.dso 
	 $(VCC) -f '$<' -o '$@' $(DSOFLAGS) $(VCCFLAGS_Panel) -p Panel -vcr 4720 -sfas

DPT_OBJECTS = $(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/dpt.DataPointList.vco
DSO_OBJECTS_Panel=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/dso.Internal.vco $(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/dso.DataSource.vco 
$(DSO_OBJECTS_Panel): $(DSO_SOURCES_Panel)


#
# Building the Shared Runtime Options
#
$(VCRS_OBJECT) : $(VCRS_SOURCE)
	$(VCC) -f '$<' -o '$@' -ct shared -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -sl  $(VCCFLAGS_Panel) -p Panel -vcr 4720 -sfas

#
# The Shared Module
#
SHARED_MODULE=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcshared.br
SHARED_CCF=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/vcshared.ccf
DEL_SHARED_CCF=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/vcshared.ccf.lfl

$(SHARED_MODULE) : $(SHARED_CCF)
	 $(MODGEN) -so $(VC_STATIC_OPTIONS_Shared) -fw '$(VCFIRMWAREPATH)' -m $(VCSTARTUP) -v V1.00.0 -vc '$(VCOBJECT_Panel)' -f '$<' -o '$@' -d vcgclass -profile 'False'

$(VCUG_OBJECTS_Panel): $(VC_LANGUAGES_Panel)
$(TXTGRP_SHARED_OBJECTS_Panel): $(VC_LANGUAGES_Panel)
$(ALGRP_OBJECTS_Panel): $(VC_LANGUAGES_Panel)
$(ALCFG_OBJECTS_Panel): $(VC_LANGUAGES_Panel)

$(SHARED_CCF): $(VCRS_OBJECT) $(VCR_OBJECTS_Panel) $(VCUG_OBJECTS_Panel) $(ALGRP_OBJECTS_Panel) $(ALCFG_OBJECTS_Panel) $(DSO_OBJECTS_Panel) $(TXTGRP_SHARED_OBJECTS_Panel) $(CVINFO_OBJECTS_Panel)
	-@CMD /Q /C if exist "$(DEL_SHARED_CCF)" DEL /F /Q "$(DEL_SHARED_CCF)" 2>nul
	 @$(VCFLGEN) '$@.lfl' '$(VCR_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' -mask .vcug -vcp '$(AS_PROJECT_PATH)/Logical/VCShared/Package.vcp' -temp '$(TEMP_PATH_Shared)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' -mask .algrp -vcp '$(AS_PROJECT_PATH)/Logical/VCShared/Package.vcp' -temp '$(TEMP_PATH_Shared)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' '$(ALCFG_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' -mask .txtgrp -vcp '$(AS_PROJECT_PATH)/Logical/VCShared/Package.vcp' -temp '$(TEMP_PATH_Shared)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' '$(DSO_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' '$(DPT_OBJECTS:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)'
	 @$(VCFLGEN) '$@.lfl' '$(VCRS_OBJECT)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)'
	 $(LINK) '$@.lfl' -o '$@' -lib '$(LIB_SHARED)' -P '$(AS_PROJECT_PATH)' -m 'shared resources' -profile 'False' -warningLevel2 -name Panel -vcr 4720 -sfas


$(LIB_SHARED): $(SHARED_CCF)
