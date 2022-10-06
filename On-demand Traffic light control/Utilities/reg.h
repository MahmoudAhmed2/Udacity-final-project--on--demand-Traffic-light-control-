/*
 * reg.h
 *
 * Created: 9/10/2022 8:36:35 PM
 *  Author: Mahmoud
 */ 


#ifndef REG_H_
#define REG_H_
#include "On-demand Traffic light control/Utilities/STD.h"
/************************************************************************/
/* DIO Registers                                                                     */
/************************************************************************/
#define PINA *(volatile uint8_t*)(0x39)
#define DDRA *(volatile uint8_t*)(0x3A)
#define PORTA *(volatile uint8_t*)(0x3B)

#define PINB *(volatile uint8_t*)(0x36)
#define DDRB *(volatile uint8_t*)(0x37)
#define PORTB *(volatile uint8_t*)(0x38)

#define PINC *(volatile uint8_t*)(0x33)
#define DDRC *(volatile uint8_t*)(0x34)
#define PORTC *(volatile uint8_t*)(0x35)

#define PIND *(volatile uint8_t*)(0x30)
#define DDRD *(volatile uint8_t*)(0x31)
#define PORTD *(volatile uint8_t*)(0x32)
 
 /************************************************************************/
 /* Timer0 Register                                                                     */
 /************************************************************************/
#define TCCR0 *(volatile uint8_t*)(0x53)
#define TCNT0 *(volatile uint8_t*)(0x52)
#define TIFR  *(volatile uint8_t*)(0x58)
 /************************************************************************/
 /* INTERRUPT                                                                     */
 /************************************************************************/
#define GICR  *(volatile uint8_t*)(0x5B)
#define GIFR  *(volatile uint8_t*)(0x5A)
#define MCUCR  *(volatile uint8_t*)(0x55)
#define MCUCSR  *(volatile uint8_t*)(0x54)
#endif /* REG_H_ */