/*
 * arizona.c
 *
 * Created: 10/19/2017 5:13:10 PM
 * Author : hess.quenti08
 */ 
//set cpu clock speed
#define F_CPU 1000000UL  
#include <avr/io.h>
//simplifies getting time
#include <util/delay.h> 
int main(void)
{
	//sets port b pin 4 data direction to out
	DDRB = 0b00010000;
	
    /* Replace with your application code */
    while (1) 
    {
		//sets port b pin 4 to high to turn on LED.
		PORTB = 0b00010000;	// give power to led
		// wait AMOUNT OF TIME
		_delay_ms(1000);
		//sets port b pin 4 to low to turn off LED.
		PORTB = 0b00000000;	// give power to led
		// wait AMOUNT OF TIME
		_delay_ms(1000);
    }
}

