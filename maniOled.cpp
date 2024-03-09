#include "stm32f10x.h"                  // Device header
#include "ssd1306.h"
int main(void)
	{
		SSD1306_Init();//inicijalizacija displeja
	
		while(1)
		{
			SSD1306_GotoXY(10,10);
			SSD1306_Puts("MEHO",&Font_16x26,SSD1306_COLOR_WHITE);
			SSD1306_UpdateScreen();
		
		}
		
	}
	