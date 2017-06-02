/*
 * Buttons.h
 *
 * Created: 6/2/2017 14:46:26
 *  Author: Gabe
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "asf.h"
#include "Pins.h"

/****************************************
* InitButtons
*	Initializes pin 11 as input for button reading
*	Call before using other functions.
*
***********************************************/
void	InitButtons(void);

/**********************************************
* ReadButtons
*	Returns a 0 if button unpressed
*	Returns a 1 if button pressed
**********************************************/
uint8_t ReadButtons(void);

#define BUTTON_OUTPUT_REG PORTB
#define BUTTON_DIRECTION_REG DDRB
#define BUTTON_INPUT_REG PINB

#define BUTTON_BIT_MASK BIT_3




#endif /* BUTTONS_H_ */