/*
 * Pins.c
 *
 * Created: 6/2/2017 09:00:38
 *  Author: Gabe
 */ 
#include "Pins.h"

uint8_t ConfigurePinsForOutput(uint8_t registerData, uint8_t bitsToConfigure)
{	
	uint8_t dirRegValue = registerData;
	//Setup specified bis on given register for 
	//output (1). 
	dirRegValue = dirRegValue | bitsToConfigure;
	return dirRegValue;
}

uint8_t ConfigurePinsForInput(uint8_t dirRegValue, uint8_t bitsToConfigure)
{
	//Setup specified bis on given register for
	//Input (0).
	dirRegValue &= ~bitsToConfigure;
	return dirRegValue;
}

uint8_t SetPinValues(uint8_t regValue, uint8_t bitsToSet)
{
	//Assign the specified pins to 1.
	regValue |= bitsToSet;
	return regValue;
}

uint8_t ClearPinValues(uint8_t regValue, uint8_t bitsToClear)
{
	//Assign the specified pins to 0.
	regValue &= ~bitsToClear;
	return regValue;
}

uint8_t ReadPinValues(uint8_t regValue, uint8_t bitsToRead)
{
	//Have the read value
	//Mask for only the bits we want.
	regValue &= bitsToRead;
	return regValue;
}
