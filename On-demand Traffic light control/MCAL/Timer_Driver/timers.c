/*
 * timers.c
 *
 * Created: 9/13/2022 5:15:06 PM
 *  Author: Mahmoud
 */ 
#include "On-demand Traffic light control/MCAL/Timer_Driver/timers.h"
void Timer_Start(uint8_t Timer_Number ,uint8_t Timer_Mode){
	switch (Timer_Number){
		case TIMER0:
		TCCR0=Timer_Mode;
		TCNT0=0x00;
		break;
	}
}
void Timer_Stop(){
	TCCR0=0x00;
	TCNT0=0x00;
}
void Delay_Seconds(float Seconds){
	int Over_Flow_counter=0;
	    TCCR0=Normal_Mode;
		TCNT0=0x00;
		while(Over_Flow_counter < (Seconds*Number_of_overflows_for_1second)){	
			while ((READ_BIT(TIFR,0))==0);
			SET_BIT(TIFR,0);
			Over_Flow_counter++;
		}
		Over_Flow_counter=0;
		TCCR0=Normal_Mode;
}
