#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRE=0xFF;  //포트 E의 모든 핀을 출력상태로 전환
	//DDR레지스터는 입력인지 출력인지 결정하는 레지스터, 0이면 입력, 1이면 출력 0xFF은 8bits 1111 1111이니 모든 핀이 출력상태가 됨.
	int nPin= 0x55;
	while (1)
	{
		PORTE=nPin; //0101 0101이니 짝수 번이 점등된다.
		_delay_ms(1000); //아두이노의 delay함수와 유사
		PORTE=0x00;
		PORTE=~nPin; // 1010 1010 이니 홀수 번이 점등된다.
		_delay_ms(1000);
		PORTE=0x00;
	}
}
