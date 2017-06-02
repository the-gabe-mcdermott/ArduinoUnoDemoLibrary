/*
 * USART.h
 *
 * Created: 5/23/2017 19:39:45
 *  Author: Gabe
 */ 


#ifndef USART_H_
#define USART_H_



//Declaration of our functions
void USART_init(void);
unsigned char USART_receive(void);
void USART_send( unsigned char data);
void USART_putstring(char* StringPtr);




#endif /* USART_H_ */