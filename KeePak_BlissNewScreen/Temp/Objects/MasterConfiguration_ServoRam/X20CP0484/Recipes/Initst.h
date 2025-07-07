#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
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

#ifndef __AS__TYPE_RecipeCtrlInterface_Commands_typ
#define __AS__TYPE_RecipeCtrlInterface_Commands_typ
typedef struct RecipeCtrlInterface_Commands_typ
{	plcbit ChangeRecipe;
	plcbit LoadRecipe;
	plcbit SaveRecipe;
} RecipeCtrlInterface_Commands_typ;
#endif

#ifndef __AS__TYPE_RecipeCtrlInterface_Pars_typ
#define __AS__TYPE_RecipeCtrlInterface_Pars_typ
typedef struct RecipeCtrlInterface_Pars_typ
{	unsigned char RecipeIndex;
	plcstring RecipeName[101];
} RecipeCtrlInterface_Pars_typ;
#endif

#ifndef __AS__TYPE_RecipeCtrlInterface_Status_typ
#define __AS__TYPE_RecipeCtrlInterface_Status_typ
typedef struct RecipeCtrlInterface_Status_typ
{	plcbit Busy;
	unsigned char LoadedRecipeIndex;
	plcstring LoadedRecipeName[256];
	plcbit RecipeHasBeenLoaded;
} RecipeCtrlInterface_Status_typ;
#endif

#ifndef __AS__TYPE_RecipeCtrlInterface_typ
#define __AS__TYPE_RecipeCtrlInterface_typ
typedef struct RecipeCtrlInterface_typ
{	RecipeCtrlInterface_Commands_typ Commands;
	RecipeCtrlInterface_Pars_typ Parameters;
	RecipeCtrlInterface_Status_typ Status;
} RecipeCtrlInterface_typ;
#endif

_GLOBAL_RETAIN RecipeCtrlInterface_typ gRecipeInterface;
_GLOBAL plcstring TYPE1_RECIPE_NAME[81];
