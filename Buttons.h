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

void	InitButtons(void);
uint8_t ReadButtons(void);

#define BUTTON_OUTPUT_REG PORTB
#define BUTTON_DIRECTION_REG DDRB
#define BUTTON_INPUT_REG PINB

#define BUTTON_BIT_MASK BIT_3




#endif /* BUTTONS_H_ */