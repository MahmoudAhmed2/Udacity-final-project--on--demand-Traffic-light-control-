/*
 * button.h
 *
 * Created: 9/10/2022 8:34:07 PM
 *  Author: Mahmoud
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "On-demand Traffic light control/Utilities/STD.h"
#include "On-demand Traffic light control/MCAL/Dio_Driver/DIO.h"
#include "On-demand Traffic light control/Utilities/reg.h"

void Button_init(uint8_t Button_Port, uint8_t Button_Pin);
void Button_Read(uint8_t Button_Port, uint8_t Button_Pin, uint8_t *state);

#endif /* BUTTON_H_ */