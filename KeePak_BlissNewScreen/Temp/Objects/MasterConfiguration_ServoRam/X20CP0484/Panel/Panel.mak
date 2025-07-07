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
# include Shared and Font Makefile (only once)
	include $(AS_TEMP_PATH)/objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCFntDat/Font_Panel.mak
ifneq ($(VCINC),1)
	VCINC=1
	include $(AS_TEMP_PATH)/objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/VCShared.mak
endif

DEPENDENCIES_Panel=-d vcgclass -profile 'False'
DEFAULT_STYLE_SHEET_Panel='Source[local].StyleSheet[Default]'
SHARED_MODULE=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcshared.br
LFNTFLAGS_Panel=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)'
BDRFLAGS_Panel=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)'

# Local Libs
LIB_LOCAL_OBJ_Panel=$(TEMP_PATH_Panel)/localobj.vca

# Hardware sources
PANEL_HW_OBJECT_Panel=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Panel/dis.Hardware.vco
PANEL_HW_VCI_Panel=$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Panel/dis.Hardware.vci
PANEL_HW_SOURCE_Panel=C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Physical/MasterConfiguration_ServoRam/Hardware.hw 
DIS_OBJECTS_Panel=$(PANEL_HW_OBJECT_Panel) $(KEYMAP_OBJECTS_Panel)

# KeyMapping flags
$(TEMP_PATH_Panel)/dis.PS2-Keyboard1.vco: $(AS_PROJECT_PATH)/Physical/MasterConfiguration_ServoRam/X20CP0484/VC/PS2-Keyboard1.dis $(PANEL_HW_SOURCE_Panel)
	$(VCHWPP) -f '$(PANEL_HW_SOURCE_Panel)' -o '$(subst .vco,.vci,$(TEMP_PATH_Panel)/dis.PS2-Keyboard1.vco)' -n Panel -d Panel -pal '$(PALFILE_Panel)' -c '$(AS_CONFIGURATION)' -p '$(AS_PLC)' -ptemp '$(AS_TEMP_PLC)' -B 'C4.72' -L '' -hw '$(CPUHWC)' -warninglevel 2 -so $(VC_STATIC_OPTIONS_Panel) -sos $(VC_STATIC_OPTIONS_Shared) -keyboard '$(AS_PROJECT_PATH)/Physical/MasterConfiguration_ServoRam/X20CP0484/VC/PS2-Keyboard1.dis' -fp '$(AS_VC_PATH)/Firmware/V4.72.0/SG4' -prj '$(AS_PROJECT_PATH)' -apj 'KeePak_BlissNewScreen' -sfas -vcob '$(VCOBJECT_Panel)'
	$(VCC) -f '$(subst .vco,.vci,$@)' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -k '$(VCVK_SOURCES_Panel)' $(VCCFLAGS_Panel) -p Panel -sfas

KEYMAP_SOURCES_Panel=$(AS_PROJECT_PATH)/Physical/MasterConfiguration_ServoRam/X20CP0484/VC/PS2-Keyboard1.dis 
KEYMAP_OBJECTS_Panel=$(TEMP_PATH_Panel)/dis.PS2-Keyboard1.vco 

# All Source Objects
TXTGRP_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_InstantMessages.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/HeaderBar.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/PageNames.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/Buttons_PageTexts.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/Languages.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/NumPad_Limits.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MXCHG_Led.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_RE_Led.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_FWACKN_Led.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_FAIL_Led.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_RemoteControlStatus.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MessageBoxHeader.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MessageBoxText.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MessageBoxButton.txtgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_DataCompareStatus.txtgrp 

FNINFO_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Info.fninfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Html_SDM.fninfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Default.fninfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Header.fninfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Button.fninfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Input.fninfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Fonts/Status.fninfo 

BMINFO_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPad_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPad.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_AcknowledgeReset.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Active.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_BypassOFF.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_BypassON.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Inactive.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Latched.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_NotQuit.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Quit.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Reset.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_ResetAcknowledge.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Triggered.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/ProgressBorder.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/alarm.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_checked.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_default.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_default_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_global_area.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_global_area_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/information.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_left.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_left_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_multi.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_multi_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_multi.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_multi_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_radio_selected.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_radio.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_right.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_right_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/warning.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_decrease_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_increase.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_increase_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_decrease.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/frame_header.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small_checked.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_AlphaPad.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_AlphaPad_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_09x09.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_ArrowRightGray.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_ArrowUpGray.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_BallGray.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadVer.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadHor_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadHor.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadVer_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/gauge_200x200_round_nodiv.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/gauge_NeedleRed100x11_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small_gray.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_EditPad.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_EditPad_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/BackgroundSVGA.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/FrameInvisible.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_off.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_on.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_ready.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_error.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/BackTransparent.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPadLimits.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPadLimits_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/sl_interface.bminfo 

BMGRP_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmAcknowledgeState.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmBypassState.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmEvent.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmState.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/Borders.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/GlobalArea.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/Pads.bmgrp \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/msgBox.bmgrp 

PAGE_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/SRC10_RemoteControlPage.page \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/tmpl60_Setup.page \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/tmpl61_SystemDiagnostics.page \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/SRC20_ApplicatonPage.page \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/SRC30_DataPage.page 

LAYER_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Layers/globalArea.layer \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Layers/msgBox.layer \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Layers/Background.layer 

VCS_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/StyleSheets/Default.vcs 

BDR_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Decrease.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Decrease_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Global_Area.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Global_Area_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Increase.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Increase_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Down.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Down_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Up.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Up_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Radio.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Radio_selected.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scoll_Up.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scoll_Up_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Down.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Down_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Left.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Left_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Right.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Right_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SunkenNG.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/CheckBox_checked.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Flat_black.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Flat_grey.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/FrameHeader.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/OverdriveBorder.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/ProgressBarBorder.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/RaisedInner.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Raised.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SliderBorder09.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SunkenOuter.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Sunken.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SunkenNGgray.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/FrameGlobal.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/FrameInvisible.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_KeyRingOff.bdr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_KeyRingOn.bdr 

TPR_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NumPad.tpr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/AlphaPad.tpr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NavigationPad_ver.tpr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NavigationPad_hor.tpr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/EditPad.tpr \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NumPad_Limits.tpr 

TDC_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/TrendData.tdc 

TRD_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/CPUTemperature.trd \
	$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/ROOMTemperature.trd 

TRE_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/Trend_Temperature.tre 

CLM_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/ColorMaps/Button.clm 

VCVK_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/VirtualKeys.vcvk 

VCR_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Palette.vcr 

# Runtime Object sources
VCR_OBJECT_Panel=$(TEMP_PATH_Panel)/vcrt.vco
VCR_SOURCE_Panel=$(SRC_PATH_Panel)/package.vcp
# All Source Objects END

#Panel Hardware
$(PANEL_HW_VCI_Panel): $(PANEL_HW_SOURCE_Panel) $(VC_LIBRARY_LIST_Panel) $(KEYMAP_SOURCES_Panel) $(PALFILE_Panel)
	$(VCHWPP) -f '$<' -o '$@' -n Panel -d Panel -pal '$(PALFILE_Panel)' -c '$(AS_CONFIGURATION)' -p '$(AS_PLC)' -ptemp '$(AS_TEMP_PLC)' -B 'C4.72' -L '' -verbose 'False' -profile 'False' -hw '$(CPUHWC)' -warninglevel 2 -so $(VC_STATIC_OPTIONS_Panel) -sos $(VC_STATIC_OPTIONS_Shared) -fp '$(AS_VC_PATH)/Firmware/V4.72.0/SG4' -sfas -prj '$(AS_PROJECT_PATH)' -apj 'KeePak_BlissNewScreen' -vcob '$(VCOBJECT_Panel)'

$(PANEL_HW_OBJECT_Panel): $(PANEL_HW_VCI_Panel) $(VC_LIBRARY_LIST_Panel)
	$(VCC) -f '$(subst .vco,.vci,$@)' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -k '$(VCVK_SOURCES_Panel)' $(VCCFLAGS_Panel) -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


# Pages
PAGE_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/page., $(notdir $(PAGE_SOURCES_Panel:.page=.vco)))

$(TEMP_PATH_Panel)/page.SRC10_RemoteControlPage.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/SRC10_RemoteControlPage.page $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Panel)/StyleSheets/Default.vcs' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/page.tmpl60_Setup.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/tmpl60_Setup.page $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Panel)/StyleSheets/Default.vcs' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/page.tmpl61_SystemDiagnostics.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/tmpl61_SystemDiagnostics.page $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Panel)/StyleSheets/Default.vcs' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/page.SRC20_ApplicatonPage.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/SRC20_ApplicatonPage.page $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Panel)/StyleSheets/Default.vcs' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/page.SRC30_DataPage.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Pages/SRC30_DataPage.page $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Panel)/StyleSheets/Default.vcs' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Pages END




# Stylesheets
VCS_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/vcs., $(notdir $(VCS_SOURCES_Panel:.vcs=.vco)))

$(TEMP_PATH_Panel)/vcs.Default.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/StyleSheets/Default.vcs
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -P '$(AS_PROJECT_PATH)' -ds $(DEFAULT_STYLE_SHEET_Panel) -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Stylesheets END




# Layers
LAYER_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/layer., $(notdir $(LAYER_SOURCES_Panel:.layer=.vco)))

$(TEMP_PATH_Panel)/layer.globalArea.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Layers/globalArea.layer $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -ds $(DEFAULT_STYLE_SHEET_Panel) -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/layer.msgBox.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Layers/msgBox.layer $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -ds $(DEFAULT_STYLE_SHEET_Panel) -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/layer.Background.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Layers/Background.layer $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -ds $(DEFAULT_STYLE_SHEET_Panel) -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Layers END




# Virtual Keys
VCVK_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/vcvk., $(notdir $(VCVK_SOURCES_Panel:.vcvk=.vco)))

$(TEMP_PATH_Panel)/vcvk.VirtualKeys.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/VirtualKeys.vcvk
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas

$(VCVK_OBJECTS_Panel): $(VC_LANGUAGES_Panel)

#Virtual Keys END




# Touch Pads
TPR_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/tpr., $(notdir $(TPR_SOURCES_Panel:.tpr=.vco)))

$(TEMP_PATH_Panel)/tpr.NumPad.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NumPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AsSafetySolution/Panel' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/tpr.AlphaPad.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/AlphaPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AsSafetySolution/Panel' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/tpr.NavigationPad_ver.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NavigationPad_ver.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AsSafetySolution/Panel' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/tpr.NavigationPad_hor.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NavigationPad_hor.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AsSafetySolution/Panel' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/tpr.EditPad.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/EditPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AsSafetySolution/Panel' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/tpr.NumPad_Limits.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TouchPads/NumPad_Limits.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_BlissNewScreen/Logical/AsSafetySolution/Panel' -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Touch Pads END




# Text Groups
TXTGRP_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/txtgrp., $(notdir $(TXTGRP_SOURCES_Panel:.txtgrp=.vco)))

$(TEMP_PATH_Panel)/txtgrp.SRC_InstantMessages.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_InstantMessages.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.HeaderBar.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/HeaderBar.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.PageNames.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/PageNames.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.Buttons_PageTexts.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/Buttons_PageTexts.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.Languages.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/Languages.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.NumPad_Limits.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/NumPad_Limits.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_MXCHG_Led.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MXCHG_Led.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_RE_Led.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_RE_Led.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_FWACKN_Led.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_FWACKN_Led.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_FAIL_Led.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_FAIL_Led.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_RemoteControlStatus.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_RemoteControlStatus.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_MessageBoxHeader.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MessageBoxHeader.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_MessageBoxText.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MessageBoxText.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_MessageBoxButton.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_MessageBoxButton.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/txtgrp.SRC_DataCompareStatus.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/TextGroups/SRC_DataCompareStatus.txtgrp $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Text Groups END




# BitmapGroups
BMGRP_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/bmgrp., $(notdir $(BMGRP_SOURCES_Panel:.bmgrp=.vco)))

$(TEMP_PATH_Panel)/bmgrp.AlarmAcknowledgeState.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmAcknowledgeState.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.AlarmBypassState.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmBypassState.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.AlarmEvent.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmEvent.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.AlarmState.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/AlarmState.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.Borders.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/Borders.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.GlobalArea.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/GlobalArea.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.Pads.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/Pads.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bmgrp.msgBox.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/BitmapGroups/msgBox.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#BitmapGroups END




# Bitmaps
BMINFO_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/bminfo., $(notdir $(BMINFO_SOURCES_Panel:.bminfo=.vco)))

$(TEMP_PATH_Panel)/bminfo.Key_NumPad_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPad_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPad_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_NumPad.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPad.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPad.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_AcknowledgeReset.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_AcknowledgeReset.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_AcknowledgeReset.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_Active.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Active.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Active.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_BypassOFF.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_BypassOFF.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_BypassOFF.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_BypassON.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_BypassON.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_BypassON.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_Inactive.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Inactive.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Inactive.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_Latched.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Latched.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Latched.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_NotQuit.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_NotQuit.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_NotQuit.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_Quit.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Quit.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Quit.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_Reset.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Reset.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Reset.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_ResetAcknowledge.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_ResetAcknowledge.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_ResetAcknowledge.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Alarm_Triggered.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Triggered.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Alarm_Triggered.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.ProgressBorder.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/ProgressBorder.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/ProgressBorder.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.alarm.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/alarm.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/alarm.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.checkbox.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.checkbox_checked.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_checked.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_checked.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_default.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_default.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_default.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_default_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_default_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_default_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_down.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_down_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_global_area.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_global_area.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_global_area.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_global_area_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_global_area_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_global_area_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.information.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/information.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/information.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_left.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_left.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_left.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_left_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_left_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_left_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_down_multi.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_multi.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_multi.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_down_multi_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_multi_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_down_multi_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_up_multi.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_multi.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_multi.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_up_multi_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_multi_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_multi_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_radio_selected.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_radio_selected.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_radio_selected.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_radio.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_radio.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_radio.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_right.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_right.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_right.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_right_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_right_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_right_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_up.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_scroll_up_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_scroll_up_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.warning.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/warning.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/warning.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_decrease_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_decrease_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_decrease_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_increase.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_increase.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_increase.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_increase_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_increase_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_increase_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_decrease.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_decrease.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_decrease.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.frame_header.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/frame_header.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/frame_header.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.checkbox_small.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.checkbox_small_checked.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small_checked.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small_checked.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_AlphaPad.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_AlphaPad.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_AlphaPad.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_AlphaPad_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_AlphaPad_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_AlphaPad_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Slider_09x09.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_09x09.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_09x09.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Slider_ArrowRightGray.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_ArrowRightGray.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_ArrowRightGray.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Slider_ArrowUpGray.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_ArrowUpGray.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_ArrowUpGray.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Slider_BallGray.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_BallGray.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Slider_BallGray.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_ListPadVer.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadVer.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadVer.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_ListPadHor_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadHor_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadHor_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_ListPadHor.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadHor.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadHor.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_ListPadVer_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadVer_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_ListPadVer_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.gauge_200x200_round_nodiv.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/gauge_200x200_round_nodiv.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/gauge_200x200_round_nodiv.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.gauge_NeedleRed100x11_1.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/gauge_NeedleRed100x11_1.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/gauge_NeedleRed100x11_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.checkbox_small_gray.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small_gray.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/checkbox_small_gray.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_EditPad.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_EditPad.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_EditPad.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_EditPad_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_EditPad_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_EditPad_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.BackgroundSVGA.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/BackgroundSVGA.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/BackgroundSVGA.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.FrameInvisible.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/FrameInvisible.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/FrameInvisible.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_off.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_off.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_off.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_on.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_on.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_on.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_ready.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_ready.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_ready.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.button_error.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_error.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/button_error.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.BackTransparent.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/BackTransparent.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/BackTransparent.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_NumPadLimits.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPadLimits.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPadLimits.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.Key_NumPadLimits_pressed.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPadLimits_pressed.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/Key_NumPadLimits_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/bminfo.sl_interface.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/sl_interface.bminfo $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Bitmaps/sl_interface.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Bitmaps END




# Trend Configuration
TRE_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/tre., $(notdir $(TRE_SOURCES_Panel:.tre=.vco)))

$(TEMP_PATH_Panel)/tre.Trend_Temperature.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/Trend_Temperature.tre
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Trend Configuration END




# Trend Data
TRD_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/trd., $(notdir $(TRD_SOURCES_Panel:.trd=.vco)))

$(TEMP_PATH_Panel)/trd.CPUTemperature.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/CPUTemperature.trd
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


$(TEMP_PATH_Panel)/trd.ROOMTemperature.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/ROOMTemperature.trd
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Trend Data END




# Trend Data Configuration
TDC_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/tdc., $(notdir $(TDC_SOURCES_Panel:.tdc=.vco)))

$(TEMP_PATH_Panel)/tdc.TrendData.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Trends/TrendData.tdc
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#Trend Data Configuration END




# ColorMap Table
CLM_OBJECTS_Panel = $(addprefix $(TEMP_PATH_Panel)/clm., $(notdir $(CLM_SOURCES_Panel:.clm=.vco)))

$(TEMP_PATH_Panel)/clm.Button.vco: $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/ColorMaps/Button.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Panel)' $(VCCFLAGS_Panel)  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas


#ColorMap Table END


#
# Borders
#
BDR_SOURCES_Panel=$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Decrease.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Decrease_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Global_Area.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Global_Area_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Increase.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Increase_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Down.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Down_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Up.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Multi_Scroll_Up_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Radio.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Radio_selected.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scoll_Up.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scoll_Up_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Down.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Down_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Left.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Left_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Right.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_Scroll_Right_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_pressed.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SunkenNG.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/CheckBox_checked.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Flat_black.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Flat_grey.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/FrameHeader.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/OverdriveBorder.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/ProgressBarBorder.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/RaisedInner.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Raised.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SliderBorder09.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SunkenOuter.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Sunken.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/SunkenNGgray.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/FrameGlobal.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/FrameInvisible.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_KeyRingOff.bdr $(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Borders/Button_KeyRingOn.bdr 
BDR_OBJECTS_Panel=$(TEMP_PATH_Panel)/bdr.Bordermanager.vco
$(TEMP_PATH_Panel)/bdr.Bordermanager.vco: $(BDR_SOURCES_Panel)
	$(VCC) -f '$<' -o '$@' -pkg '$(SRC_PATH_Panel)' $(BDRFLAGS_Panel) $(VCCFLAGS_Panel) -p Panel$(SRC_PATH_Panel)
#
# Logical fonts
#
$(TEMP_PATH_Panel)/lfnt.en.vco: $(TEMP_PATH_Panel)/en.lfnt $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Panel) $(VCCFLAGS_Panel) -p Panel -sfas
$(TEMP_PATH_Panel)/lfnt.de.vco: $(TEMP_PATH_Panel)/de.lfnt $(VC_LANGUAGES_Panel)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Panel) $(VCCFLAGS_Panel) -p Panel -sfas
LFNT_OBJECTS_Panel=$(TEMP_PATH_Panel)/lfnt.en.vco $(TEMP_PATH_Panel)/lfnt.de.vco 

#Runtime Object
$(VCR_OBJECT_Panel) : $(VCR_SOURCE_Panel)
	$(VCC) -f '$<' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -sl en $(VCCFLAGS_Panel) -rt  -p Panel -so $(VC_STATIC_OPTIONS_Panel) -vcr 4720 -sfas
# Local resources Library rules
LIB_LOCAL_RES_Panel=$(TEMP_PATH_Panel)/localres.vca
$(LIB_LOCAL_RES_Panel) : $(TEMP_PATH_Panel)/Panel02.ccf

# Bitmap Library rules
LIB_BMP_RES_Panel=$(TEMP_PATH_Panel)/bmpres.vca
$(LIB_BMP_RES_Panel) : $(TEMP_PATH_Panel)/Panel03.ccf
$(BMGRP_OBJECTS_Panel) : $(PALFILE_Panel) $(VC_LANGUAGES_Panel)
$(BMINFO_OBJECTS_Panel) : $(PALFILE_Panel)

BUILD_FILE_Panel=$(TEMP_PATH_Panel)/BuildFiles.arg
$(BUILD_FILE_Panel) : BUILD_FILE_CLEAN_Panel $(BUILD_SOURCES_Panel)
BUILD_FILE_CLEAN_Panel:
	$(RM) /F /Q '$(BUILD_FILE_Panel)' 2>nul
#All Modules depending to this project
PROJECT_MODULES_Panel=$(AS_CPU_PATH)/Panel01.br $(AS_CPU_PATH)/Panel02.br $(AS_CPU_PATH)/Panel03.br $(FONT_MODULES_Panel) $(SHARED_MODULE)

# General Build rules

$(TARGET_FILE_Panel): $(PROJECT_MODULES_Panel) $(TEMP_PATH_Panel)/Panel.prj
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Panel) -fw '$(VCFIRMWAREPATH)' -m $(VCSTPOST) -v V1.00.0 -f '$(TEMP_PATH_Panel)/Panel.prj' -o '$@' -vc '$(VCOBJECT_Panel)' $(DEPENDENCIES_Panel) $(addprefix -d ,$(notdir $(PROJECT_MODULES_Panel:.br=)))

$(AS_CPU_PATH)/Panel01.br: $(TEMP_PATH_Panel)/Panel01.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Panel) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Panel)' -f '$<' -o '$@' $(DEPENDENCIES_Panel)

$(AS_CPU_PATH)/Panel02.br: $(TEMP_PATH_Panel)/Panel02.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Panel) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Panel)' -f '$<' -o '$@' $(DEPENDENCIES_Panel)

$(AS_CPU_PATH)/Panel03.br: $(TEMP_PATH_Panel)/Panel03.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Panel) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Panel)' -f '$<' -o '$@' $(DEPENDENCIES_Panel)

# General Build rules END
$(LIB_LOCAL_OBJ_Panel) : $(TEMP_PATH_Panel)/Panel01.ccf

# Main Module
$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Panel.vcm:
$(TEMP_PATH_Panel)/Panel.prj: $(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Panel.vcm
	$(VCDEP) -m '$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Panel.vcm' -s '$(AS_CPU_PATH)/VCShared/Shared.vcm' -p '$(AS_PATH)/AS/VC/Firmware' -c '$(AS_CPU_PATH)' -fw '$(VCFIRMWAREPATH)' -hw '$(CPUHWC)' -so $(VC_STATIC_OPTIONS_Panel) -o Panel -proj Panel
	$(VCPL) $(notdir $(PROJECT_MODULES_Panel:.br=,4)) Panel,2 -o '$@' -p Panel -vc 'Panel' -verbose 'False' -fl '$(TEMP_PATH_ROOT_Panel)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Panel.vcm' -vcr '$(VCR_SOURCE_Panel)' -prj '$(AS_PROJECT_PATH)' -warningLevel2 -sfas

# 01 Module

DEL_TARGET01_LFL_Panel=$(TEMP_PATH_Panel)\Panel01.ccf.lfl
$(TEMP_PATH_Panel)/Panel01.ccf: $(LIB_SHARED) $(SHARED_CCF) $(LIB_BMP_RES_Panel) $(TEMP_PATH_Panel)/Panel03.ccf $(LIB_LOCAL_RES_Panel) $(TEMP_PATH_Panel)/Panel02.ccf $(DIS_OBJECTS_Panel) $(PAGE_OBJECTS_Panel) $(VCS_OBJECTS_Panel) $(VCVK_OBJECTS_Panel) $(VCRT_OBJECTS_Panel) $(TPR_OBJECTS_Panel) $(TXTGRP_OBJECTS_Panel) $(LAYER_OBJECTS_Panel) $(VCR_OBJECT_Panel) $(TDC_OBJECTS_Panel) $(TRD_OBJECTS_Panel) $(TRE_OBJECTS_Panel) $(PRC_OBJECTS_Panel) $(SCR_OBJECTS_Panel)
	-@CMD /Q /C if exist "$(DEL_TARGET01_LFL_Panel)" DEL /F /Q "$(DEL_TARGET01_LFL_Panel)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_BMP_RES_Panel)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_LOCAL_RES_Panel)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(DIS_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .page -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCS_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .vcvk -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCRT_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TPR_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .txtgrp -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .layer -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCR_OBJECT_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .tdc -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .trd -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TEMP_PATH_Panel)/tre.Trend_Temperature.vco' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(SCR_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Panel -lib '$(LIB_LOCAL_OBJ_Panel)' -P '$(AS_PROJECT_PATH)' -m 'local objects' -profile 'False' -warningLevel2 -vcr 4720 -sfas
# 01 Module END

# 02 Module

DEL_TARGET02_LFL_Panel=$(TEMP_PATH_Panel)\Panel02.ccf.lfl
$(TEMP_PATH_Panel)/Panel02.ccf: $(LIB_SHARED) $(SHARED_CCF) $(LIB_BMP_RES_Panel) $(TEMP_PATH_Panel)/Panel03.ccf $(BDR_OBJECTS_Panel) $(LFNT_OBJECTS_Panel) $(CLM_OBJECTS_Panel)
	-@CMD /Q /C if exist "$(DEL_TARGET02_LFL_Panel)" DEL /F /Q "$(DEL_TARGET02_LFL_Panel)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_BMP_RES_Panel)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(BDR_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LFNT_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(CLM_OBJECTS_Panel:.vco=.vco|)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Panel -lib '$(LIB_LOCAL_RES_Panel)' -P '$(AS_PROJECT_PATH)' -m 'local resources' -profile 'False' -warningLevel2 -vcr 4720 -sfas
# 02 Module END

# 03 Module

DEL_TARGET03_LFL_Panel=$(TEMP_PATH_Panel)\Panel03.ccf.lfl
$(TEMP_PATH_Panel)/Panel03.ccf: $(LIB_SHARED) $(SHARED_CCF) $(BMGRP_OBJECTS_Panel) $(BMINFO_OBJECTS_Panel) $(PALFILE_Panel)
	-@CMD /Q /C if exist "$(DEL_TARGET03_LFL_Panel)" DEL /F /Q "$(DEL_TARGET03_LFL_Panel)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .bmgrp -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .bminfo -vcp '$(AS_PROJECT_PATH)/Logical/AsSafetySolution/Panel/Package.vcp' -temp '$(TEMP_PATH_Panel)' -prj '$(PRJ_PATH_Panel)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Panel -lib '$(LIB_BMP_RES_Panel)' -P '$(AS_PROJECT_PATH)' -m 'bitmap resources' -profile 'False' -warningLevel2 -vcr 4720 -sfas
# 03 Module END

# Post Build Steps

.PHONY : vcPostBuild_Panel

vcPostBuild_Panel :
	$(VCC) -pb -vcm '$(TEMP_PATH_Panel)/MODULEFILES.vcm' -fw '$(VCFIRMWAREPATH)' $(VCCFLAGS_Panel) -p Panel -vcr 4720 -sfas

# Post Build Steps END
