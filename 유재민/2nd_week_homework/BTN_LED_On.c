/*
 * NoNamed_Vacation_Homework_YJM.c
 *
 * Created: 2019-08-06 오후 6:04:50
 * Author : user
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF; // 모든 핀을 출력상태로 전환
	DDRD= 0x00; // 모든 핀을 입력상태로 전환
	while (1)
	{
		if(PIND==0x00) PORTE=0xFF; //PIN레지스터는 DDR레지스터에서 입력으로 설정한 핀의 상태를 읽어온다. 
		//풀업 저항이니 버튼을 눌렀을때 전류가 흐르지 않으니 0x00일때 led에 전류를 공급한다.
		else PORTE=0x00; //아니라면 led에 전류를 공급하지 않는다.
		
	}
	return 0;
}
