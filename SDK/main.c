
#include "inc/NGDK.h"
#include "data/data.h"

const u16 palette_ng[32] = { 0x0f0f,0x0eee,0x0ddd,0x0ccc,0x0bbb,0x0aaa,0x0999,0x0888,0x010f,0x0f00,0x00ff,0x0f0f,0x0f0f,0x0f0f,0x0f0f,0x0000 };


void example1(void);

void game1(void);
void game2(void);
void game3(void);

int  __attribute__((optimize("-O0"),noinline)) main()
{
	//game3();
	example1();
	return 0;
}

//fzfzeez