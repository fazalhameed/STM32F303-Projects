

#ifndef MAX7219_H_
#define MAX7219_H_
#include "stm32f3xx_hal.h"


#define CHAR_MAX 38

extern SPI_HandleTypeDef hspi1;

void Print_Alphanum(int choice);
//void MAX72_Init(void);
void MAX72_Init(void);
#endif /* MAX7219_H_ */
