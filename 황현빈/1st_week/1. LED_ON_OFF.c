/*
 * Atmega128A.c
 *
 * Created: 2019-08-06 오후 5:49:19
 * Author : user
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRF=0xff;
	while(1)
	{
		_delay_ms(1000); // 꺼진 상태로 1초 대기
		PORTF=0xff; // LED HIGH
		_delay_ms(1000); // 켜진상태로 1초 대기
		PORTF = 0x00; // LED LOW
	}
}