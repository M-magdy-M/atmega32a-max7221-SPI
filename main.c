/*
 * spi_c.c
 *
 * Created: 30/03/2020 14:18:37
 * Author : C2D
 */ 

#include <avr/io.h>
#include "MySPI.h"


int main(void)
{


initialize_SPI();
transmit_SPI(0x09,0b00000011);
transmit_SPI(0x0B,0x02);
transmit_SPI(0x0C,0x01);
transmit_SPI(0x01,0x07);
transmit_SPI(0x02,0x06);

while(1);
}

