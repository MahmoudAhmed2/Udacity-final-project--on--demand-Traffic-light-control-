/*
 * timers.h
 *
 * Created: 9/13/2022 5:15:24 PM
 *  Author: Mahmoud
 */ 


#ifndef TIMERS_H_
#define TIMERS_H_
#include "On-demand Traffic light control/MCAL/Dio_Driver/DIO.h"
#include "On-demand Traffic light control/Utilities/reg.h"
#define TIMER0 0
#define TIMER1 1
#define TIMER2 2
#define Normal_Mode 0b00000001
#define CTC_Mode    0b01000001
#define Fast_PWM    0b01001001
#define Phase_Correct_Mode 0b00001001
#define Number_of_overflows_for_1second 3906	
void Timer_Start(uint8_t Timer_Number ,uint8_t Timer_Mode);
void Timer_Stop();
void Delay_Seconds(float Seconds/*uses timer 0*/);


#endif /* TIMERS_H_ */