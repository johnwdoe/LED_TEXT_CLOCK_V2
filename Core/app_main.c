/*
 * app_main.c
 *
 *  Created on: Mar 23, 2024
 *      Author: John William Doe
 */

#include "app_main.h"


void main_app(void){
	ARGB_Init();

//	ARGB_SetBrightness(30);

	u8_t hue = 0, pos = 0, br = 0;
	i8_t dir = 1;
	while(1){
		//ARGB_Clear();
		ARGB_SetHSV(f_pos(pos), hue, 255, 255);
		while (!ARGB_Show());
//		HAL_Delay(100);
		hue += 3;
		pos += dir;
//		if (pos == NUM_PIXELS-1 || pos == 0) dir *= -1;
		if (pos == NUM_PIXELS) pos = 0;
	}

}

u8_t f_pos(u8_t pos){
	u8_t row = pos / 13;
	if (row & 0x01) return (row + 1) * 13 - 1 - pos % 13; else return pos;
}
