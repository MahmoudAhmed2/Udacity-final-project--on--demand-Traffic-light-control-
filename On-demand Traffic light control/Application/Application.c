/*
 * Application.c
 *
 * Created: 9/14/2022 6:56:27 AM
 *  Author: Mahmoud
 */ 
#include "On-demand Traffic light control/Application/Application.h"
/************************************************************************/
/*                     Normal Mode Functions                            */
/************************************************************************/
void Green_Light_Normal_Mode(){
	Led_on(DIO_PORTA,DIO_PIN0);
	Led_off(DIO_PORTA,DIO_PIN1);
	Led_off(DIO_PORTA,DIO_PIN2);
	Led_on(DIO_PORTB,DIO_PIN2);
	Traffic_State_=Green_Light_For_Cars;
	Delay_Seconds(Traffic_Light_Delay);
}
void Yellow_Light_Normal_Mode(){
	  uint8_t blinks;
	for (blinks=0;blinks<yellow_blinks;blinks++)
	{
		Led_off(DIO_PORTA,DIO_PIN0);
		Led_toggle(DIO_PORTA,DIO_PIN1);
		Led_off(DIO_PORTA,DIO_PIN2);
		Delay_Seconds(yellow_Light_Delay);
		if (Traffic_State_==Green_Light_For_Cars)
		{
			Led_off(DIO_PORTB,DIO_PIN0);
			Led_on(DIO_PORTB,DIO_PIN2);
		}
		if (Traffic_State_==Red_Light_For_Cars)
		{
			Led_off(DIO_PORTB,DIO_PIN2);
			Led_on(DIO_PORTB,DIO_PIN0);
		}
		
	}
	Led_off(DIO_PORTB,DIO_PIN0);
	Led_off(DIO_PORTB,DIO_PIN2);
}
void Red_Light_Normal_Mode(){

	Led_off(DIO_PORTA,DIO_PIN0);
	Led_off(DIO_PORTA,DIO_PIN1);
	Led_on(DIO_PORTA,DIO_PIN2);
	Led_on(DIO_PORTB,DIO_PIN0);
	Traffic_State_=Red_Light_For_Cars;
	Delay_Seconds(Traffic_Light_Delay);
	
}

/************************************************************************/
/*                   Pedestrian Mode Functions                          */
/************************************************************************/
void Green_Light_Pedestrian_Mode(){
	Led_on(DIO_PORTA,DIO_PIN0);
	Led_off(DIO_PORTA,DIO_PIN1);
	Led_off(DIO_PORTA,DIO_PIN2);
	Led_off(DIO_PORTB,DIO_PIN0);
	Led_off(DIO_PORTB,DIO_PIN1);
	Led_on(DIO_PORTB,DIO_PIN2);
	Delay_Seconds(Traffic_Light_Delay);
	Led_off(DIO_PORTB,DIO_PIN0);
	Led_off(DIO_PORTB,DIO_PIN1);
	Led_off(DIO_PORTB,DIO_PIN2);
	
}
void Yellow_Light_Pedestrian_Mode(){
	uint8_t blinks;
	Led_off(DIO_PORTA,DIO_PIN0);
	Led_off(DIO_PORTB,DIO_PIN0);
	Led_off(DIO_PORTA,DIO_PIN1);
	Led_off(DIO_PORTB,DIO_PIN1);
	Led_off(DIO_PORTA,DIO_PIN2);
	Led_off(DIO_PORTB,DIO_PIN2);
	for (blinks=0;blinks<yellow_blinks;blinks++)
	{
		Led_toggle(DIO_PORTA,DIO_PIN1);
		Led_toggle(DIO_PORTB,DIO_PIN1);
		Delay_Seconds(yellow_Light_Delay);
	}
	blinks=0;
}
void Red_Light_Pedestrian_Mode(){
	Led_off(DIO_PORTA,DIO_PIN0);
	Led_off(DIO_PORTA,DIO_PIN1);
	Led_on(DIO_PORTA,DIO_PIN2);
	Led_on(DIO_PORTB,DIO_PIN0);
	Led_off(DIO_PORTB,DIO_PIN1);
	Led_off(DIO_PORTB,DIO_PIN2);
	Delay_Seconds(Traffic_Light_Delay);
}
ISR(EXT_INT_0){
	uint8_t state;
	Button_Read(DIO_PORTD,DIO_PIN2,&state);
	Delay_Seconds(Debounce_Delay);
	Button_Read(DIO_PORTD,DIO_PIN2,&state);
	if(state==PIN_HIGH){
	}
	if(state==PIN_LOW){
		if(Traffic_State_==Start_state){}
		if(Traffic_State_==Green_Light_For_Cars){
		Yellow_Light_Pedestrian_Mode();
		Red_Light_Normal_Mode();
		Yellow_Light_Normal_Mode();	
		Green_Light_Normal_Mode();
			}
		if(Traffic_State_==Red_Light_For_Cars){}
		}
}
void App_Init(){
	Traffic_State_=Start_state;
	Button_init(DIO_PORTD,DIO_PIN2);
	Led_inti(DIO_PORTA,DIO_PIN0);
	Led_inti(DIO_PORTA,DIO_PIN1);
	Led_inti(DIO_PORTA,DIO_PIN2);
	Led_inti(DIO_PORTB,DIO_PIN0);
	Led_inti(DIO_PORTB,DIO_PIN1);
	Led_inti(DIO_PORTB,DIO_PIN2);
	INTERRUPT0_Init();
	Traffic_State_=Red_Light_For_Cars;
}
void App_Start(){
	while(1)
	{
		    Green_Light_Normal_Mode();
			Yellow_Light_Normal_Mode();
			Red_Light_Normal_Mode();
			Yellow_Light_Normal_Mode();
	}
}