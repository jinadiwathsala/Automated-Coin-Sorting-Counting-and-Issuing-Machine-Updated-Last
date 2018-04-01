/*
 * Stepper_motor.c
 *
 * Created: 9/26/2016 6:03:26 PM
 * Author : Jinadi Wathsala
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB =0b00001111;
	
    while(1)
    {
		PORTB = 0b00001000;
		_delay_ms(10);
		PORTB = 0b00000100;
		_delay_ms(10);
		PORTB = 0b00000010;
		_delay_ms(10);
		PORTB = 0b00000001;
		_delay_ms(10);
		
    } 
    	
		
			
    
}

