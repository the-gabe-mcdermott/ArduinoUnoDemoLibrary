/*
 * TestButtonToggleLedDemo.c
 *
 * Created: 6/1/2017 22:51:44
 *  Author: Gabe
 */ 
#include "TestButtonToggleLedDemo.h"
#include "DebugTools.h"

#include "TestPins.h"


uint8_t RunAllButtonToggleLedTests(void)
{
	uint8_t allTestsPass = 1;
	
	//Holds array of test results.
	uint8_t testResults[2] = {0};
	uint8_t numTests = 2;
	InitDebug();
	
	//Wait for the testing user to get a uart window open.
	DebugGetWaitForChar();
	
	DebugPrintString("Testing: ");
	testResults[0] = TestPinConfig();
	DebugPrintNewLine();
	testResults[1] = TestSetAndClearPins();
	
	
	
	
	
	return allTestsPass;
}