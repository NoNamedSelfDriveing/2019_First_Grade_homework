#define F_CPU 16000000L


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	//포트E 출력으로 세팅
	DDRE = 0xFF;
	//값 0101 0101으로 초기화 
	PORTE = 0x55;
		
	while (1) 
    {
		_delay_ms(1000);
		PORTE ^= 0xff; 
		
	}
	return 0;
}

