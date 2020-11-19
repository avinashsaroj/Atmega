/*
 * Blink.c
 *
 * Created: 18-11-2020 15:51:32
 * Author : avi
 */ 
#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>

int main(void)
{
	DDRA = 0x01;
	
	while(1)
	{
		PORTA = 0x01;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(1000);
	}
	
	return 0;
}

