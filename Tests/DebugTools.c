/*
 * DebugTools.c
 *
 * Created: 5/23/2017 19:57:36
 *  Author: Gabe
 */ 
#include "DebugTools.h"

void InitDebug(void)
{
	USART_init();
}

char DebugGetWaitForChar(void)
{
	return USART_receive();
}

void DebugPrintString(char* printThis)
{
	USART_putstring(printThis);
}

void DebugPrintData(uint8_t printThis)
{
	USART_send(printThis + 0x30);
}

void DebugPrintNewLine(void)
{
	char newlineBuffer[] = {0x0A, 0X0D};
	USART_putstring(newlineBuffer);
}

char DebugPrintDataAndWaitForChar(char* printThisString, uint8_t printThisData)
{
	DebugPrintString(printThisString);
	DebugPrintData(printThisData);
	DebugPrintNewLine();
	return DebugGetWaitForChar();	
}