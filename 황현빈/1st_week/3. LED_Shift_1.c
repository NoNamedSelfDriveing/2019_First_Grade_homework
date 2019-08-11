#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRF=0xff;
	unsigned char LED;
	while(1)
	{
		PORTF = 0x01;
		_delay_ms(1000);
		for (LED =  0; LED < 4; LED++)
		{
			PORTF = PORTF<< 1; // PORTF의 비트의 위치를  왼쪽으로 1씩 이동하여 PORTF에 대입
			_delay_ms(1000); // 1초간 대기
	}
	PORTF = 0x00;
	_delay_ms(1000);
}