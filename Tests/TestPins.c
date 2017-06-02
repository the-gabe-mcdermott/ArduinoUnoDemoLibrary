/*
 * TestPins.c
 *
 * Created: 6/2/2017 11:08:30
 *  Author: Gabe
 */ 

#include "TestPins.h"



uint8_t TestPinConfig(void)
{
	uint8_t PIN_MASK = BIT_5;
	
	DebugPrintString("Beginning TestPinConfig:");
	DebugPrintNewLine();
	
	DebugPrintString("Starting Value in DDRB:");
	DebugPrintData(DDRB);
	DebugPrintNewLine();
	
	DebugPrintString("About to assign this pin to output (1):");
	DebugPrintData(BIT_5);
	DebugPrintNewLine();
	
	DDRB = ConfigurePinsForOutput(DDRB, PIN_MASK);
	
	uint8_t checkConfig = DDRB;
	DebugPrintString("Results from assignment: ");
	DebugPrintData(checkConfig);
	DebugPrintNewLine();
	
	//Mask for only the bits we configured
	checkConfig &= 0x20;
	//Expect DDRB bit 5 to be set to "1"
	
	DebugPrintString("TestPinConfig: ");
	DebugPrintNewLine();
	
	if (checkConfig == PIN_MASK)
	{
		DebugPrintString(TEST_PASS_MESSAGE);
		return TEST_PASS;
	}
	else
	{
		DebugPrintString(TEST_FAILURE_MESSAGE);
		return TEST_FAIL;
	}
}

uint8_t TestSetAndClearPins(void)
{
	DebugPrintString("SetAndClearPins:");
	ConfigurePinsForOutput(DDRB, BIT_5);
	uint8_t testRead = 0;
	uint8_t testResults = TEST_PASS;
	
	
	//Test settings bits.
	DDRB = SetPinValues(DDRB, BIT_5);
	
	//Expect result to have 5th bit set.
	//. xxx1 xxxx
	testRead = DDRB; 
	//Isolate 5th bit
	testRead &= BIT_5;
	
	if (testRead != BIT_5)
		testResults = TEST_FAIL;
				
		
	//Test clearing bits.
	DDRB = ClearPinValues(DDRB, BIT_5);
	
	//Expect result to have 5th bit clear.
	// xxx0 xxxx
	testRead = DDRB;
	//Isolate 5th bit
	testRead &= BIT_5;
	// 
	if (testRead != 0)
		testResults = TEST_FAIL;


	if (testResults == TEST_FAIL)
		DebugPrintString(TEST_FAILURE_MESSAGE);
	else
		DebugPrintString(TEST_PASS_MESSAGE);
		
	
	return testResults;
}