#define F_CPU 16000000L


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//포트E 출력으로 세팅
	DDRE = 0xFF;
	 
	while (1) 
    {
		//포트E 0xff으로 변경 -> LED ON
		PORTE = 0xFF;
		// 1초 대기
		_delay_ms(1000);
		
		//포트E 값 0x00으로 변경 -> LED OFF
		PORTE = 0x00;
		//1초 대기
		_delay_ms(1000);
	}
	return 0;
}

