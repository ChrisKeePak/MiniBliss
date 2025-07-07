export AS_SYSTEM_PATH := C:/BrAutomation/AS/System
export AS_BIN_PATH := C:/BrAutomation/AS47/bin-en
export AS_INSTALL_PATH := C:/BrAutomation/AS47
export AS_PATH := C:/BrAutomation/AS47
export AS_VC_PATH := C:/BrAutomation/AS47/AS/VC
export AS_GNU_INST_PATH := C:/BrAutomation/AS47/AS/GnuInst/V4.1.2
export AS_STATIC_ARCHIVES_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Archives/MasterConfiguration_ServoRam/X20CP0484
export AS_CPU_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484
export AS_CPU_PATH_2 := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484
export AS_TEMP_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp
export AS_BINARIES_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Binaries
export AS_PROJECT_CPU_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Physical/MasterConfiguration_ServoRam/X20CP0484
export AS_PROJECT_CONFIG_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Physical/MasterConfiguration_ServoRam
export AS_PROJECT_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked
export AS_PROJECT_NAME := KeePak_Bliss_Reworked
export AS_PLC := X20CP0484
export AS_TEMP_PLC := X20CP0484
export AS_USER_NAME := Crims
export AS_CONFIGURATION := MasterConfiguration_ServoRam
export AS_COMPANY_NAME := \ 
export AS_VERSION := 4.7.7.74\ SP


default: \
	$(AS_CPU_PATH)/Visu.br \
	$(AS_CPU_PATH)/Panel.br \



include $(AS_CPU_PATH)/Visu/Visu.mak
include $(AS_CPU_PATH)/Panel/Panel.mak
