struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_LOCAL struct TON FlashOFF;
_BUR_LOCAL struct TON FlashON;
_BUR_LOCAL plcbit status;
_BUR_LOCAL plcbit SettingsLoaded;
_BUR_LOCAL struct TON LogoutTimer;
_BUR_LOCAL unsigned char OldPage;
_BUR_LOCAL plcbit ResetTimeoutTimer;
_BUR_LOCAL plcbit ResetUserLevel;
