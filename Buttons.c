/*
 * Buttons.c
 *
 * Created: 6/2/2017 14:49:52
 *  Author: Gabe
 */ 
#include "Buttons.h"

void InitButtons(void)
{
	//Set PORT B bit 3 (digital pin 11) to Input. 
	ACCESS_BUTTON_DIRECTION_REG = ConfigurePinsForInput(ACCESS_BUTTON_DIRECTION_REG, BUTTON_BIT_MASK);
	
}

//TODO: Add Button De-bounce
uint8_t ReadButtons(void)
{
	uint8_t buttonReadResults = 0;
	
	buttonReadResults = ReadPinValues(ACCESS_BUTTON_INPUT_REG, BUTTON_BIT_MASK);
	
	buttonReadResults &= BUTTON_BIT_MASK;
	
	if (buttonReadResults == 0)
		return 0;
	else
		return 1;
}