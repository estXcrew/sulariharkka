/*
 * Pixel.c
 *
 *  Created on: -----
 *      Author: -----
 */

#include "Pixel.h"

/******use these if you know how*********
//Table for pixel dots. dots[page][X][Y][COLOR]
//volatile uint8_t dots[Page_size][8][8][3]={0};
//volatile uint8_t page=0;
****************************************/

//Table for pixel dots.
//				 dots[X][Y][COLOR]
volatile uint8_t dots[8][8][3]={0};



void setup(){


	//reseting screen at start is a MUST to operation. Hint 1: reset is active low. Hint 2: Reset pin from CPU to DM163 is default 0



	//Write code that sets 6-bit values in register of DM163 chip. Recommended that every bit in that register is set to 1. 6-bits and 24 "bytes", so some kind of loop structure could be nice





}

//Set value of one pixel at led matrix
void SetPixel(uint8_t x,uint8_t y, uint8_t r, uint8_t g, uint8_t b){

	//Set new pixel value. Put function paremeter values to dots array at correct places

}


//Put new data to led matrix. Hint: This function is supposed to send 24-bytes and parameter x is for x-coordinate.
void run(uint8_t x){



	//Write code that writes data to led matrix driver (8-bit data). Use values from dots array


}

//latch signal. See colorshield.pdf in project folder how latching works
void latch(){


}


//Set one line as active per time.
void open_line(uint8_t x){


}



