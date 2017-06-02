/*
 * Buttons.c
 *
 * Created: 5/23/2017 16:50:02
 *  Author: Gabe
 */ 

#include "Buttons.h"
#include "Leds.h"

//#include "DebugTools.h"

void initButton(void)
{
		//Read current reg values
		uint8_t portConfigRegValue = BUTTON_PORT_CONFIG_REG;
		//uint8_t portOutputRegValue = BUTTON_PORT_OUTPUT_REG;	
		//Setup as input (0).
		//Mask
		portConfigRegValue &= ~BUTTON_BIT_MASK;
		//portOutputRegValue |= BUTTON_BIT_MASK;
		
	
		//Write new reg values.
		BUTTON_PORT_CONFIG_REG = portConfigRegValue;
		//BUTTON_PORT_OUTPUT_REG = portOutputRegValue;
}

uint8_t checkButtonPressed(void)
{
	
	//Read the button value.
	uint8_t rawButtonRegValue = BUTTON_PORT_INPUT_REG;

	//Mask the value.
	uint8_t buttonState = rawButtonRegValue & BUTTON_BIT_MASK;
	buttonState = buttonState >> BUTTON_BIT_POSITION;
	
	return buttonState;
}