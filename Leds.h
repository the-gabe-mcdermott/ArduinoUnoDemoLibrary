/*
 * Leds.h
 *
 * Created: 5/23/2017 16:26:35
 *  Author: Gabe
 */ 


#ifndef LEDS_H_
#define LEDS_H_

#include "PinDefinitions.h"

void InitLed(void);
void SetLed(void);
void ClearLed(void);
uint8_t ReadLed(void);


#endif /* LEDS_H_ */