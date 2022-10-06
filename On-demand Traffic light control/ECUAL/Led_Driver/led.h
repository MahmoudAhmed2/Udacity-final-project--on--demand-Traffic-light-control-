/*
 * led.h
 *
 * Created: 9/10/2022 7:45:26 PM
 *  Author: Mahmoud
 */ 


#ifndef LED_H_
#define LED_H_
#include "On-demand Traffic light control/MCAL/Dio_Driver/DIO.h"
void Led_inti(uint8_t Led_Port , uint8_t Led_Pin);
void Led_on(uint8_t Led_Port , uint8_t Led_Pin);
void Led_off(uint8_t Led_Port , uint8_t Led_Pin);
void Led_toggle(uint8_t Led_Port , uint8_t Led_Pin);



#endif /* LED_H_ */