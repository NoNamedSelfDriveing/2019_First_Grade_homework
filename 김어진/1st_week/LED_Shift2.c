#define F_CPU 16000000L


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//포트E 출력으로 세팅
	DDRE = 0xFF;
	//값 모두 0으로 초기화
	PORTE = 0x00;
	int Left2Right = 0x80; // 1000 0000 -> 0100 0000 ->...->0000 0001 -> 1000 000 
	int Right2Left = 0x01; // 0000 0001 -> 0000 0010 ->...->0000 0001 
	
	while (1)
	{
		_delay_ms(1000); //1초 대기
		PORTE ^= Left2Right | Right2Left; //포트E 레지스터 값 변경
		
		if(Left2Right == 0x01){ //끝까지 갔다면 다시 초기화
			Left2Right = 0x80;
			Right2Left = 0x01;
		}
		else{
			 //1칸 쉬프트 
			Left2Right = Left2Right >> 1;
			Right2Left = Right2Left << 1;
		}

	}
	return 0;
}