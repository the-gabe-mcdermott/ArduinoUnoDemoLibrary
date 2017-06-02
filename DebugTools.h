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

void DebugPrintString(char* printThis);
void DebugPrintData(uint8_t printThis);
void DebugPrintNewLine(void);
char DebugGetWaitForChar(void);
char DebugPrintDataAndWaitForChar(char* printThisString, uint8_t printThisData);


#endif /* DEBUGTOOLS_H_ */