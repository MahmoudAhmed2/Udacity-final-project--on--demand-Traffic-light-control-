/*
 * Interrupt.c
 *
 * Created: 9/13/2022 10:48:31 PM
 *  Author: Mahmoud
 */ 
#include "On-demand Traffic light control/MCAL/Interrupt_Driver/Interrupt.h"
void INTERRUPT0_Init(){
	sei(); //EN_Global_INTERRUPTS
	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);
	SET_BIT(GICR,INT0);
}
void INTERRUPT1_Init(){
	sei();
	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);
	SET_BIT(GICR,INT1);
}
void INTERRUPT2_Init(){
	sei();
	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);
	SET_BIT(GICR,INT2);
}