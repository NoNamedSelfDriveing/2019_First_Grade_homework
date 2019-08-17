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
	unsigned char led1;         //LED점등 데이터가 저장될 8bit변수 led1
	unsigned char led2;        //LED점등 데이터가 저장될 8bit변수 led2

	DDRA = 0xff;                 //포트A를 출력으로 설정
	PORTA = 0xff;

	int i;

	led1 = 0x01;
	led2 = 0x08;

	while (1)
	{

		for (i=1; i<=4; i++) {     // 4번 반복
			PORTA = (led1|led2);
			(led1 <<= 1);           //좌 시프트
			(led2 >>= 1);           //우 시프트
			_delay_ms(5000);
		}
		led1 = 0x01;
		led2 = 0x08;
	}

}