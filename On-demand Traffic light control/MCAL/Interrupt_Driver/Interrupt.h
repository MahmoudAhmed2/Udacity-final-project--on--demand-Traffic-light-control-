/*
 * Interrupt.h
 *
 * Created: 9/13/2022 10:49:50 PM
 *  Author: Mahmoud
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include "On-demand Traffic light control/Utilities/reg.h"
#define INT0 6
#define INT1 7
#define INT2 5
#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3
#define sei() __asm__ __volatile__ ("sei" ::: "memory")
#define cli() __asm__ __volatile__ ("sei" ::: "memory")
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)
void INTERRUPT0_Init();
void INTERRUPT1_Init();
void INTERRUPT2_Init();
#endif /* INTERRUPT_H_ */