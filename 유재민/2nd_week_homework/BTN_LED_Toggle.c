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
	PORTE=0x00;
	while (1)
	{	
			if(PIND==0x00){
				
				PORTE=~PORTE;
				while(PIND==0x00){
				}
		}
		
	}
	return 0;
}
