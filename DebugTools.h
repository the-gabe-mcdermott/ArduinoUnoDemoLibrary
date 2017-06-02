/*
 * DebugTools.h
 *
 * Created: 5/23/2017 19:56:17
 *  Author: Gabe
 */ 


#ifndef DEBUGTOOLS_H_
#define DEBUGTOOLS_H_
#include <asf.h>
#include "USART.h"

/************************************
* InitDebug
*	Initializes whatever stream the debug system is using
*	(UART in this case)
*	Call before using DebugTools functions
****************************************/
void InitDebug(void);

void DebugPrintString(char* printThis);
void DebugPrintData(uint8_t printThis);
void DebugPrintNewLine(void);

/**************************************************
*	DebugWaitForChar
*		Blocks until a character is received
*		Over uart.
*		Returns the received character.
****************************************************/
char DebugGetWaitForChar(void);

char DebugPrintDataAndWaitForChar(char* printThisString, uint8_t printThisData);


#endif /* DEBUGTOOLS_H_ */