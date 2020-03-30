


#ifndef MYSPI_H_
#define MYSPI_H_
#include <avr/io.h>
#define MOSI 5
#define SCK 7
#define SS 4

void initialize_SPI(void);
void transmit_SPI(unsigned char CMND, unsigned char data);



#endif /* MYSPI_H_ */