/*
 * Leds.h
 *
 * Created: 5/23/2017 16:26:35
 *  Author: Gabe
 */


#ifndef LEDS_H_
#define LEDS_H_
#include "asf.h"
#include "Pins.h"




/*****************************************
* InitLeds
*	Initializes all LEDs in use
*		Assigns direction
*		Assigns starting value.
******************************************/
void InitLeds(void);

/****************************************
*	AssignLedGreen
*		Assign Green LED to on or off
*			0 assigns to off.
*			Any other value assigns to 1
**************************************/
void AssignLedGreen(uint8_t assignValue);

/****************************************
*	AssignLedRed
*		Assign Red LED to on or off
*			0 assigns to off.
*			Any other value assigns to 1
**************************************/
void AssignLedRed(uint8_t assignValue);


//LED Registers.
#define ACCESS_LED_DIRECTION_REG DDRB
#define ACCESS_LED_OUTPUT_REG PORTB
#define ACCESS_LED_INPUT_REG PINB

//LED Pin Positions.
#define LED_GREEN_BIT_MASK BIT_5 //Arduino Digital Pin 13, Wired to Green LED
#define LED_RED_BIT_MASK BIT_4 //Arduino Digital Pin 12, Wired to Red LED

#endif /* LEDS_H_ */