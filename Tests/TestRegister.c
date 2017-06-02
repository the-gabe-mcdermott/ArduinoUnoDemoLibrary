/*
 * TestRegisters.c
 *
 * Created: 6/1/2017 22:42:36
 *  Author: Gabe
 */ 
#include "TestRegister.h"
#include "../Register.h"
#include "TestsCommonDefinitions.h"


uint8_t TestRegisterReadWrite(void)
{
	DebugPrintString("RegisterRead/WriteFuncs: ");
	
	regValue_t someData;
	someData.RegValueByte = 0x31;
	someData.RegValueBits.Bit0 = 1;
	
	
	WriteRegister(PORTB, someData);
	
	//Data read back should be the same.
	if (ReadRegister(PORTB) == someData.RegValueByte)
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
