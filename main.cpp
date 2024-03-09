#include "stm32f10x.h"                  // Device header
#include "ssd1306.h"                  // Device header



void naprijed(int,int,int);


int main() {
	SSD1306_Init();//inicijalizacija displeja
	
	
	while(1){
		for(int i = 0; i < 64;i++){
			naprijed(i,i+4,i+10);
		}
	}

}

void naprijed(int i,int j,int k) {
		while(i != j && i != k ){
			SSD1306_Fill(SSD1306_COLOR_BLACK);
			
			SSD1306_GotoXY(i,10);
			SSD1306_Puts("TEST 1",&Font_7x10,SSD1306_COLOR_WHITE);
			
			if(j > 64) {
				j = 64;
			}
			
			SSD1306_GotoXY(j,25);	
			SSD1306_Puts("TEST",&Font_7x10,SSD1306_COLOR_WHITE);
			
			if(k > 64) {
				k = 64;
			}
			
			SSD1306_GotoXY(k,40);
			SSD1306_Puts("TEST",&Font_7x10,SSD1306_COLOR_WHITE);
			
			SSD1306_UpdateScreen();
		}
	}