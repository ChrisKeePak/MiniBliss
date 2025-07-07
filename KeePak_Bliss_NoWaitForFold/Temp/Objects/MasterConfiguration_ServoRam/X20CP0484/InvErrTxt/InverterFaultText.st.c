#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/InvErrTxt/InverterFaultTextst.h"
#line 1 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Libraries/InvErrTxt/InverterFaultText.nodebug"
#line 13 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Libraries/InvErrTxt/InverterFaultText.st"
void InverterFaultText(struct InverterFaultText* inst){struct InverterFaultText* __inst__=inst;{






if((((unsigned long)(unsigned char)__inst__->isInitialized==(unsigned long)(unsigned char)0))){

(__inst__->isInitialized=1);

(__inst__->PreviousFault=-1);

(__inst__->LastFault=0);

(__inst__->Status=1);


(__inst__->S44FaultTable[0].FaultNumber=0);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[0].FaultDescription)),((unsigned long)(&"nOF - No Fault Present")));

(__inst__->S44FaultTable[1].FaultNumber=1);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[1].FaultDescription)),((unsigned long)(&"InF - Calibration Error")));

(__inst__->S44FaultTable[2].FaultNumber=3);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[2].FaultDescription)),((unsigned long)(&"CFF - Incorrect Configuration")));

(__inst__->S44FaultTable[3].FaultNumber=4);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[3].FaultDescription)),((unsigned long)(&"CFI - Invalid Configuration")));

(__inst__->S44FaultTable[4].FaultNumber=5);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[4].FaultDescription)),((unsigned long)(&"SLF1 - ModBus Communication Fault")));

(__inst__->S44FaultTable[5].FaultNumber=9);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[5].FaultDescription)),((unsigned long)(&"OCF - Over Current Fault")));

(__inst__->S44FaultTable[6].FaultNumber=10);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[6].FaultDescription)),((unsigned long)(&"CrF1 - Precharge Fault")));

(__inst__->S44FaultTable[7].FaultNumber=16);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[7].FaultDescription)),((unsigned long)(&"OHF - Drive Overheat")));

(__inst__->S44FaultTable[8].FaultNumber=17);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[8].FaultDescription)),((unsigned long)(&"OLF - Motor Overload")));

(__inst__->S44FaultTable[9].FaultNumber=18);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[9].FaultDescription)),((unsigned long)(&"ObF - Overbraking")));

(__inst__->S44FaultTable[10].FaultNumber=19);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[10].FaultDescription)),((unsigned long)(&"OSF - Mains Overvoltage")));

(__inst__->S44FaultTable[11].FaultNumber=20);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[11].FaultDescription)),((unsigned long)(&"OPF1 - 1 Output Phase Loss")));

(__inst__->S44FaultTable[12].FaultNumber=21);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[12].FaultDescription)),((unsigned long)(&"PHF - Input Phase Loss")));

(__inst__->S44FaultTable[13].FaultNumber=22);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[13].FaultDescription)),((unsigned long)(&"USF - Undervoltage")));

(__inst__->S44FaultTable[14].FaultNumber=23);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[14].FaultDescription)),((unsigned long)(&"SCF1 - Motor Short Circuit")));

(__inst__->S44FaultTable[15].FaultNumber=24);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[15].FaultDescription)),((unsigned long)(&"SOF - Overspeed")));

(__inst__->S44FaultTable[16].FaultNumber=25);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[16].FaultDescription)),((unsigned long)(&"tnF - Auto-tuning Fault")));

(__inst__->S44FaultTable[17].FaultNumber=26);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[17].FaultDescription)),((unsigned long)(&"InF1 - Rating Error")));

(__inst__->S44FaultTable[18].FaultNumber=27);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[18].FaultDescription)),((unsigned long)(&"InF2 - Power Calibration")));

(__inst__->S44FaultTable[19].FaultNumber=28);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[19].FaultDescription)),((unsigned long)(&"InF3 - Internal Serial Link")));

(__inst__->S44FaultTable[20].FaultNumber=29);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[20].FaultDescription)),((unsigned long)(&"InF4 - Internal Mfg area")));

(__inst__->S44FaultTable[21].FaultNumber=32);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[21].FaultDescription)),((unsigned long)(&"SCF3 - Ground Short Circuit")));

(__inst__->S44FaultTable[22].FaultNumber=33);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[22].FaultDescription)),((unsigned long)(&"OPF2 - 3 Output Phase Loss")));

(__inst__->S44FaultTable[23].FaultNumber=42);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[23].FaultDescription)),((unsigned long)(&"SLF2 - PowerSuite Communication")));

(__inst__->S44FaultTable[24].FaultNumber=45);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[24].FaultDescription)),((unsigned long)(&"SLF3 - HMI Communication Fault")));

(__inst__->S44FaultTable[25].FaultNumber=51);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[25].FaultDescription)),((unsigned long)(&"InF9 - Internal I measure")));

(__inst__->S44FaultTable[26].FaultNumber=53);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[26].FaultDescription)),((unsigned long)(&"InFb - Internal th. sensor")));

(__inst__->S44FaultTable[27].FaultNumber=54);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[27].FaultDescription)),((unsigned long)(&"tJF - IGBT Overheat")));

(__inst__->S44FaultTable[28].FaultNumber=55);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[28].FaultDescription)),((unsigned long)(&"SCF4 - IGBT Short Circuit")));

(__inst__->S44FaultTable[29].FaultNumber=56);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[29].FaultDescription)),((unsigned long)(&"SCF5 - Motor Short Circuit")));

(__inst__->S44FaultTable[30].FaultNumber=69);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[30].FaultDescription)),((unsigned long)(&"InFE - Internal CPU Fault")));

(__inst__->S44FaultTable[31].FaultNumber=77);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[31].FaultDescription)),((unsigned long)(&"CFI2")));

(__inst__->S44FaultTable[32].FaultNumber=100);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[32].FaultDescription)),((unsigned long)(&"ULF - Underload Fault")));

(__inst__->S44FaultTable[33].FaultNumber=101);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[33].FaultDescription)),((unsigned long)(&"OLC - Overload Fault")));

(__inst__->S44FaultTable[34].FaultNumber=106);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[34].FaultDescription)),((unsigned long)(&"LFF1")));

(__inst__->S44FaultTable[35].FaultNumber=253);
__AS__STRCPY(((unsigned long)(&__inst__->S44FaultTable[35].FaultDescription)),((unsigned long)(&"XXXX")));


(__inst__->X64FaultTable[0].FaultNumber=0);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[0].FaultDescription)),((unsigned long)(&"nOF - No Fault Code")));

(__inst__->X64FaultTable[1].FaultNumber=3);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[1].FaultDescription)),((unsigned long)(&"CFF - Incorrect Configuration")));

(__inst__->X64FaultTable[2].FaultNumber=4);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[2].FaultDescription)),((unsigned long)(&"CFI - Invalid Configuration")));

(__inst__->X64FaultTable[3].FaultNumber=5);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[3].FaultDescription)),((unsigned long)(&"SLF - Communication Fault")));

(__inst__->X64FaultTable[4].FaultNumber=6);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[4].FaultDescription)),((unsigned long)(&"ILF - Internal Communication Interuption")));

(__inst__->X64FaultTable[5].FaultNumber=7);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[5].FaultDescription)),((unsigned long)(&"CnF - Communication Option Card")));

(__inst__->X64FaultTable[6].FaultNumber=8);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[6].FaultDescription)),((unsigned long)(&"EPF - External Fault")));

(__inst__->X64FaultTable[7].FaultNumber=9);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[7].FaultDescription)),((unsigned long)(&"OCF - Overcurrent")));

(__inst__->X64FaultTable[8].FaultNumber=10);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[8].FaultDescription)),((unsigned long)(&"CrF - Capacitor pre-charge")));

(__inst__->X64FaultTable[9].FaultNumber=13);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[9].FaultDescription)),((unsigned long)(&"LFF - 4 - 20 mA loss")));

(__inst__->X64FaultTable[10].FaultNumber=16);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[10].FaultDescription)),((unsigned long)(&"OHF - Drive Overheating")));

(__inst__->X64FaultTable[11].FaultNumber=17);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[11].FaultDescription)),((unsigned long)(&"OLF - Motor Overload")));

(__inst__->X64FaultTable[12].FaultNumber=18);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[12].FaultDescription)),((unsigned long)(&"ObF - DC Bus Overvoltage")));

(__inst__->X64FaultTable[13].FaultNumber=19);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[13].FaultDescription)),((unsigned long)(&"OSF - Line Supply Overvoltage")));

(__inst__->X64FaultTable[14].FaultNumber=20);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[14].FaultDescription)),((unsigned long)(&"OPF - Motor Phase Lose")));

(__inst__->X64FaultTable[15].FaultNumber=21);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[15].FaultDescription)),((unsigned long)(&"PHF - Line Phase Loss")));

(__inst__->X64FaultTable[16].FaultNumber=22);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[16].FaultDescription)),((unsigned long)(&"USF - Line Supply Undervoltage")));

(__inst__->X64FaultTable[17].FaultNumber=23);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[17].FaultDescription)),((unsigned long)(&"OCF - Motor Short Circuit (phase to phase)")));

(__inst__->X64FaultTable[18].FaultNumber=24);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[18].FaultDescription)),((unsigned long)(&"SOF - Motor Overspeed")));

(__inst__->X64FaultTable[19].FaultNumber=25);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[19].FaultDescription)),((unsigned long)(&"tnF - Auto-tuning was unsuccessful")));

(__inst__->X64FaultTable[20].FaultNumber=26);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[20].FaultDescription)),((unsigned long)(&"IF1 - Unknow rating")));

(__inst__->X64FaultTable[21].FaultNumber=27);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[21].FaultDescription)),((unsigned long)(&"IF2 - MMI card")));

(__inst__->X64FaultTable[22].FaultNumber=28);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[22].FaultDescription)),((unsigned long)(&"IF3 - MMI communication")));

(__inst__->X64FaultTable[23].FaultNumber=29);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[23].FaultDescription)),((unsigned long)(&"IF4 - Industrial EEPROM memory")));

(__inst__->X64FaultTable[24].FaultNumber=30);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[24].FaultDescription)),((unsigned long)(&"EEF - EEPROM memory")));

(__inst__->X64FaultTable[25].FaultNumber=31);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[25].FaultDescription)),((unsigned long)(&"OCF - Impeding Short Circuit")));

(__inst__->X64FaultTable[26].FaultNumber=32);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[26].FaultDescription)),((unsigned long)(&"SCF - Motor Short Circuit (to ground)")));

(__inst__->X64FaultTable[27].FaultNumber=33);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[27].FaultDescription)),((unsigned long)(&"OPF - Motor Phase Loss - 3 phases")));

(__inst__->X64FaultTable[28].FaultNumber=34);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[28].FaultDescription)),((unsigned long)(&"COF - Communication Interuption")));

(__inst__->X64FaultTable[29].FaultNumber=35);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[29].FaultDescription)),((unsigned long)(&"bLF - Brake Control")));

(__inst__->X64FaultTable[30].FaultNumber=36);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[30].FaultDescription)),((unsigned long)(&"OCF - Power Module on 15 kW drive")));

(__inst__->X64FaultTable[31].FaultNumber=55);
__AS__STRCPY(((unsigned long)(&__inst__->X64FaultTable[31].FaultDescription)),((unsigned long)(&"SCF - Power Module or Motor Short Circuit")));


(__inst__->P84FaultTable[0].FaultNumber=0);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[0].FaultDescription)),((unsigned long)(&"nOF - No Fault")));

(__inst__->P84FaultTable[1].FaultNumber=1);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[1].FaultDescription)),((unsigned long)(&"InF - Calibration Error")));

(__inst__->P84FaultTable[2].FaultNumber=2);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[2].FaultDescription)),((unsigned long)(&"EEF1 - Control EEPROM")));

(__inst__->P84FaultTable[3].FaultNumber=3);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[3].FaultDescription)),((unsigned long)(&"CFF - Incorrect Configuration")));

(__inst__->P84FaultTable[4].FaultNumber=4);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[4].FaultDescription)),((unsigned long)(&"CFI - Invalid Configuration")));

(__inst__->P84FaultTable[5].FaultNumber=5);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[5].FaultDescription)),((unsigned long)(&"SLF1 - Communication Error")));

(__inst__->P84FaultTable[6].FaultNumber=6);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[6].FaultDescription)),((unsigned long)(&"ILF - Internal Communication Link")));

(__inst__->P84FaultTable[7].FaultNumber=7);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[7].FaultDescription)),((unsigned long)(&"CnF - Communication Network")));

(__inst__->P84FaultTable[8].FaultNumber=8);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[8].FaultDescription)),((unsigned long)(&"EPF1 - External Fault")));

(__inst__->P84FaultTable[9].FaultNumber=9);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[9].FaultDescription)),((unsigned long)(&"OCF - Overcurrent")));

(__inst__->P84FaultTable[10].FaultNumber=10);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[10].FaultDescription)),((unsigned long)(&"CrF - Precharge")));

(__inst__->P84FaultTable[11].FaultNumber=11);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[11].FaultDescription)),((unsigned long)(&"SPF - Speed Feedback loss")));

(__inst__->P84FaultTable[12].FaultNumber=12);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[12].FaultDescription)),((unsigned long)(&"AnF - Load Slipping")));

(__inst__->P84FaultTable[13].FaultNumber=13);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[13].FaultDescription)),((unsigned long)(&"LFF2 - AI2 4-20 mA Loss")));

(__inst__->P84FaultTable[14].FaultNumber=14);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[14].FaultDescription)),((unsigned long)(&"PtF1 - PTC1 Probe")));

(__inst__->P84FaultTable[15].FaultNumber=15);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[15].FaultDescription)),((unsigned long)(&"OtF1 - PTC1 Overheat")));

(__inst__->P84FaultTable[16].FaultNumber=16);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[16].FaultDescription)),((unsigned long)(&"OHF - Drive Overheat")));

(__inst__->P84FaultTable[17].FaultNumber=17);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[17].FaultDescription)),((unsigned long)(&"OLF - Motor Overload")));

(__inst__->P84FaultTable[18].FaultNumber=18);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[18].FaultDescription)),((unsigned long)(&"ObF - Overbraking")));

(__inst__->P84FaultTable[19].FaultNumber=19);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[19].FaultDescription)),((unsigned long)(&"OSF - Mains Overvoltage")));

(__inst__->P84FaultTable[20].FaultNumber=20);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[20].FaultDescription)),((unsigned long)(&"OPF1 - 1 Output Phase Loss")));

(__inst__->P84FaultTable[21].FaultNumber=21);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[21].FaultDescription)),((unsigned long)(&"PHF - Input Phase Loss")));

(__inst__->P84FaultTable[22].FaultNumber=22);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[22].FaultDescription)),((unsigned long)(&"USF - Undervoltage")));

(__inst__->P84FaultTable[23].FaultNumber=23);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[23].FaultDescription)),((unsigned long)(&"SCF1 - Motor Short Circuit")));

(__inst__->P84FaultTable[24].FaultNumber=24);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[24].FaultDescription)),((unsigned long)(&"SOF - Overspeed")));

(__inst__->P84FaultTable[25].FaultNumber=25);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[25].FaultDescription)),((unsigned long)(&"tnF - Auto-tuning Unsuccessful")));

(__inst__->P84FaultTable[26].FaultNumber=26);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[26].FaultDescription)),((unsigned long)(&"InF1 - Rating Error")));

(__inst__->P84FaultTable[27].FaultNumber=27);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[27].FaultDescription)),((unsigned long)(&"InF2 - Power Calibration")));

(__inst__->P84FaultTable[28].FaultNumber=28);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[28].FaultDescription)),((unsigned long)(&"InF3 - Internal Serial Link")));

(__inst__->P84FaultTable[29].FaultNumber=29);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[29].FaultDescription)),((unsigned long)(&"InF4 - Internal Mfg Area")));

(__inst__->P84FaultTable[30].FaultNumber=30);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[30].FaultDescription)),((unsigned long)(&"EEF2 - Power EEPROM")));

(__inst__->P84FaultTable[31].FaultNumber=31);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[31].FaultDescription)),((unsigned long)(&"SCF2 - Impedant Short Circuit")));

(__inst__->P84FaultTable[32].FaultNumber=32);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[32].FaultDescription)),((unsigned long)(&"SCF3 - Ground Short Circuit")));

(__inst__->P84FaultTable[33].FaultNumber=33);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[33].FaultDescription)),((unsigned long)(&"OPF2 - 3 Phase Output Loss")));

(__inst__->P84FaultTable[34].FaultNumber=34);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[34].FaultDescription)),((unsigned long)(&"COF - Powerlink Communication")));

(__inst__->P84FaultTable[35].FaultNumber=35);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[35].FaultDescription)),((unsigned long)(&"bLF - Brake Control")));

(__inst__->P84FaultTable[36].FaultNumber=37);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[36].FaultDescription)),((unsigned long)(&"InF7 - Internal Hard Init")));

(__inst__->P84FaultTable[37].FaultNumber=38);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[37].FaultDescription)),((unsigned long)(&"EPF2 - External Fault Com.")));

(__inst__->P84FaultTable[38].FaultNumber=39);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[38].FaultDescription)),((unsigned long)(&"APF - Application Fault")));

(__inst__->P84FaultTable[39].FaultNumber=40);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[39].FaultDescription)),((unsigned long)(&"InF8 - Internal Ctrl Supply")));

(__inst__->P84FaultTable[40].FaultNumber=41);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[40].FaultDescription)),((unsigned long)(&"brF - Brake Feedback")));

(__inst__->P84FaultTable[41].FaultNumber=42);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[41].FaultDescription)),((unsigned long)(&"SLF2 - PowerSuite Communication.")));

(__inst__->P84FaultTable[42].FaultNumber=43);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[42].FaultDescription)),((unsigned long)(&"ECF - Encoder Coupling")));

(__inst__->P84FaultTable[43].FaultNumber=44);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[43].FaultDescription)),((unsigned long)(&"SSF - Torque Current Limit")));

(__inst__->P84FaultTable[44].FaultNumber=45);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[44].FaultDescription)),((unsigned long)(&"SLF3 - HMI com.")));

(__inst__->P84FaultTable[45].FaultNumber=46);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[45].FaultDescription)),((unsigned long)(&"PrF - Power Removal")));

(__inst__->P84FaultTable[46].FaultNumber=47);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[46].FaultDescription)),((unsigned long)(&"PtF2 - PTC2 Probe")));

(__inst__->P84FaultTable[47].FaultNumber=48);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[47].FaultDescription)),((unsigned long)(&"OtF2 - PTC2 Overheat")));

(__inst__->P84FaultTable[48].FaultNumber=49);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[48].FaultDescription)),((unsigned long)(&"PtFL - LI6=PTC Probe")));

(__inst__->P84FaultTable[49].FaultNumber=50);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[49].FaultDescription)),((unsigned long)(&"OtFL - PTC Fault")));

(__inst__->P84FaultTable[50].FaultNumber=51);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[50].FaultDescription)),((unsigned long)(&"InF9 - Internal I measure")));

(__inst__->P84FaultTable[51].FaultNumber=52);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[51].FaultDescription)),((unsigned long)(&"InFA - Internal Mains Circuit")));

(__inst__->P84FaultTable[52].FaultNumber=53);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[52].FaultDescription)),((unsigned long)(&"InFb - Internal th. Sensor")));

(__inst__->P84FaultTable[53].FaultNumber=54);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[53].FaultDescription)),((unsigned long)(&"tJF - IGBT Overheat")));

(__inst__->P84FaultTable[54].FaultNumber=55);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[54].FaultDescription)),((unsigned long)(&"SCF4 - IGBT Short Circuit")));

(__inst__->P84FaultTable[55].FaultNumber=56);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[55].FaultDescription)),((unsigned long)(&"SCF5 - Motor Short Circuit")));

(__inst__->P84FaultTable[56].FaultNumber=57);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[56].FaultDescription)),((unsigned long)(&"SrF - Torque Time-out")));

(__inst__->P84FaultTable[57].FaultNumber=58);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[57].FaultDescription)),((unsigned long)(&"FCF1 - Output Contact Stuck")));

(__inst__->P84FaultTable[58].FaultNumber=59);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[58].FaultDescription)),((unsigned long)(&"FCF2 - Output Contact Open")));

(__inst__->P84FaultTable[59].FaultNumber=60);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[59].FaultDescription)),((unsigned long)(&"InFC - Int. T Measurement")));

(__inst__->P84FaultTable[60].FaultNumber=61);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[60].FaultDescription)),((unsigned long)(&"AI2F - AI2 Input")));

(__inst__->P84FaultTable[61].FaultNumber=62);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[61].FaultDescription)),((unsigned long)(&"EnF - Encoder")));

(__inst__->P84FaultTable[62].FaultNumber=63);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[62].FaultDescription)),((unsigned long)(&"CrF2 - Thyr. Soft Charge")));

(__inst__->P84FaultTable[63].FaultNumber=64);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[63].FaultDescription)),((unsigned long)(&"LCF - Input Contactor")));

(__inst__->P84FaultTable[64].FaultNumber=65);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[64].FaultDescription)),((unsigned long)(&"bUF - DB Unit Short Circuit")));

(__inst__->P84FaultTable[65].FaultNumber=66);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[65].FaultDescription)),((unsigned long)(&"dCF - Iff. I Fault")));

(__inst__->P84FaultTable[66].FaultNumber=67);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[66].FaultDescription)),((unsigned long)(&"HdF - IGBT  Desaturation")));

(__inst__->P84FaultTable[67].FaultNumber=68);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[67].FaultDescription)),((unsigned long)(&"InF6 - Internal Option")));

(__inst__->P84FaultTable[68].FaultNumber=69);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[68].FaultDescription)),((unsigned long)(&"InFE - Internal CPU")));

(__inst__->P84FaultTable[69].FaultNumber=70);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[69].FaultDescription)),((unsigned long)(&"bOF - BR Overload")));

(__inst__->P84FaultTable[70].FaultNumber=71);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[70].FaultDescription)),((unsigned long)(&"LFF3 - AI3 4-20 mA Loss")));

(__inst__->P84FaultTable[71].FaultNumber=72);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[71].FaultDescription)),((unsigned long)(&"LEF4 - AI4 4-20 mA Loss")));

(__inst__->P84FaultTable[72].FaultNumber=73);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[72].FaultDescription)),((unsigned long)(&"HCF - Cards Pairing")));

(__inst__->P84FaultTable[73].FaultNumber=76);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[73].FaultDescription)),((unsigned long)(&"dLF - Load Fault")));

(__inst__->P84FaultTable[74].FaultNumber=99);
__AS__STRCPY(((unsigned long)(&__inst__->P84FaultTable[74].FaultDescription)),((unsigned long)(&"CSF - Ch. SW. Fault")));


(__inst__->P74FaultTable[0].FaultNumber=0);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[0].FaultDescription)),((unsigned long)(&"nOF - No Fault")));

(__inst__->P74FaultTable[1].FaultNumber=1);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[1].FaultDescription)),((unsigned long)(&"InF - Calibration Error")));

(__inst__->P74FaultTable[2].FaultNumber=2);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[2].FaultDescription)),((unsigned long)(&"EEF1 - Control EEPROM")));

(__inst__->P74FaultTable[3].FaultNumber=3);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[3].FaultDescription)),((unsigned long)(&"CFF - Incorrect Configuration")));

(__inst__->P74FaultTable[4].FaultNumber=4);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[4].FaultDescription)),((unsigned long)(&"CFI - Invalid Configuration")));

(__inst__->P74FaultTable[5].FaultNumber=5);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[5].FaultDescription)),((unsigned long)(&"SLF1 - Communication Error")));

(__inst__->P74FaultTable[6].FaultNumber=6);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[6].FaultDescription)),((unsigned long)(&"ILF - Internal Communication Link")));

(__inst__->P74FaultTable[7].FaultNumber=7);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[7].FaultDescription)),((unsigned long)(&"CnF - Communication Network")));

(__inst__->P74FaultTable[8].FaultNumber=8);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[8].FaultDescription)),((unsigned long)(&"EPF1 - External Fault")));

(__inst__->P74FaultTable[9].FaultNumber=9);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[9].FaultDescription)),((unsigned long)(&"OCF - Overcurrent")));

(__inst__->P74FaultTable[10].FaultNumber=10);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[10].FaultDescription)),((unsigned long)(&"CrF - Precharge")));

(__inst__->P74FaultTable[11].FaultNumber=11);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[11].FaultDescription)),((unsigned long)(&"SPF - Speed Feedback loss")));

(__inst__->P74FaultTable[12].FaultNumber=16);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[12].FaultDescription)),((unsigned long)(&"OHF - Drive Overheat")));

(__inst__->P74FaultTable[13].FaultNumber=17);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[13].FaultDescription)),((unsigned long)(&"OLF - Motor Overload")));

(__inst__->P74FaultTable[14].FaultNumber=18);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[14].FaultDescription)),((unsigned long)(&"ObF - Overbraking")));

(__inst__->P74FaultTable[15].FaultNumber=19);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[15].FaultDescription)),((unsigned long)(&"OSF - Mains Overvoltage")));

(__inst__->P74FaultTable[16].FaultNumber=20);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[16].FaultDescription)),((unsigned long)(&"OPF1 - 1 Output Phase Loss")));

(__inst__->P74FaultTable[17].FaultNumber=21);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[17].FaultDescription)),((unsigned long)(&"PHF - Input Phase Loss")));

(__inst__->P74FaultTable[18].FaultNumber=22);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[18].FaultDescription)),((unsigned long)(&"USF - Undervoltage")));

(__inst__->P74FaultTable[19].FaultNumber=23);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[19].FaultDescription)),((unsigned long)(&"SCF1 - Motor Short Circuit")));

(__inst__->P74FaultTable[20].FaultNumber=24);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[20].FaultDescription)),((unsigned long)(&"SOF - Overspeed")));

(__inst__->P74FaultTable[21].FaultNumber=25);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[21].FaultDescription)),((unsigned long)(&"tnF - Auto-tuning Unsuccessful")));

(__inst__->P74FaultTable[22].FaultNumber=26);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[22].FaultDescription)),((unsigned long)(&"InF1 - Rating Error")));

(__inst__->P74FaultTable[23].FaultNumber=27);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[23].FaultDescription)),((unsigned long)(&"InF2 - Power Calibration")));

(__inst__->P74FaultTable[24].FaultNumber=28);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[24].FaultDescription)),((unsigned long)(&"InF3 - Internal Serial Link")));

(__inst__->P74FaultTable[25].FaultNumber=29);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[25].FaultDescription)),((unsigned long)(&"InF4 - Internal Mfg Area")));

(__inst__->P74FaultTable[26].FaultNumber=30);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[26].FaultDescription)),((unsigned long)(&"EEF2 - Power EEPROM")));

(__inst__->P74FaultTable[27].FaultNumber=31);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[27].FaultDescription)),((unsigned long)(&"SCF2 - Impedant Short Circuit")));

(__inst__->P74FaultTable[28].FaultNumber=32);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[28].FaultDescription)),((unsigned long)(&"SCF3 - Ground Short Circuit")));

(__inst__->P74FaultTable[29].FaultNumber=33);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[29].FaultDescription)),((unsigned long)(&"OPF2 - 3 Phase Output Loss")));

(__inst__->P74FaultTable[30].FaultNumber=34);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[30].FaultDescription)),((unsigned long)(&"COF - Powerlink Communication")));

(__inst__->P74FaultTable[31].FaultNumber=35);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[31].FaultDescription)),((unsigned long)(&"bLF - Brake Control")));

(__inst__->P74FaultTable[32].FaultNumber=38);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[32].FaultDescription)),((unsigned long)(&"EPF2 - External Fault Com.")));

(__inst__->P74FaultTable[33].FaultNumber=41);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[33].FaultDescription)),((unsigned long)(&"brF - Brake Feedback")));

(__inst__->P74FaultTable[34].FaultNumber=42);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[34].FaultDescription)),((unsigned long)(&"SLF2 - PowerSuite Communication.")));

(__inst__->P74FaultTable[35].FaultNumber=43);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[35].FaultDescription)),((unsigned long)(&"ECF - Encoder Coupling")));

(__inst__->P74FaultTable[36].FaultNumber=44);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[36].FaultDescription)),((unsigned long)(&"SSF - Torque Current Limit")));

(__inst__->P74FaultTable[37].FaultNumber=45);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[37].FaultDescription)),((unsigned long)(&"SLF3 - HMI com.")));

(__inst__->P74FaultTable[38].FaultNumber=46);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[38].FaultDescription)),((unsigned long)(&"PrF - Power Removal")));

(__inst__->P74FaultTable[39].FaultNumber=49);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[39].FaultDescription)),((unsigned long)(&"PtFL - LI6=PTC Probe")));

(__inst__->P74FaultTable[40].FaultNumber=50);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[40].FaultDescription)),((unsigned long)(&"OtFL - PTC Fault")));

(__inst__->P74FaultTable[41].FaultNumber=51);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[41].FaultDescription)),((unsigned long)(&"InF9 - Internal I measure")));

(__inst__->P74FaultTable[42].FaultNumber=52);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[42].FaultDescription)),((unsigned long)(&"InFA - Internal Mains Circuit")));

(__inst__->P74FaultTable[43].FaultNumber=53);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[43].FaultDescription)),((unsigned long)(&"InFb - Internal th. Sensor")));

(__inst__->P74FaultTable[44].FaultNumber=54);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[44].FaultDescription)),((unsigned long)(&"tJF - IGBT Overheat")));

(__inst__->P74FaultTable[45].FaultNumber=55);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[45].FaultDescription)),((unsigned long)(&"SCF4 - IGBT Short Circuit")));

(__inst__->P74FaultTable[46].FaultNumber=56);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[46].FaultDescription)),((unsigned long)(&"SCF5 - Motor Short Circuit")));

(__inst__->P74FaultTable[47].FaultNumber=57);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[47].FaultDescription)),((unsigned long)(&"SrF - Torque Time-out")));

(__inst__->P74FaultTable[48].FaultNumber=58);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[48].FaultDescription)),((unsigned long)(&"FCF1 - Output Contact Stuck")));

(__inst__->P74FaultTable[49].FaultNumber=59);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[49].FaultDescription)),((unsigned long)(&"FCF2 - Output Contact Open")));

(__inst__->P74FaultTable[50].FaultNumber=61);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[50].FaultDescription)),((unsigned long)(&"AI2F - AI2 Input")));

(__inst__->P74FaultTable[51].FaultNumber=64);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[51].FaultDescription)),((unsigned long)(&"LCF - Input Contactor")));

(__inst__->P74FaultTable[52].FaultNumber=66);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[52].FaultDescription)),((unsigned long)(&"dCF - Iff. I Fault")));

(__inst__->P74FaultTable[53].FaultNumber=67);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[53].FaultDescription)),((unsigned long)(&"HdF - IGBT  Desaturation")));

(__inst__->P74FaultTable[54].FaultNumber=68);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[54].FaultDescription)),((unsigned long)(&"InF6 - Internal Option")));

(__inst__->P74FaultTable[55].FaultNumber=69);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[55].FaultDescription)),((unsigned long)(&"InFE - Internal CPU")));

(__inst__->P74FaultTable[56].FaultNumber=71);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[56].FaultDescription)),((unsigned long)(&"LFF3 - AI3 4-20 mA Loss")));

(__inst__->P74FaultTable[57].FaultNumber=73);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[57].FaultDescription)),((unsigned long)(&"HCF - Cards Pairing")));

(__inst__->P74FaultTable[58].FaultNumber=76);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[58].FaultDescription)),((unsigned long)(&"dLF - Load Fault")));

(__inst__->P74FaultTable[59].FaultNumber=77);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[59].FaultDescription)),((unsigned long)(&"CFI2 - Bad Configuration")));

(__inst__->P74FaultTable[60].FaultNumber=99);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[60].FaultDescription)),((unsigned long)(&"CSF - Ch. SW. Fault")));

(__inst__->P74FaultTable[61].FaultNumber=100);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[61].FaultDescription)),((unsigned long)(&"ULF - Pr. Underload Fault")));

(__inst__->P74FaultTable[62].FaultNumber=101);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[62].FaultDescription)),((unsigned long)(&"OLC - Proc. Overload Fault")));

(__inst__->P74FaultTable[63].FaultNumber=105);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[63].FaultDescription)),((unsigned long)(&"ASF - Angle Error")));

(__inst__->P74FaultTable[64].FaultNumber=107);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[64].FaultDescription)),((unsigned long)(&"SAFF - Safety Fault")));

(__inst__->P74FaultTable[65].FaultNumber=108);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[65].FaultDescription)),((unsigned long)(&"FbE - FB Fault")));

(__inst__->P74FaultTable[66].FaultNumber=109);
__AS__STRCPY(((unsigned long)(&__inst__->P74FaultTable[66].FaultDescription)),((unsigned long)(&"FbES - FB Stop Fault")));
}else{

(__inst__->Status=0);
}








if((((unsigned long)(unsigned char)__inst__->isInitialized==(unsigned long)(unsigned char)1))){

if((((signed long)__inst__->DriveType==(signed long)0))){


(__inst__->LastFault=__inst__->PreviousFault);

if((((unsigned long)(unsigned char)__inst__->Execute==(unsigned long)(unsigned char)1))){
(__inst__->Status=3);

if((((signed long)(signed long)(short)__inst__->PreviousFault!=(signed long)(signed long)(short)((*(__inst__->FaultNumber)))))){
(__inst__->PreviousFault=((*(__inst__->FaultNumber))));


__AS__STRCPY(__inst__->FaultText,((unsigned long)(&"")));

for((__inst__->i=0);__inst__->i<=35;__inst__->i+=1){
if((((signed long)(signed long)(short)((*(__inst__->FaultNumber)))==(signed long)(signed long)(short)__inst__->S44FaultTable[__inst__->i].FaultNumber))){
__AS__STRCPY(__inst__->FaultText,((unsigned long)(&__inst__->S44FaultTable[__inst__->i].FaultDescription)));
goto imp1_endfor5_0;
}
}imp1_endfor5_0:;
}
}else{
(__inst__->Status=2);
}

}else if((((signed long)__inst__->DriveType==(signed long)1))){


(__inst__->LastFault=__inst__->PreviousFault);

if((((unsigned long)(unsigned char)__inst__->Execute==(unsigned long)(unsigned char)1))){
(__inst__->Status=3);

if((((signed long)(signed long)(short)__inst__->PreviousFault!=(signed long)(signed long)(short)((*(__inst__->FaultNumber)))))){
(__inst__->PreviousFault=((*(__inst__->FaultNumber))));


__AS__STRCPY(__inst__->FaultText,((unsigned long)(&"")));

for((__inst__->i=0);__inst__->i<=31;__inst__->i+=1){
if((((signed long)(signed long)(short)((*(__inst__->FaultNumber)))==(signed long)(signed long)(short)__inst__->X64FaultTable[__inst__->i].FaultNumber))){
__AS__STRCPY(__inst__->FaultText,((unsigned long)(&__inst__->X64FaultTable[__inst__->i].FaultDescription)));
goto imp1_endfor9_0;
}
}imp1_endfor9_0:;
}
}else{
(__inst__->Status=2);
}


}else if((((signed long)__inst__->DriveType==(signed long)2))){


(__inst__->LastFault=__inst__->PreviousFault);

if((((unsigned long)(unsigned char)__inst__->Execute==(unsigned long)(unsigned char)1))){
(__inst__->Status=3);

if((((signed long)(signed long)(short)__inst__->PreviousFault!=(signed long)(signed long)(short)((*(__inst__->FaultNumber)))))){
(__inst__->PreviousFault=((*(__inst__->FaultNumber))));


__AS__STRCPY(__inst__->FaultText,((unsigned long)(&"")));

for((__inst__->i=0);__inst__->i<=74;__inst__->i+=1){
if((((signed long)(signed long)(short)((*(__inst__->FaultNumber)))==(signed long)(signed long)(short)__inst__->P84FaultTable[__inst__->i].FaultNumber))){
__AS__STRCPY(__inst__->FaultText,((unsigned long)(&__inst__->P84FaultTable[__inst__->i].FaultDescription)));
goto imp1_endfor13_0;
}
}imp1_endfor13_0:;
}
}else{
(__inst__->Status=2);
}

}else if((((signed long)__inst__->DriveType==(signed long)3))){


(__inst__->LastFault=__inst__->PreviousFault);

if((((unsigned long)(unsigned char)__inst__->Execute==(unsigned long)(unsigned char)1))){
(__inst__->Status=3);

if((((signed long)(signed long)(short)__inst__->PreviousFault!=(signed long)(signed long)(short)((*(__inst__->FaultNumber)))))){
(__inst__->PreviousFault=((*(__inst__->FaultNumber))));


__AS__STRCPY(__inst__->FaultText,((unsigned long)(&"")));

for((__inst__->i=0);__inst__->i<=66;__inst__->i+=1){
if((((signed long)(signed long)(short)((*(__inst__->FaultNumber)))==(signed long)(signed long)(short)__inst__->P74FaultTable[__inst__->i].FaultNumber))){
__AS__STRCPY(__inst__->FaultText,((unsigned long)(&__inst__->P74FaultTable[__inst__->i].FaultDescription)));
goto imp1_endfor17_0;
}
}imp1_endfor17_0:;
}
}else{
(__inst__->Status=2);
}

}
}

}imp1_end15_0:imp1_else2_3:imp1_end2_0:imp1_else1_0:imp1_end1_0:;}
#line 781 "C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Libraries/InvErrTxt/InverterFaultText.nodebug"

void __AS__ImplInitInverterFaultText_st(void){}

unsigned long __AS__STRCPY(unsigned long pDest, unsigned long pSrc)
{strcpy((char*)pDest, (char*)pSrc); return pDest + strlen((char*)pDest);}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10man/Acp10man.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sdc/acp10sdc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sim/acp10sim.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxis.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxisError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxisAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmXError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpComError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Types/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Vacuum.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/FoldPush.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/GluePatt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/SetRamPars.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/GrayToBin.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/DistCalc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxis.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/MappCall.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/AxisFUBs.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Lib_PBFlx.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Constants/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Constants/AlarmNames.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10par/Acp10par.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sdc/acp10sdc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sim/acp10sim.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/InvErrTxt/InverterFaultText.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/InvErrTxt/InverterFaultText.st.c\\\" \\\"C:/Users/Crims/OneDrive/Documents/GitHub/MiniBliss/KeePak_Bliss_NoWaitForFold/Logical/Libraries/InvErrTxt/InverterFaultText.st\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"InverterFaultText\\\" FUB\\n\"");
__asm__(".previous");
