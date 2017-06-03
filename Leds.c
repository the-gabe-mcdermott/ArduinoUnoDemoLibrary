/*
 * Leds.c
 *
 * Created: 5/23/2017 16:28:23
 *  Author: Gabe
 */ 
#include "Leds.h"



void InitLeds(void)
{
	ACCESS_LED_DIRECTION_REG = ConfigurePinsForOutput(ACCESS_LED_DIRECTION_REG, (LED_GREEN_BIT_MASK | LED_RED_BIT_MASK) );
	//Initialize the LED Values.
	// LED Green starts off
	ACCESS_LED_OUTPUT_REG = ClearPinValues(ACCESS_LED_OUTPUT_REG, LED_GREEN_BIT_MASK);
	// LED Red starts on
	ACCESS_LED_OUTPUT_REG = SetPinValues(ACCESS_LED_OUTPUT_REG, LED_RED_BIT_MASK);
	
}

void AssignLedGreen(uint8_t assignValue)
{
	if(!assignValue)
		ACCESS_LED_OUTPUT_REG = ClearPinValues(ACCESS_LED_OUTPUT_REG, LED_GREEN_BIT_MASK);
	else
		ACCESS_LED_OUTPUT_REG = SetPinValues(ACCESS_LED_OUTPUT_REG, LED_GREEN_BIT_MASK);
}

void AssignLedRed(uint8_t assignValue)
{
	if(!assignValue)
		ACCESS_LED_OUTPUT_REG = ClearPinValues(ACCESS_LED_OUTPUT_REG, LED_RED_BIT_MASK);	
	else		
		ACCESS_LED_OUTPUT_REG = SetPinValues(ACCESS_LED_OUTPUT_REG, LED_RED_BIT_MASK);
}
