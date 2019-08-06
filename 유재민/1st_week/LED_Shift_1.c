#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF;
	
	int a=0x01,i;
	while(1){
		a=0x01;  // a를 0000 0001로 초기화
		for(i=0;i<8;i++){
			PORTE=a<<i; // a 를 한 칸씩 시프트 하여 0000 0010 0000 0100 ''' 이렇게 다음 LED가 켜지도록 반복한다.
			_delay_ms(1000); 
			PORTE=0x00;
		}

	}
	return 0;
}
