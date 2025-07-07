SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\dotnet\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\NVIDIA Corporation\NVIDIA app\NvDLISR;C:\Users\Crims\AppData\Local\Microsoft\WindowsApps;C:\Users\Crims\AppData\Local\GitHubDesktop\bin;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\Crims\AppData\Local\Microsoft\WindowsApps;C:\Users\Crims\AppData\Local\GitHubDesktop\bin;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode
export AS_BUILD_MODE := Rebuild
export AS_VERSION := 4.7.7.74 SP
export AS_COMPANY_NAME :=  
export AS_USER_NAME := Crims
export AS_PATH := C:/BrAutomation/AS47
export AS_BIN_PATH := C:/BrAutomation/AS47/bin-en
export AS_PROJECT_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked
export AS_PROJECT_NAME := KeePak_Bliss_Reworked
export AS_SYSTEM_PATH := C:/BrAutomation/AS/System
export AS_VC_PATH := C:/BrAutomation/AS47/AS/VC
export AS_TEMP_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Temp
export AS_CONFIGURATION := MasterConfiguration_ServoRam
export AS_BINARIES_PATH := C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_Reworked/Binaries
export AS_GNU_INST_PATH := C:/BrAutomation/AS47/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := $(AS_GNU_INST_PATH)/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/BrAutomation/AS47/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := $(AS_GNU_INST_PATH_SUB_MAKE)/bin
export AS_INSTALL_PATH := C:/BrAutomation/AS47
export WIN32_AS_PATH := "C:\BrAutomation\AS47"
export WIN32_AS_BIN_PATH := "C:\BrAutomation\AS47\bin-en"
export WIN32_AS_PROJECT_PATH := "C:\Users\Crims\OneDrive\Documents\GitHub\MiniBliss\KeePak_Bliss_Reworked"
export WIN32_AS_SYSTEM_PATH := "C:\BrAutomation\AS\System"
export WIN32_AS_VC_PATH := "C:\BrAutomation\AS47\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\Users\Crims\OneDrive\Documents\GitHub\MiniBliss\KeePak_Bliss_Reworked\Temp"
export WIN32_AS_BINARIES_PATH := "C:\Users\Crims\OneDrive\Documents\GitHub\MiniBliss\KeePak_Bliss_Reworked\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\BrAutomation\AS47\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "C:\BrAutomation\AS47"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/KeePak_Bliss_Reworked.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'Rebuild'   

