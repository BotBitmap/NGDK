#include <NGDK.h>
#include "data_ext.h"


void example2(void)
{
	NG_Sprite_Clear_VRAM(); //Clear VRAM Sprite
	NG_Fix_Clear(); //Clear Fix

	NG_Backdrop_Color_Set(NG_COLOR(7, 7, 7)); //Backdrop color R, G, B (0-15)

	//-----------fix--------------
	NG_Fix_Palette(NG_FIX_PAL(0)); //Select Pal for Print
	NG_Fix_Print_String("Hello Worlb !", 12, 0); //Print text, str, X pos, Y pos
	NG_Fix_Print_String("CPU:", 29, 0);
	NG_Fix_Print_u16(NGDK_VERSION, 0, 0); //Print variable u16, X pos, Y pos
	NG_Fix_Print_u16(NG_MAX_SPR, 0, 1);

	NG_Fix_Print_Free_Mem(0, 5); //Indicates available memory

	//Sprite
	NG_Palette_Load(MarcoH1_pal_data, 16);
	NG_Sprite_Init(0, 100, 100, 2, 2, MarcoH1_index, NG_SPR_FLAGS(16, 0, 0, 0));


	//----Init Sprite VRAM------------
	NG_Sprite_VRAM_ID_Set(0x00);
	NG_Sprite_VRAM_Init(0); //Init ID Sprite 0 + meta sprite + Upload
	NG_Sprite_Update_N(0); //Update position X, Y, MetaSPR, Zoom XY, 0-N

	while(1)
	{
		NG_Fix_Print_CPU(34, 0); //Print % CPU, X pos, Y pos
		NG_Fix_Print_Cycles(32, 1); //Print executed cycles count

		NG_Wait_VBlank(); //Wait VBlank

	}
}
