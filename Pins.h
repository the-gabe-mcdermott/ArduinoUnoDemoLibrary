/*
 * Pins.h
 *
 * Created: 6/1/2017 20:38:29
 *  Author: Gabe
 */ 


#ifndef PINS_H_
#define PINS_H_
#include <asf.h>

/***************************************************
*	ConfigurePinsForOutput
*
*		regValue:	Register address of the port 
*					you want setup for output.
*		Returns:		Value to write to the register.
*		regValue:		data read from the register.
*		bitsToConfigure:	Value with "1"'s in the bit positions you
*							want configured for output.
*							and "0"'s in the bit positions you want
*							left alone.
********************************************************/
uint8_t ConfigurePinsForOutput(uint8_t dirRegValue, uint8_t bitsToConfigure);

/***************************************************
*	ConfigurePinsForInput
*
*		Returns:			Value to write to the register.
*		regValue:			data read from the register.
*		bitsToConfigure:	Value with "1"'s in the bit positions you
*							want configured for input.
*							
*							and "0"'s in the bit positions you want
*							left alone.
********************************************************/
uint8_t ConfigurePinsForInput(uint8_t dirRegValue, uint8_t bitsToConfigure);

/***************************************************
*	SetPinValues
*		Assigns the specified pins to "1"
*
*		Returns:		Value to write to the register.
*		regValue:		data read from the register.
*		bitsToClear:	Value with "1"'s in the bit positions you
*						want assigned to 1.
*						
*						and "0"'s in the bit positions you want
*						left alone.
********************************************************/
uint8_t SetPinValues(uint8_t regValue, uint8_t bitsToSet);

/***************************************************
*	ClearPinValues
*		Assigns the specified pins to "0"
*
*		Returns:		Value to write to the register.
*		regValue:		data read from the register.
*		bitsToClear:	Value with "1"'s in the bit positions you
*						want assigned to 0.
*
*						and "0"'s in the bit positions you want
*						left alone.
********************************************************/
uint8_t ClearPinValues(uint8_t regValue, uint8_t bitsToClear);

uint8_t ReadPinValues(uint8_t regValue, uint8_t bitsToRead);



//Masks for individual pin positions 0-7
#define BIT_7 0x80
#define BIT_6 0x40
#define BIT_5 0x20
#define BIT_4 0x10
#define BIT_3 0x08
#define BIT_2 0x04
#define BIT_1 0x02
#define BIT_0 0x01



#endif /* PINS_H_ */