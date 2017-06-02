/*
 * Register.h
 *
 * Created: 6/1/2017 20:48:58
 *  Author: Gabe
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
#include "asf.h"

/****************************************
* Define new type "regAddress_t" as an uint8_t
*******************************************/
typedef uint8_t regAddress_t;

/*******************************************
* Define new type "reGValue_t"
*	Can be treated either as
*		uint8_t
*	or
*		8-bit bitfeild.
********************************************/
typedef union regValue_t
{
	uint8_t RegValueByte;
	typedef struct RegValueBits
	{
		uint8_t Bit0:1;
		uint8_t Bit1:1;
		uint8_t Bit2:1;
		uint8_t Bit3:1;
		uint8_t Bit4:1;
		uint8_t Bit5:1;
		uint8_t Bit6:1;
		uint8_t Bit7:1;
		
	} regValueBits_t;
} regValue_t;



/************************************************
* ReadRegister
*	reads data at given address
**************************************************/
regValue_t ReadRegister(regAddress_t readAddres);


/****************************************************
* WriteRegister
*	Writes the given address to a register.
****************************************************/
void WriteRegister(regAddress_t writeAddress, regValue_t writeData);

#endif /* REGISTERIO_H_ */