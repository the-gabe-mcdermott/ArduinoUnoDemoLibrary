/*
 * ButtonToggleLedDemo.c
 *
 * Created: 6/1/2017 20:20:53
 *  Author: Gabe
 */ 
#include "ButtonToggleLedDemo.h"


//"Private" Function
void BlockUntilButtonRelease(void);


void ButtonToggleLedInit(void)
{
	InitLeds();
}

void ButtonToggleLedLoop(void)
{
	uint8_t currentState = 0;
	uint8_t buttonReadValue = 0;
	while (1)
	{
		//If a button press is detected.
		if (ReadButtons())
		{
			//Check State to determine action.
			if (currentState == 0)
			{
				AssignLedGreen(1);
				AssignLedRed(0);
				currentState = 1;
				
			}
			else
			{
				AssignLedGreen(0);
				AssignLedRed(1);
				currentState = 0;
			}
			
			BlockUntilButtonRelease();
		}
	}
}

void BlockUntilButtonRelease(void)
{
	//Wait until button release to exit button press event.
	uint8_t buttonReadValue = 1;
	while (buttonReadValue == 1)
		buttonReadValue = ReadButtons();
	
}