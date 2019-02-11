/*
 * LED_BLINKING_8.c
 *
 * Created: 1/31/2018 10:37:01 AM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
	const int d=500;
	DDRB=0xff;
    for (char i=0;i<9;i++)
    {
		PORTB=0xaa;
		_delay_ms(d);
		PORTB=0x55;
		_delay_ms(d);
    }
	PORTB=0x00;
}