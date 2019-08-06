#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF;
	
	int nPin=0x01,i=0; // nPin를 0000 0001로 초기화
	while(1){
	if(i%8==0){
	    nPin=0x01; //8번째 LED가 켜지면 nPin과 i의 값을 다시 초기화
	    i=0;
	}
	
		
		PORTE=nPin<<i; // nPin  한 칸씩 시프트 하여 0000 0010 0000 0100 ''' 이렇게 다음 LED가 켜지도록 반복한다.
		_delay_ms(1000); 
		PORTE=0x00;
		
		

	}
	return 0;
}
