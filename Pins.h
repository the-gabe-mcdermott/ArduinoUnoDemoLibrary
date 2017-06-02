/*
 * Pins.h
 *
 * Created: 6/1/2017 20:38:29
 *  Author: Gabe
 */ 


#ifndef PINS_H_
#define PINS_H_
#include <asf.h>

#define Bit_7 0x80
#define Bit_6 0x40
#define Bit_5 0x20
#define Bit_4 0x10
#define Bit_3 0x08
#define Bit_2 0x04
#define Bit_1 0x02
#define Bit_0 0x01

#define BUTTON_PORT_OUTPUT_REG PORTB
#define BUTTON_PORT_CONFIG_REG DDRB
#define BUTTON_PORT_INPUT_REG PINB

#define BUTTON_BIT_MASK Bit_4
#define BUTTON_BIT_POSITION 4

#endif /* PINS_H_ */