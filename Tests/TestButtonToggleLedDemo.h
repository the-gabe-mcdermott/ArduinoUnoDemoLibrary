/*
 * TestButtonToggleLedDemo.h
 *
 * Created: 6/1/2017 22:50:16
 *  Author: Gabe
 */ 


#ifndef TESTBUTTONTOGGLELEDDEMO_H_
#define TESTBUTTONTOGGLELEDDEMO_H_

#include "asf.h"
#include "DebugTools.h"

/**********************************************
*	RunAllTests
*		Runs all tests.
*		!!!!NOTE!!!!:
*		BLOCKS AND WAITS FOR RECIEVED UART CHAR
*			This gives you time to open a terminal window
*			before it starts writing test results to it.
*			
*			If you don't want that, you can easily remove
*			remove it in "TestButtonToggleLedDemo.c"
*		
*		Returns 1 for all tests pass.
*		Returns 0 for a Test failure detected.
*		Depends on UART to send and receive messages
*		for testing.
*************************************************/
uint8_t RunAllButtonToggleLedTests(void);

#endif /* TESTBUTTONTOGGLELEDDEMO_H_ */