/*
 * Leds.c
 *
 * Created: 5/23/2017 16:28:23
 *  Author: Gabe
 */ 
#include "Leds.h"



void InitLeds(void)
{
	LED_OUTPUT_REG = ConfigurePinsForOutput(LED_DIRECTION_REG, (LED_GREEN_BIT_MASK | LED_RED_BIT_MASK) );
	//Initialize the LED Values.
	// LED Green starts off
	LED_OUTPUT_REG = ClearPinValues(LED_OUTPUT_REG, LED_GREEN_BIT_MASK);
	// LED Red starts on
	LED_OUTPUT_REG = SetPinValues(LED_OUTPUT_REG, LED_RED_BIT_MASK);
	
}

void AssignLedGreen(uint8_t assignValue)
{
	if(!assignValue)
		LED_OUTPUT_REG = ClearPinValues(LED_OUTPUT_REG, LED_GREEN_BIT_MASK);
	else
		LED_OUTPUT_REG = SetPinValues(LED_OUTPUT_REG, LED_GREEN_BIT_MASK);
}

void AssignLedRed(uint8_t assignValue)
{
	if(!assignValue)
		LED_OUTPUT_REG = ClearPinValues(LED_OUTPUT_REG, LED_RED_BIT_MASK);	
	else		
		LED_OUTPUT_REG = SetPinValues(LED_OUTPUT_REG, LED_RED_BIT_MASK);
}
