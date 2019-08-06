#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF; // ��� ���� ��»��·� ��ȯ 
	int left=0x01, right=0x80,pleft,pright,cnt=0; //���� led4���� ����ϴ� left,  
	//���� led4���� ����ϴ� right, left�� ���� ���� �����ϴ� ���� pleft, 
	//right�� ���� ���� �����ϴ� ���� pright, �ݺ� Ƚ���� ���� cnt ���� ����.  
	
	pleft=left; //left�� �� ���� 
	pright=right;// right�� �� ���� 
	PORTE=0x00;
	while(1){
		_delay_ms(1000); // ó������ �ƹ� �͵� �� ������ 1�� ���. 
		PORTE=pleft|pright; //pleft�� pright�� OR ������ ���� ������ �Ѵ�. 
		
		if(cnt>=3){ 	// 4�� �ݺ��ϸ� ��� led�� ���� led�� ������ �ϴ� �ڵ尡 �ִ� if�� ��� 
			
			pleft=pleft>>1; //  1111�� 0111�� �Ͽ� ������ led�� �ϳ��� �������� 
			pright=pright<<1; //  1111�� 1110�� �Ͽ� �������� led�� �ϳ��� �������� 
			
			if (cnt==7) // ��� led�� ������ �ٽ� ó�� ���·� �ʱ�ȭ ��. 
			{	
				left=0x01;
				right=0x80;
				pleft=left;
				pright=right;
				cnt=-1;
				
			}
		}
		else{
				
				left=left<<1; //�������� ����Ʈ �� ĭ�Ͽ� �� ���� led�� ������ ��. ������ ù ��° led�� ����. 
				pleft=pleft|left; //�׷��� ���� left�� ���� ����� pleft�� OR������ �Ͽ� ù ��° led�� ������ ��. 
				right=right>>1; //���������� ����Ʈ �� ĭ�Ͽ� �� ���� led�� ������ ��. ������ ���� ��° led�� ����.
				pright=pright|right; //�׷��� ���� right�� ���� ����� pright�� OR������ �Ͽ� ���� ��° led�� ������ ��. 
		}
		cnt++; // Ƚ�� ���� �� 

	}
	return 0;
}
