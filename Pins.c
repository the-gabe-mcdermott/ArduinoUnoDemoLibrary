/*
 * Pins.c
 *
 * Created: 6/2/2017 09:00:38
 *  Author: Gabe
 */ 

void ConfigurePinsForOutput(uint8_t directionRegToConfigure, uint8_t bitsToConfigure)
{	
	uint8_t dirRegValue = directionRegToConfigure;
	//Setup specified bis on given register for 
	//output (1). 
	dirRegValue |= bitsToConfigure;
	directionRegToConfigure = dirRegValue;
}

void ConfigurePinsForInput(uint8_t directionRegToConfigure, uint8_t bitsToConfigure)
{
	uint8_t dirRegValue = directionRegToConfigure;
	//Setup specified bis on given register for
	//Input (0).
	dirRegValue &= ~bitsToConfigure;
	directionRegToConfigure = dirRegValue;
}

void SetPinValues(uint8_t regToSet, uint8_t bitsToSet)
{
	uint8_t regValue = regToSet;
	//Assign the specified pins to 1.
	regValue |= bitsToSet;
	regToSet = regValue;
}

void ClearPinValues(uint8_t regToClear, uint8_t bitsToClear)
{
	uint8_t regValue = regToClear;
	//Assign the specified pins to 0.
	regValue &= ~bitsToClear;
	regToClear = regValue;
}


