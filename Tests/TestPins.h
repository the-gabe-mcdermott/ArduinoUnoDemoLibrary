/*
 * TestPins.h
 *
 * Created: 6/2/2017 11:02:56
 *  Author: Gabe
 */ 


#ifndef TESTPINS_H_
#define TESTPINS_H_

#include "TestsCommonDefinitions.h"
#include "Pins.h"
#include "asf.h"
#include "DebugTools.h"

/****************************************
*	TestPinConfig
*		Tests to ensure setting pins for
*		input or output accurately 
*		writes to a register.
*****************************************/
uint8_t TestPinConfig(void);


/*******************************************
*	TestSetAndClearPins(void)
*		Tests to ensure Setting "1"s
*		And "0"'s with a mask writes 
*		correctly to only the masked 
*		values
********************************************/
uint8_t TestSetAndClearPins(void);


#endif /* TESTPINS_H_ */