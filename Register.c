/*
 * Register.c
 *
 * Created: 6/1/2017 22:33:47
 *  Author: Gabe
 */ 
#include "Register.h"

regValue_t ReadRegister(regAddress_t readAddres)
{
	regValue_t returnThis;
	returnThis.RegValueByte = 0;
	
	returnThis.RegValueByte = readAddres;	
	
	return returnThis;
}

void WriteRegister(regAddress_t writeAddress, regValue_t writeData)
{
	writeAddress = writeData.RegValueByte;
}
