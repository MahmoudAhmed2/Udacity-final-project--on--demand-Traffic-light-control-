/*
 * button.c
 *
 * Created: 9/10/2022 8:33:22 PM
 *  Author: Mahmoud
 */ 
#include "On-demand Traffic light control/ECUAL/Button_Driver/button.h"
void Button_init(uint8_t Button_Port, uint8_t Button_Pin){
	DIO_init(Button_Pin,Button_Port,PIN_INPUT);	
}
void Button_Read(uint8_t Button_Port, uint8_t Button_Pin, uint8_t *state){
	DIO_read(Button_Pin,Button_Port,state);
}