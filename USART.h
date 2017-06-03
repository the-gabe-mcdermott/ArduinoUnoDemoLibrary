/*
 * USART.h
 *  I Didn't write this codebase.
 *
 *	I got this UART implementation from an example 
 *	on this blog:
 *		https://hekilledmywire.wordpress.com/2011/01/05/using-the-usartserial-tutorial-part-2/
 *
 *	No author listed. :/ 
 *
 *	I'll be writing a UART implementation of my own to
 *	Add to this example soon. 
 */ 


#ifndef USART_H_
#define USART_H_



//Declaration of our functions
void USART_init(void);
unsigned char USART_receive(void);
void USART_send( unsigned char data);
void USART_putstring(char* StringPtr);




#endif /* USART_H_ */