#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF; // 모든 핀을 출력상태로 전환 
	int left=0x01, right=0x80,pleft,pright,cnt=0; //좌측 led4개를 담당하는 left,  
	//우측 led4개를 담당하는 right, left의 과거 값을 저장하는 변수 pleft, 
	//right의 과거 값을 저장하는 변수 pright, 반복 횟수를 세는 cnt 변수 선언.  
	
	pleft=left; //left의 값 저장 
	pright=right;// right의 값 저장 
	PORTE=0x00;
	while(1){
		_delay_ms(1000); // 처음에는 아무 것도 안 켜지게 1초 대기. 
		PORTE=pleft|pright; //pleft와 pright를 OR 연산한 값을 켜지게 한다. 
		
		if(cnt>=3){ 	// 4번 반복하면 모든 led가 켜져 led를 꺼지게 하는 코드가 있는 if문 사용 
			
			pleft=pleft>>1; //  1111을 0111로 하여 왼쪽의 led를 하나씩 꺼지게함 
			pright=pright<<1; //  1111을 1110로 하여 오른쪽의 led를 하나씩 꺼지게함 
			
			if (cnt==7) // 모든 led가 꺼지면 다시 처음 상태로 초기화 함. 
			{	
				left=0x01;
				right=0x80;
				pleft=left;
				pright=right;
				cnt=-1;
				
			}
		}
		else{
				
				left=left<<1; //왼쪽으로 시프트 한 칸하여 그 다음 led가 켜지게 함. 하지만 첫 번째 led는 꺼짐. 
				pleft=pleft|left; //그래서 과거 left의 값이 저장된 pleft에 OR연산을 하여 첫 번째 led가 켜지게 함. 
				right=right>>1; //오른쪽으로 시프트 한 칸하여 그 다음 led가 켜지게 함. 하지만 여덟 번째 led는 꺼짐.
				pright=pright|right; //그래서 과거 right의 값이 저장된 pright에 OR연산을 하여 여덟 번째 led가 켜지게 함. 
		}
		cnt++; // 횟수 세는 중 

	}
	return 0;
}
