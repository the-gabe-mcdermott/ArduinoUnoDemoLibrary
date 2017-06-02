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
*		Waits for uart char recieved before running tests.
*		Returns 1 for all tests pass.
*		Returns 0 for a Test failure detected.
*		Prints results of tests over uart.
*************************************************/
uint8_t RunAllButtonToggleLedTests(void);

#endif /* TESTBUTTONTOGGLELEDDEMO_H_ */