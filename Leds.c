/*
 * Leds.c
 *
 * Created: 5/23/2017 16:28:23
 *  Author: Gabe
 */ 
#include "Leds.h"

/*
void InitLed(void)
{
	uint8_t directionConfig = DDRB;
	uint8_t startingValueConfig = PORTB;

	//Setup PORTB-5 
	//output (1), starting low.
	directionConfig |= Bit_5;	
	//starting value 0;
	startingValueConfig &= ~Bit_5;
	
	PINB = startingValueConfig;
	DDRB = directionConfig;
}

void SetLed(void)
{
	
	uint8_t currentValue = PORTB;
	PORTB = currentValue | Bit_5;
	
}

void ClearLed(void)
{
	uint8_t currentValue = PORTB;
	PORTB = currentValue & ~Bit_5;
	
}

uint8_t ReadLed(void)
{
	return PINB;
}
*/