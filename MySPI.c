#include "MySPI.h"
void initialize_SPI(void)
{
	DDRB = (1<<SCK)|(1<<SS)|(1<<MOSI);
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}

void transmit_SPI(unsigned char CMND, unsigned char data)
{
	PORTB &= ~(1<<SS);
	SPDR = CMND;
	while(!(SPSR&(1<<SPIF)));
	SPDR = data;
	while(!(SPSR&(1<<SPIF)));
	PORTB |= (1<<SS);	
}