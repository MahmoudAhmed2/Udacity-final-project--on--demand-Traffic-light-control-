/*
 * Application.h
 *
 * Created: 9/14/2022 6:56:36 AM
 *  Author: Mahmoud
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_
#define F_CPU   1000000UL
#include "On-demand Traffic light control/ECUAL/Led_Driver/led.h"
#include "On-demand Traffic light control/ECUAL/Button_Driver/button.h"
#include "On-demand Traffic light control/MCAL/Timer_Driver/timers.h"
#include "On-demand Traffic light control/MCAL/Interrupt_Driver/Interrupt.h"
#define PIN_HIGH 1
#define PIN_LOW 0
#define HiGH 1
#define LOW  0
#define Green_Light_For_Cars 0
#define Yellow_Light_For_Cars 1
#define Red_Light_For_Cars 2
#define Traffic_Light_Delay 5
#define yellow_blinks 10
#define yellow_Light_Delay 0.5
#define Debounce_Delay 0.2
#define Start_state 5
uint8_t Traffic_State_;
uint8_t flag_interrupt;
uint8_t state;
void Green_Light_Normal_Mode();
void Yellow_Light_Normal_Mode();
void Red_Light_Normal_Mode();
void Green_Light_Pedestrian_Mode();
void Yellow_Light_Pedestrian_Mode();
void Red_Light_Pedestrian_Mode();
void App_Init();
void App_Start();

#endif /* APPLICATION_H_ */