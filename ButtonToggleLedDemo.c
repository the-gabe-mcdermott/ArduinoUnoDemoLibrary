/*
 * ButtonToggleLedDemo.c
 *
 * Created: 6/1/2017 20:20:53
 *  Author: Gabe
 */ 
#include "ButtonToggleLedDemo.h"
#include "Leds.h"

void ButtonToggleLedInit(void)
{
	InitLeds();
}

void ButtonToggleLedLoop(void)
{
	while (1)
	{
			AssignLedGreen(1);
			AssignLedRed(0);
			//If( Read button )
			// ToggleLed
	}
}
