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
PALFILE_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Palette.vcr
VCCFLAGS_Visu=-server -proj Visu -vc '$(AS_PROJECT_PATH)/Logical/HMI/Visu/VCObject.vc' -prj_path '$(AS_PROJECT_PATH)' -temp_path '$(AS_TEMP_PATH)' -cfg $(AS_CONFIGURATION) -plc $(AS_PLC) -plctemp $(AS_TEMP_PLC) -cpu_path '$(AS_CPU_PATH)'
VCFIRMWARE=4.72.0
VCFIRMWAREPATH=$(AS_VC_PATH)/Firmware/V4.72.0/SG4
VCOBJECT_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/VCObject.vc
VCSTARTUP='vcstart.br'
VCLOD='vclod.br'
VCSTPOST='vcstpost.br'
TARGET_FILE_Visu=$(AS_CPU_PATH)/Visu.br
OBJ_SCOPE_Visu=HMI
PRJ_PATH_Visu=$(AS_PROJECT_PATH)
SRC_PATH_Visu=$(AS_PROJECT_PATH)/Logical/$(OBJ_SCOPE_Visu)/Visu
TEMP_PATH_Visu=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Visu
TEMP_PATH_Shared=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared
TEMP_PATH_ROOT_Visu=$(AS_TEMP_PATH)
VC_LIBRARY_LIST_Visu=$(TEMP_PATH_Visu)/libraries.vci
VC_XREF_BUILDFILE_Visu=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcxref.build
VC_XREF_CLEANFILE=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcxref.clean
VC_LANGUAGES_Visu=$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr
CPUHWC='$(TEMP_PATH_Visu)/cpuhwc.vci'
VC_STATIC_OPTIONS_Visu='$(TEMP_PATH_Visu)/vcStaticOptions.xml'
VC_STATIC_OPTIONS_Shared='$(TEMP_PATH_Shared)/vcStaticOptions.xml'
# include Shared and Font Makefile (only once)
	include $(AS_TEMP_PATH)/objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCFntDat/Font_Visu.mak
ifneq ($(VCINC),1)
	VCINC=1
	include $(AS_TEMP_PATH)/objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/VCShared.mak
endif

DEPENDENCIES_Visu=-d vcgclass -profile 'False'
DEFAULT_STYLE_SHEET_Visu='Source[local].StyleSheet[Default]'
SHARED_MODULE=$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcshared.br
LFNTFLAGS_Visu=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)'
BDRFLAGS_Visu=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)'

# Local Libs
LIB_LOCAL_OBJ_Visu=$(TEMP_PATH_Visu)/localobj.vca

# Hardware sources
PANEL_HW_OBJECT_Visu=$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Visu/dis.Hardware.vco
PANEL_HW_VCI_Visu=$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Visu/dis.Hardware.vci
PANEL_HW_SOURCE_Visu=C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Physical/MasterConfiguration_ServoRam/Hardware.hw 
DIS_OBJECTS_Visu=$(PANEL_HW_OBJECT_Visu) $(KEYMAP_OBJECTS_Visu)

# KeyMapping flags
$(TEMP_PATH_Visu)/dis.PS2-Keyboard.vco: $(AS_PROJECT_PATH)/Physical/MasterConfiguration_ServoRam/X20CP0484/VC/PS2-Keyboard.dis $(PANEL_HW_SOURCE_Visu)
	$(VCHWPP) -f '$(PANEL_HW_SOURCE_Visu)' -o '$(subst .vco,.vci,$(TEMP_PATH_Visu)/dis.PS2-Keyboard.vco)' -n Visu -d Visu -pal '$(PALFILE_Visu)' -c '$(AS_CONFIGURATION)' -p '$(AS_PLC)' -ptemp '$(AS_TEMP_PLC)' -B 'C4.72' -L '' -hw '$(CPUHWC)' -warninglevel 2 -so $(VC_STATIC_OPTIONS_Visu) -sos $(VC_STATIC_OPTIONS_Shared) -keyboard '$(AS_PROJECT_PATH)/Physical/MasterConfiguration_ServoRam/X20CP0484/VC/PS2-Keyboard.dis' -fp '$(AS_VC_PATH)/Firmware/V4.72.0/SG4' -prj '$(AS_PROJECT_PATH)' -apj 'KeePak_Bliss' -sfas -vcob '$(VCOBJECT_Visu)'
	$(VCC) -f '$(subst .vco,.vci,$@)' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -k '$(VCVK_SOURCES_Visu)' $(VCCFLAGS_Visu) -p Visu -sfas

KEYMAP_SOURCES_Visu=$(AS_PROJECT_PATH)/Physical/MasterConfiguration_ServoRam/X20CP0484/VC/PS2-Keyboard.dis 
KEYMAP_OBJECTS_Visu=$(TEMP_PATH_Visu)/dis.PS2-Keyboard.vco 

# All Source Objects
TXTGRP_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/InstantMessages.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/HeaderBar.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/PageNames.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Buttons_PageTexts.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Languages.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NumPad_Limits.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/DateTimeFormats.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/httpURL_SDM.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/MachineTypes.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NordsonFeedback.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/VacuumStyle.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/FolderStyle.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/LightstackStyle.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NordsonHeaterControl.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NordsonPumpControl.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NumaticsStyle.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/BodyDetectEnable.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Presets.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/ExecutingCommand.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/StatusID.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/InternalFacilities.txtgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Severity.txtgrp 

FNINFO_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Info.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Html_SDM.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Default.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Header.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Button.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Input.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Status.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Pads.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Calibri24.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Calibri18.fninfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Fonts/Calibri14.fninfo 

BMINFO_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_AcknowledgeReset.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Active.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_BypassOFF.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_BypassON.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Inactive.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Latched.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_NotQuit.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Quit.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Reset.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_ResetAcknowledge.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Triggered.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/ProgressBorder.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/alarm.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_checked.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_default.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_default_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_global_area.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_global_area_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/information.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_left.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_left_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_multi.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_multi_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_multi.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_multi_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_radio_selected.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_radio.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_right.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_right_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/warning.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_decrease_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_increase.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_increase_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_decrease.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/frame_header.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small_checked.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BorderSlider09x09.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Slider_BallGray.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/gauge_200x200_round_nodiv.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/gauge_NeedleRed100x11_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small_gray.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/FrameInvisible.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_off.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_on.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_ready.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_error.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BackTransparent.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_Numpad.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_Numpad_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_lower.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_upper.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric2.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_lowerPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_upperPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numericPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric2Pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadVer.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadVer_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadHor.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadHor_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_lower.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_upper.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric2.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_lowerPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_upperPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numericPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric2Pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/InputBorder.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/OutputBorder.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/LabelBoarder.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/GroupControl.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Config.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Diagnostics.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Home.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Trend.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Warning.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_control.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_control_pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BackgroundWSVGA.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Bitmap_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/LeftArrow.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/RightArrow.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/bluebutton_100x100.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greybutton_100x100.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/bluebutton_pressed_125x125.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greenbutton_pressed_125x125.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greyButton_notpressed_125x125.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redbutton_pressed_125x125.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubble.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubbleSmall.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubbleSkinny.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/clean.bminfo \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/alert.bminfo 

BMGRP_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmAcknowledgeState.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmBypassState.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmEvent.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmState.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/Borders.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/GlobalArea.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/Pads.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/msgBox.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/BlueButton.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/RedButton.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/GreenButton.bmgrp \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmActive.bmgrp 

PAGE_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page0_Main.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page10_MaintenanceMain.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page20_MaintenaceAdhesivePattern.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page40_MaintenanceVacuum.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page70_MaintenanceOthersSettings.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page60_MaintenanceAdhesiveSystem.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page100_Alarms.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page101_AlarmsHistory.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page71_MachineSetup.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page61_MaintenanceAdhesiveSet.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page51_MaintenanceFeedDrive.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page52_MaintenanceHopperDrive.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_45_MaintenanceDrives.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_15_TimerSetup.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page62_MaintAdhesivePressure.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_80_IOStatus.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page53_MaintenanceLRHopperDrive.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_81_IOStatusOperator.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page50B_MaintenanceRamDrive2.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page50A_MaintenanceRamDrive.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page72_ForceCylOutpus.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page41_Timers.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page61_Hoses3and4.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_90_DiagMain.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_91_DiagPnP.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_92_DiagRam.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_94_DiagLeftHop.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_93_DiagBodyHop.page \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_95_DiagRightHop.page 

LAYER_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/globalArea.layer \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/msgBox.layer \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/Background.layer \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/Alarm.layer \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/Navigation.layer \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/PatternSelectDialog.layer \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/PatternConfirmationDialog.layer 

VCS_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/StyleSheets/Default.vcs 

BDR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Decrease.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Decrease_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Global_Area.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Global_Area_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Increase.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Increase_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Down.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Down_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Up.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Up_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Radio.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Radio_selected.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scoll_Up.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scoll_Up_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Down.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Down_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Left.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Left_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Right.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Right_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SunkenNG.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/CheckBox_checked.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Flat_black.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Flat_grey.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/OverdriveBorder.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/ProgressBarBorder.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/RaisedInner.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Raised.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SliderBorder09.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SunkenOuter.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Sunken.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SunkenNGgray.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/FrameGlobal.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/FrameInvisible.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_KeyRingOff.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_KeyRingOn.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/OutputBorder.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/InputBorder.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/GroupControl.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/LabelBoarder.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Control.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Control_pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/TabActive.bdr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Flat_black_thin.bdr 

TPR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/NumPad.tpr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/AlphaPad.tpr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/NavigationPad_ver.tpr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/NavigationPad_hor.tpr \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/EditPad.tpr 

TDC_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/TrendData.tdc 

TRD_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/CPUTemperature.trd \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/ROOMTemperature.trd 

TRE_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/Trend_Temperature.tre 

CLM_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/OKNotOK.clm \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/ModeSelect.clm \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/BeingEdited.clm \
	$(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/GlueModButtons.clm 

VCVK_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/VirtualKeys.vcvk 

VCR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Palette.vcr 

# Runtime Object sources
VCR_OBJECT_Visu=$(TEMP_PATH_Visu)/vcrt.vco
VCR_SOURCE_Visu=$(SRC_PATH_Visu)/package.vcp
# All Source Objects END

#Panel Hardware
$(PANEL_HW_VCI_Visu): $(PANEL_HW_SOURCE_Visu) $(VC_LIBRARY_LIST_Visu) $(KEYMAP_SOURCES_Visu) $(PALFILE_Visu)
	$(VCHWPP) -f '$<' -o '$@' -n Visu -d Visu -pal '$(PALFILE_Visu)' -c '$(AS_CONFIGURATION)' -p '$(AS_PLC)' -ptemp '$(AS_TEMP_PLC)' -B 'C4.72' -L '' -verbose 'False' -profile 'False' -hw '$(CPUHWC)' -warninglevel 2 -so $(VC_STATIC_OPTIONS_Visu) -sos $(VC_STATIC_OPTIONS_Shared) -fp '$(AS_VC_PATH)/Firmware/V4.72.0/SG4' -sfas -prj '$(AS_PROJECT_PATH)' -apj 'KeePak_Bliss' -vcob '$(VCOBJECT_Visu)'

$(PANEL_HW_OBJECT_Visu): $(PANEL_HW_VCI_Visu) $(VC_LIBRARY_LIST_Visu)
	$(VCC) -f '$(subst .vco,.vci,$@)' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -k '$(VCVK_SOURCES_Visu)' $(VCCFLAGS_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


# Pages
PAGE_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/page., $(notdir $(PAGE_SOURCES_Visu:.page=.vco)))

$(TEMP_PATH_Visu)/page.Page0_Main.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page0_Main.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page10_MaintenanceMain.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page10_MaintenanceMain.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page20_MaintenaceAdhesivePattern.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page20_MaintenaceAdhesivePattern.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page40_MaintenanceVacuum.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page40_MaintenanceVacuum.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page70_MaintenanceOthersSettings.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page70_MaintenanceOthersSettings.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page60_MaintenanceAdhesiveSystem.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page60_MaintenanceAdhesiveSystem.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page100_Alarms.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page100_Alarms.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page101_AlarmsHistory.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page101_AlarmsHistory.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page71_MachineSetup.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page71_MachineSetup.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page61_MaintenanceAdhesiveSet.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page61_MaintenanceAdhesiveSet.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page51_MaintenanceFeedDrive.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page51_MaintenanceFeedDrive.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page52_MaintenanceHopperDrive.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page52_MaintenanceHopperDrive.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_45_MaintenanceDrives.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_45_MaintenanceDrives.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_15_TimerSetup.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_15_TimerSetup.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page62_MaintAdhesivePressure.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page62_MaintAdhesivePressure.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_80_IOStatus.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_80_IOStatus.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page53_MaintenanceLRHopperDrive.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page53_MaintenanceLRHopperDrive.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_81_IOStatusOperator.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_81_IOStatusOperator.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page50B_MaintenanceRamDrive2.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page50B_MaintenanceRamDrive2.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page50A_MaintenanceRamDrive.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page50A_MaintenanceRamDrive.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page72_ForceCylOutpus.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page72_ForceCylOutpus.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page41_Timers.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page41_Timers.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page61_Hoses3and4.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page61_Hoses3and4.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_90_DiagMain.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_90_DiagMain.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_91_DiagPnP.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_91_DiagPnP.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_92_DiagRam.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_92_DiagRam.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_94_DiagLeftHop.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_94_DiagLeftHop.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_93_DiagBodyHop.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_93_DiagBodyHop.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/page.Page_95_DiagRightHop.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Pages/Page_95_DiagRightHop.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Default.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Pages END




# Stylesheets
VCS_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/vcs., $(notdir $(VCS_SOURCES_Visu:.vcs=.vco)))

$(TEMP_PATH_Visu)/vcs.Default.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/StyleSheets/Default.vcs
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Stylesheets END




# Layers
LAYER_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/layer., $(notdir $(LAYER_SOURCES_Visu:.layer=.vco)))

$(TEMP_PATH_Visu)/layer.globalArea.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/globalArea.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/layer.msgBox.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/msgBox.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/layer.Background.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/Background.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/layer.Alarm.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/Alarm.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/layer.Navigation.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/Navigation.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/layer.PatternSelectDialog.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/PatternSelectDialog.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/layer.PatternConfirmationDialog.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Layers/PatternConfirmationDialog.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Layers END




# Virtual Keys
VCVK_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/vcvk., $(notdir $(VCVK_SOURCES_Visu:.vcvk=.vco)))

$(TEMP_PATH_Visu)/vcvk.VirtualKeys.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/VirtualKeys.vcvk
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas

$(VCVK_OBJECTS_Visu): $(VC_LANGUAGES_Visu)

#Virtual Keys END




# Touch Pads
TPR_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/tpr., $(notdir $(TPR_SOURCES_Visu:.tpr=.vco)))

$(TEMP_PATH_Visu)/tpr.NumPad.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/NumPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/HMI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/tpr.AlphaPad.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/AlphaPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/HMI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/tpr.NavigationPad_ver.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/NavigationPad_ver.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/HMI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/tpr.NavigationPad_hor.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/NavigationPad_hor.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/HMI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/tpr.EditPad.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TouchPads/EditPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/HMI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Touch Pads END




# Text Groups
TXTGRP_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/txtgrp., $(notdir $(TXTGRP_SOURCES_Visu:.txtgrp=.vco)))

$(TEMP_PATH_Visu)/txtgrp.InstantMessages.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/InstantMessages.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.HeaderBar.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/HeaderBar.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.PageNames.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/PageNames.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.Buttons_PageTexts.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Buttons_PageTexts.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.Languages.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Languages.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.NumPad_Limits.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NumPad_Limits.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.DateTimeFormats.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/DateTimeFormats.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.httpURL_SDM.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/httpURL_SDM.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.MachineTypes.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/MachineTypes.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.NordsonFeedback.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NordsonFeedback.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.VacuumStyle.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/VacuumStyle.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.FolderStyle.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/FolderStyle.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.LightstackStyle.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/LightstackStyle.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.NordsonHeaterControl.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NordsonHeaterControl.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.NordsonPumpControl.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NordsonPumpControl.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.NumaticsStyle.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/NumaticsStyle.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.BodyDetectEnable.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/BodyDetectEnable.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.Presets.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Presets.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.ExecutingCommand.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/ExecutingCommand.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.StatusID.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/StatusID.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.InternalFacilities.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/InternalFacilities.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/txtgrp.Severity.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/TextGroups/Severity.txtgrp $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Text Groups END




# BitmapGroups
BMGRP_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/bmgrp., $(notdir $(BMGRP_SOURCES_Visu:.bmgrp=.vco)))

$(TEMP_PATH_Visu)/bmgrp.AlarmAcknowledgeState.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmAcknowledgeState.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.AlarmBypassState.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmBypassState.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.AlarmEvent.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmEvent.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.AlarmState.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmState.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.Borders.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/Borders.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.GlobalArea.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/GlobalArea.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.Pads.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/Pads.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.msgBox.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/msgBox.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.BlueButton.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/BlueButton.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.RedButton.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/RedButton.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.GreenButton.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/GreenButton.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bmgrp.AlarmActive.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/BitmapGroups/AlarmActive.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#BitmapGroups END




# Bitmaps
BMINFO_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/bminfo., $(notdir $(BMINFO_SOURCES_Visu:.bminfo=.vco)))

$(TEMP_PATH_Visu)/bminfo.Alarm_AcknowledgeReset.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_AcknowledgeReset.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_AcknowledgeReset.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_Active.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Active.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Active.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_BypassOFF.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_BypassOFF.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_BypassOFF.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_BypassON.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_BypassON.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_BypassON.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_Inactive.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Inactive.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Inactive.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_Latched.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Latched.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Latched.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_NotQuit.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_NotQuit.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_NotQuit.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_Quit.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Quit.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Quit.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_Reset.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Reset.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Reset.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_ResetAcknowledge.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_ResetAcknowledge.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_ResetAcknowledge.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Alarm_Triggered.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Triggered.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Alarm_Triggered.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.ProgressBorder.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/ProgressBorder.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/ProgressBorder.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.alarm.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/alarm.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/alarm.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.checkbox.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.checkbox_checked.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_checked.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_checked.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_default.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_default.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_default.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_default_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_default_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_default_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_down.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_global_area.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_global_area.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_global_area.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_global_area_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_global_area_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_global_area_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.information.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/information.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/information.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_left.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_left.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_left.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_left_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_left_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_left_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_down_multi.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_multi.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_multi.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_down_multi_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_multi_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_multi_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_up_multi.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_multi.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_multi.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_up_multi_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_multi_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_multi_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_radio_selected.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_radio_selected.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_radio_selected.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_radio.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_radio.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_radio.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_right.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_right.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_right.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_right_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_right_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_right_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_up.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_up_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_up_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.warning.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/warning.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/warning.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_decrease_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_decrease_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_decrease_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_increase.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_increase.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_increase.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_increase_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_increase_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_increase_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_decrease.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_decrease.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_decrease.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.frame_header.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/frame_header.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/frame_header.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.checkbox_small.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.checkbox_small_checked.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small_checked.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small_checked.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.BorderSlider09x09.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BorderSlider09x09.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BorderSlider09x09.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Slider_BallGray.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Slider_BallGray.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Slider_BallGray.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.gauge_200x200_round_nodiv.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/gauge_200x200_round_nodiv.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/gauge_200x200_round_nodiv.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.gauge_NeedleRed100x11_1.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/gauge_NeedleRed100x11_1.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/gauge_NeedleRed100x11_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.checkbox_small_gray.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small_gray.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/checkbox_small_gray.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.FrameInvisible.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/FrameInvisible.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/FrameInvisible.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_off.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_off.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_off.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_on.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_on.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_on.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_ready.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_ready.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_ready.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_error.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_error.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_error.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.BackTransparent.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BackTransparent.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BackTransparent.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_Numpad.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_Numpad.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_Numpad.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_Numpad_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_Numpad_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_Numpad_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_lower.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_lower.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_lower.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_upper.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_upper.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_upper.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_numeric.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_numeric2.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric2.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_lowerPressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_lowerPressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_lowerPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_upperPressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_upperPressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_upperPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_numericPressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numericPressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numericPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_AlphaPad_numeric2Pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric2Pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_AlphaPad_numeric2Pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_ListPadVer.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadVer.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadVer.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_ListPadVer_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadVer_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadVer_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_ListPadHor.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadHor.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadHor.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_ListPadHor_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadHor_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_ListPadHor_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_lower.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_lower.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_lower.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_upper.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_upper.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_upper.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_numeric.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_numeric2.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric2.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_lowerPressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_lowerPressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_lowerPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_upperPressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_upperPressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_upperPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_numericPressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numericPressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numericPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Key_EditPad_numeric2Pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric2Pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Key_EditPad_numeric2Pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.InputBorder.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/InputBorder.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/InputBorder.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_scroll_down_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_scroll_down_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.OutputBorder.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/OutputBorder.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/OutputBorder.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.LabelBoarder.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/LabelBoarder.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/LabelBoarder.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.GroupControl.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/GroupControl.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/GroupControl.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Img_Config.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Config.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Config.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Img_Diagnostics.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Diagnostics.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Diagnostics.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Img_Home.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Home.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Home.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Img_Trend.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Trend.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Trend.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Img_Warning.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Warning.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Img_Warning.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_control.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_control.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_control.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.button_control_pressed.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_control_pressed.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/button_control_pressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.BackgroundWSVGA.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BackgroundWSVGA.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/BackgroundWSVGA.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.Bitmap_1.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Bitmap_1.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/Bitmap_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.LeftArrow.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/LeftArrow.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/LeftArrow.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.RightArrow.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/RightArrow.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/RightArrow.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.bluebutton_100x100.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/bluebutton_100x100.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/bluebutton_100x100.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.greybutton_100x100.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greybutton_100x100.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greybutton_100x100.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.bluebutton_pressed_125x125.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/bluebutton_pressed_125x125.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/bluebutton_pressed_125x125.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.greenbutton_pressed_125x125.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greenbutton_pressed_125x125.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greenbutton_pressed_125x125.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.greyButton_notpressed_125x125.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greyButton_notpressed_125x125.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/greyButton_notpressed_125x125.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.redbutton_pressed_125x125.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redbutton_pressed_125x125.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redbutton_pressed_125x125.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.redBubble.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubble.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubble.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.redBubbleSmall.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubbleSmall.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubbleSmall.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.redBubbleSkinny.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubbleSkinny.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/redBubbleSkinny.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.clean.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/clean.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/clean.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/bminfo.alert.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/alert.bminfo $(AS_PROJECT_PATH)/Logical/HMI/Visu/Bitmaps/alert.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Bitmaps END




# Trend Configuration
TRE_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/tre., $(notdir $(TRE_SOURCES_Visu:.tre=.vco)))

$(TEMP_PATH_Visu)/tre.Trend_Temperature.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/Trend_Temperature.tre
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Trend Configuration END




# Trend Data
TRD_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/trd., $(notdir $(TRD_SOURCES_Visu:.trd=.vco)))

$(TEMP_PATH_Visu)/trd.CPUTemperature.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/CPUTemperature.trd
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/trd.ROOMTemperature.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/ROOMTemperature.trd
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Trend Data END




# Trend Data Configuration
TDC_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/tdc., $(notdir $(TDC_SOURCES_Visu:.tdc=.vco)))

$(TEMP_PATH_Visu)/tdc.TrendData.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/Trends/TrendData.tdc
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#Trend Data Configuration END




# ColorMap Table
CLM_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/clm., $(notdir $(CLM_SOURCES_Visu:.clm=.vco)))

$(TEMP_PATH_Visu)/clm.OKNotOK.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/OKNotOK.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/clm.ModeSelect.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/ModeSelect.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/clm.BeingEdited.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/BeingEdited.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


$(TEMP_PATH_Visu)/clm.GlueModButtons.vco: $(AS_PROJECT_PATH)/Logical/HMI/Visu/ColorMaps/GlueModButtons.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas


#ColorMap Table END


#
# Borders
#
BDR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Decrease.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Decrease_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Global_Area.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Global_Area_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Increase.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Increase_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Down.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Down_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Up.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Multi_Scroll_Up_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Radio.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Radio_selected.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scoll_Up.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scoll_Up_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Down.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Down_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Left.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Left_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Right.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Scroll_Right_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SunkenNG.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/CheckBox_checked.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Flat_black.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Flat_grey.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/OverdriveBorder.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/ProgressBarBorder.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/RaisedInner.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Raised.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SliderBorder09.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SunkenOuter.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Sunken.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/SunkenNGgray.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/FrameGlobal.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/FrameInvisible.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_KeyRingOff.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_KeyRingOn.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/OutputBorder.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/InputBorder.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/GroupControl.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/LabelBoarder.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Control.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Button_Control_pressed.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/TabActive.bdr $(AS_PROJECT_PATH)/Logical/HMI/Visu/Borders/Flat_black_thin.bdr 
BDR_OBJECTS_Visu=$(TEMP_PATH_Visu)/bdr.Bordermanager.vco
$(TEMP_PATH_Visu)/bdr.Bordermanager.vco: $(BDR_SOURCES_Visu)
	$(VCC) -f '$<' -o '$@' -pkg '$(SRC_PATH_Visu)' $(BDRFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu$(SRC_PATH_Visu)
#
# Logical fonts
#
$(TEMP_PATH_Visu)/lfnt.en.vco: $(TEMP_PATH_Visu)/en.lfnt $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu -sfas
$(TEMP_PATH_Visu)/lfnt.de.vco: $(TEMP_PATH_Visu)/de.lfnt $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu -sfas
LFNT_OBJECTS_Visu=$(TEMP_PATH_Visu)/lfnt.en.vco $(TEMP_PATH_Visu)/lfnt.de.vco 

#Runtime Object
$(VCR_OBJECT_Visu) : $(VCR_SOURCE_Visu)
	$(VCC) -f '$<' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -sl en $(VCCFLAGS_Visu) -rt  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4720 -sfas
# Local resources Library rules
LIB_LOCAL_RES_Visu=$(TEMP_PATH_Visu)/localres.vca
$(LIB_LOCAL_RES_Visu) : $(TEMP_PATH_Visu)/Visu02.ccf

# Bitmap Library rules
LIB_BMP_RES_Visu=$(TEMP_PATH_Visu)/bmpres.vca
$(LIB_BMP_RES_Visu) : $(TEMP_PATH_Visu)/Visu03.ccf
$(BMGRP_OBJECTS_Visu) : $(PALFILE_Visu) $(VC_LANGUAGES_Visu)
$(BMINFO_OBJECTS_Visu) : $(PALFILE_Visu)

BUILD_FILE_Visu=$(TEMP_PATH_Visu)/BuildFiles.arg
$(BUILD_FILE_Visu) : BUILD_FILE_CLEAN_Visu $(BUILD_SOURCES_Visu)
BUILD_FILE_CLEAN_Visu:
	$(RM) /F /Q '$(BUILD_FILE_Visu)' 2>nul
#All Modules depending to this project
PROJECT_MODULES_Visu=$(AS_CPU_PATH)/Visu01.br $(AS_CPU_PATH)/Visu02.br $(AS_CPU_PATH)/Visu03.br $(FONT_MODULES_Visu) $(SHARED_MODULE)

# General Build rules

$(TARGET_FILE_Visu): $(PROJECT_MODULES_Visu) $(TEMP_PATH_Visu)/Visu.prj
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCSTPOST) -v V1.00.0 -f '$(TEMP_PATH_Visu)/Visu.prj' -o '$@' -vc '$(VCOBJECT_Visu)' $(DEPENDENCIES_Visu) $(addprefix -d ,$(notdir $(PROJECT_MODULES_Visu:.br=)))

$(AS_CPU_PATH)/Visu01.br: $(TEMP_PATH_Visu)/Visu01.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Visu)' -f '$<' -o '$@' $(DEPENDENCIES_Visu)

$(AS_CPU_PATH)/Visu02.br: $(TEMP_PATH_Visu)/Visu02.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Visu)' -f '$<' -o '$@' $(DEPENDENCIES_Visu)

$(AS_CPU_PATH)/Visu03.br: $(TEMP_PATH_Visu)/Visu03.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Visu)' -f '$<' -o '$@' $(DEPENDENCIES_Visu)

# General Build rules END
$(LIB_LOCAL_OBJ_Visu) : $(TEMP_PATH_Visu)/Visu01.ccf

# Main Module
$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm:
$(TEMP_PATH_Visu)/Visu.prj: $(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm
	$(VCDEP) -m '$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm' -s '$(AS_CPU_PATH)/VCShared/Shared.vcm' -p '$(AS_PATH)/AS/VC/Firmware' -c '$(AS_CPU_PATH)' -fw '$(VCFIRMWAREPATH)' -hw '$(CPUHWC)' -so $(VC_STATIC_OPTIONS_Visu) -o Visu -proj Visu
	$(VCPL) $(notdir $(PROJECT_MODULES_Visu:.br=,4)) Visu,2 -o '$@' -p Visu -vc 'Visu' -verbose 'False' -fl '$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm' -vcr '$(VCR_SOURCE_Visu)' -prj '$(AS_PROJECT_PATH)' -warningLevel2 -sfas

# 01 Module

DEL_TARGET01_LFL_Visu=$(TEMP_PATH_Visu)\Visu01.ccf.lfl
$(TEMP_PATH_Visu)/Visu01.ccf: $(LIB_SHARED) $(SHARED_CCF) $(LIB_BMP_RES_Visu) $(TEMP_PATH_Visu)/Visu03.ccf $(LIB_LOCAL_RES_Visu) $(TEMP_PATH_Visu)/Visu02.ccf $(DIS_OBJECTS_Visu) $(PAGE_OBJECTS_Visu) $(VCS_OBJECTS_Visu) $(VCVK_OBJECTS_Visu) $(VCRT_OBJECTS_Visu) $(TPR_OBJECTS_Visu) $(TXTGRP_OBJECTS_Visu) $(LAYER_OBJECTS_Visu) $(VCR_OBJECT_Visu) $(TDC_OBJECTS_Visu) $(TRD_OBJECTS_Visu) $(TRE_OBJECTS_Visu) $(PRC_OBJECTS_Visu) $(SCR_OBJECTS_Visu)
	-@CMD /Q /C if exist "$(DEL_TARGET01_LFL_Visu)" DEL /F /Q "$(DEL_TARGET01_LFL_Visu)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_BMP_RES_Visu)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_LOCAL_RES_Visu)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(DIS_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .page -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCS_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .vcvk -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCRT_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TPR_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .txtgrp -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .layer -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCR_OBJECT_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .tdc -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .trd -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TEMP_PATH_Visu)/tre.Trend_Temperature.vco' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(SCR_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Visu -lib '$(LIB_LOCAL_OBJ_Visu)' -P '$(AS_PROJECT_PATH)' -m 'local objects' -profile 'False' -warningLevel2 -vcr 4720 -sfas
# 01 Module END

# 02 Module

DEL_TARGET02_LFL_Visu=$(TEMP_PATH_Visu)\Visu02.ccf.lfl
$(TEMP_PATH_Visu)/Visu02.ccf: $(LIB_SHARED) $(SHARED_CCF) $(LIB_BMP_RES_Visu) $(TEMP_PATH_Visu)/Visu03.ccf $(BDR_OBJECTS_Visu) $(LFNT_OBJECTS_Visu) $(CLM_OBJECTS_Visu)
	-@CMD /Q /C if exist "$(DEL_TARGET02_LFL_Visu)" DEL /F /Q "$(DEL_TARGET02_LFL_Visu)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_BMP_RES_Visu)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(BDR_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LFNT_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(CLM_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Visu -lib '$(LIB_LOCAL_RES_Visu)' -P '$(AS_PROJECT_PATH)' -m 'local resources' -profile 'False' -warningLevel2 -vcr 4720 -sfas
# 02 Module END

# 03 Module

DEL_TARGET03_LFL_Visu=$(TEMP_PATH_Visu)\Visu03.ccf.lfl
$(TEMP_PATH_Visu)/Visu03.ccf: $(LIB_SHARED) $(SHARED_CCF) $(BMGRP_OBJECTS_Visu) $(BMINFO_OBJECTS_Visu) $(PALFILE_Visu)
	-@CMD /Q /C if exist "$(DEL_TARGET03_LFL_Visu)" DEL /F /Q "$(DEL_TARGET03_LFL_Visu)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .bmgrp -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .bminfo -vcp '$(AS_PROJECT_PATH)/Logical/HMI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Visu -lib '$(LIB_BMP_RES_Visu)' -P '$(AS_PROJECT_PATH)' -m 'bitmap resources' -profile 'False' -warningLevel2 -vcr 4720 -sfas
# 03 Module END

# Post Build Steps

.PHONY : vcPostBuild_Visu

vcPostBuild_Visu :
	$(VCC) -pb -vcm '$(TEMP_PATH_Visu)/MODULEFILES.vcm' -fw '$(VCFIRMWAREPATH)' $(VCCFLAGS_Visu) -p Visu -vcr 4720 -sfas

# Post Build Steps END
