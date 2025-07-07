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
TTFFLAGS_Panel= -P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo'

#
# Font arial
#
ifneq ($(VC_FONT_arial),1)
VC_FONT_arial=1
$(AS_CPU_PATH)/VcFntDat/arial.vco:$(AS_CPU_PATH)/VcFntDat/arial.vci
	 $(VCC) -f '$<' -o '$@' $(TTFFLAGS_Panel) $(VCCFLAGS_Panel) -sfas

$(AS_CPU_PATH)/VcFntDat/arial.ccf:$(AS_CPU_PATH)/VcFntDat/arial.vco
	 $(LINK) '$^' -o '$@' -warningLevel2 -m arial.ttf -name Panel -profile 'False' -vcr 4720 -sfas

$(AS_CPU_PATH)/arial.br:$(AS_CPU_PATH)/VcFntDat/arial.ccf
	 $(MODGEN) -so $(VC_STATIC_OPTIONS_Shared) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -f '$<' -o '$@' -d vcgclass -v V1.00.0 -profile False -vc '$(VCOBJECT_Panel)' -b
endif

#
# Font arialbd
#
ifneq ($(VC_FONT_arialbd),1)
VC_FONT_arialbd=1
$(AS_CPU_PATH)/VcFntDat/arialbd.vco:$(AS_CPU_PATH)/VcFntDat/arialbd.vci
	 $(VCC) -f '$<' -o '$@' $(TTFFLAGS_Panel) $(VCCFLAGS_Panel) -sfas

$(AS_CPU_PATH)/VcFntDat/arialbd.ccf:$(AS_CPU_PATH)/VcFntDat/arialbd.vco
	 $(LINK) '$^' -o '$@' -warningLevel2 -m arialbd.ttf -name Panel -profile 'False' -vcr 4720 -sfas

$(AS_CPU_PATH)/arialbd.br:$(AS_CPU_PATH)/VcFntDat/arialbd.ccf
	 $(MODGEN) -so $(VC_STATIC_OPTIONS_Shared) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -f '$<' -o '$@' -d vcgclass -v V1.00.0 -profile False -vc '$(VCOBJECT_Panel)' -b
endif

FONT_MODULES_Panel=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/arial.br $(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/arialbd.br 
