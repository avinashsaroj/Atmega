/*
 * Music light.c
 *
 * Created: 19-11-2020 11:56:47
 * Author : avi
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define LED_ON  PORTB|=(1<<PORTB5)
#define LED_OFF  PORTB &= ~(1<<PORTB5)
#define LED_TOGGLE  PINB|= (1<<PINB5)

int main(void)
{
	DDRB|=(1<<DDB5);
	DDRB&=~(1<<DDB7);
	
	while(1)
	{
		if (!(PINB & (1<<PINB7)))
		{
			LED_ON;
			
		}
		else
		{
			LED_OFF;
		}
	}
}