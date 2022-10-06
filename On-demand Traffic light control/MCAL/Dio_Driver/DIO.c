/*
 * DIO.c
 *
 * Created: 9/10/2020 10:42:3 PM
 *  Author: Mahmoud
 */ 

#include "On-demand Traffic light control/MCAL/Dio_Driver/DIO.h"
////////////////////////////////initialize port (output/input)//////////////////////////////////////////////////////
void DIO_init(uint8_t Pin_Number , uint8_t Port_Number,uint8_t Direction )
{
	switch(Port_Number){
		case 'A':
		if(Direction==PIN_OUTPUT){
		DDRA |=(1<<Pin_Number);
		}
		else if(Direction==PIN_INPUT){
			DDRA &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		case 'B':
		if(Direction==PIN_OUTPUT){
			DDRB |=(1<<Pin_Number);
		}
		else if(Direction==PIN_INPUT){
			DDRB &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		case 'C':
		if(Direction==PIN_OUTPUT){
			DDRC |=(1<<Pin_Number);
		}
		else if(Direction==PIN_INPUT){
			DDRC &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		case 'D':
		if(Direction==PIN_OUTPUT){
			DDRD |=(1<<Pin_Number);
		}
		else if(Direction==PIN_INPUT){
			DDRD &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		
	}
}
/////////////////////////////////////////////////Write function/////////////////////////////////////////
void DIO_write(uint8_t Pin_Number , uint8_t Port_Number,uint8_t value){
	switch(Port_Number){
		case 'A':
		if(value==PIN_HIGH){
			PORTA |=(1<<Pin_Number);
		}
		else if(value==PIN_LOW){
			PORTA &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		case 'B':
		if(value==PIN_HIGH){
			PORTB |=(1<<Pin_Number);
		}
		else if(value==PIN_LOW){
			PORTB &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		case 'C':
		if(value==PIN_HIGH){
			PORTC |=(1<<Pin_Number);
		}
		else if(value==PIN_LOW){
			PORTC &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
		case 'D':
		if(value==PIN_HIGH){
			PORTD |=(1<<Pin_Number);
		}
		else if(value==PIN_LOW){
			PORTD &=~(1<<Pin_Number);
		}
		else{
			//error handling ,make the function return something
		}
		break;
}
}
/////////////////////////////////////////toggle function//////////////////////////////
void DIO_toggle(uint8_t Pin_Number , uint8_t Port_Number){
	switch(Port_Number){
		case 'A':
		TOGGLE_BIT(PORTA,Pin_Number);
		break;
		case 'B':
		TOGGLE_BIT(PORTB,Pin_Number);
		break;
		case 'C':
		TOGGLE_BIT(PORTC,Pin_Number);
		break;
		case 'D':
		TOGGLE_BIT(PORTD,Pin_Number);
		break;
	}
}
void DIO_read(uint8_t Pin_Number , uint8_t Port_Number,uint8_t *value){
	switch(Port_Number){
		case 'A':
		*value=READ_BIT(PINA,Pin_Number);
		break;
		case 'B':
		*value=READ_BIT(PINB,Pin_Number);
		break;
		case 'C':
		*value=READ_BIT(PINC,Pin_Number);
		break;
		case 'D':
		*value=READ_BIT(PIND,Pin_Number);
		break;
	}
}
