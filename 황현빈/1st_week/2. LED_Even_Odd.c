#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int pin = 0x55;

int main(void)
{
	DDRF=0xff;
	while(1)
	{
		PORTF = pin;
		_delay_ms(1000);
		PORTF = 0x00;
		PORTF = ~pin;
		_delay_ms(1000);
		PORTF = 0x00;
	}
}