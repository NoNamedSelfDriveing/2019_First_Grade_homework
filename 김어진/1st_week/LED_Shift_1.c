#define F_CPU 16000000L


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int i;
	//포트E 출력으로 세팅
	DDRE = 0xFF;
	//값 모두 0으로 초기화 
	PORTE = 0x00;
		
	while (1) 
    {
		for(i = 0; i < 8; i++){
			PORTE = 0x01 << i; // 00000001 -> 00000010 ... 순서로 값 변경(1 == LED ON)
			_delay_ms(1000); //1초 대기
		}
		
	}
	return 0;
}

