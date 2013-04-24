/*********************************************************
* File: init.h
*
* Description: This is a header file for functions used to 
*			   initialize the STK600 IOs used in lab3.
*
* Author: Haleigh Vierra, Matt Cruse
*
* Revisions:
*   4/18/2013 HAV Original File Created
*   4/23/2013 HAV MAC Changed defines values for 7Hz and 14Hz
*
**********************************************************/
#ifndef INIT_H_
#define INIT_H_

//-------------------Library Includes--------------------//
#include <avr/io.h>

//OCR_value = clk_freq / prescaler / desired_frequency / #clk_edges
#define TIMER2_7Hz 138 //Value for OCR0A corresponding to 65Hz
#define TIMER2_14Hz 68 //Value for OCR1A corresponding to 10Hz

//-----------------Function Prototypes-------------------//
//Function used to configure IOs
void vIO_init(void);

// Function used to configure timer interrupt
void initialize_timer2(void);

// Function used to configure external button interrupt
void initialize_button_read(void);
#endif /* INIT_H_ */