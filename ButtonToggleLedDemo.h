/*
 * ButtonToggleLedDemo.h
 *
 * Created: 6/1/2017 20:19:54
 *  Author: Gabe
 */ 


#ifndef BUTTONTOGGLELEDDEMO_H_
#define BUTTONTOGGLELEDDEMO_H_

/******************************
* ButtonToggleLedInit
*	Initilizes ButtonToggle project.
*	Call before ButtonToggleLedLoop.
**************************************/
void ButtonToggleLedInit(void);

/***********************************
* ButtonToggleLedLoop
*	Endless loop.
*	Reads push button
*	Toggles an LED on every push	 
************************************/
void ButtonToggleLedLoop(void);


#endif /* BUTTONTOGGLELEDDEMO_H_ */