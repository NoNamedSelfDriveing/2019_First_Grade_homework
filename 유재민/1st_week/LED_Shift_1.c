#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF;
	
	int a=0x01,i;
	while(1){
		a=0x01;
		for(i=0;i<8;i++){
			PORTE=a<<i;
			_delay_ms(1000);
			PORTE=0x00;
		}

	}
	return 0;
}