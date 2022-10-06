/*
 * Led.c
 *
 * Created: 9/10/2022 7:44:43 PM
 *  Author: Mahmoud
 */ 
#include "On-demand Traffic light control/ECUAL/Led_Driver/led.h"
void Led_inti(uint8_t Led_Port , uint8_t Led_Pin){
	DIO_init(Led_Pin,Led_Port,PIN_OUTPUT);
}

void Led_on(uint8_t Led_Port , uint8_t Led_Pin){
	DIO_write(Led_Pin,Led_Port,PIN_HIGH);
}
void Led_off(uint8_t Led_Port , uint8_t Led_Pin){
	DIO_write(Led_Pin,Led_Port,PIN_LOW);
}
void Led_toggle(uint8_t Led_Port , uint8_t Led_Pin){
	DIO_toggle(Led_Pin,Led_Port);
}