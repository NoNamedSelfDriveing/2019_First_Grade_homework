/*
 * NoNamed_2019_First_Grade_homework_YJM.c
 *
 * Created: 2019-08-04 오후 8:14:25
 * Author : user
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRE=0x01;  //포트 E의 0번핀인 PE0을 출력상태로 전환 
				//DDR레지스터는 입력인지 출력인지 결정하는 레지스터, 0이면 입력, 1이면 출력 0x01은 8bits 0000 0001이니 0번째 핀인 PE0이 출력상태가 됨.
	
    while (1) 
    {
		PORTE=0x01; //0000 0001이니 0번핀인 PE0에 전류를 보냄. 아두이노 에서의 digitalWrite와 비슷하게 1이면 HIGH, 0이면 LOW이다.
		_delay_ms(1000); //아두이노의 delay함수와 유사
		PORTE=0x00; // 0000 0000이니 PE0번 핀에 GND(0V)를 출력함.
		_delay_ms(1000);
    }
}

