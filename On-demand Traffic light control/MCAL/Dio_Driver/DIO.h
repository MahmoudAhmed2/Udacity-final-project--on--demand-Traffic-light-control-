/*
 * DIO.h
 *
 * Created: 9/10/2022 8:53:56 PM
 *  Author: Mahmoud
 */ 



#ifndef DIO_H_
#define DIO_H_
//#include <avr/io.h>
#include "On-demand Traffic light control/Utilities/STD.h"
#include "On-demand Traffic light control/Utilities/reg.h"  
#define DIO_PORTA 'A'
#define DIO_PORTB 'B'
#define DIO_PORTC 'C'
#define DIO_PORTD 'D'


#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define PIN_OUTPUT 1
#define PIN_INPUT 0
#define DIO_PORT_OUTPUT 0xff
#define DIO_PORT_INPUT 0x00
#define PIN_HIGH 1
#define PIN_LOW 0
#define DIO_PORT_HIGH 0xff
#define DIO_PORT_LOW 0x00

void DIO_init(uint8_t Pin_Number , uint8_t Port_Number,uint8_t Direction );
void DIO_write(uint8_t Pin_Number , uint8_t Port_Number,uint8_t value);
void DIO_toggle(uint8_t Pin_Number , uint8_t Port_Number);
void DIO_read(uint8_t Pin_Number , uint8_t Port_Number,uint8_t *value); 



#endif /* DIO_H_ */