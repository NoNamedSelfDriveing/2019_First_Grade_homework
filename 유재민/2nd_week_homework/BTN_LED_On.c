/*
 * NoNamed_Vacation_Homework_YJM.c
 *
 * Created: 2019-08-06 ���� 6:04:50
 * Author : user
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRE= 0xFF; // ��� ���� ��»��·� ��ȯ
	DDRD= 0x00; // ��� ���� �Է»��·� ��ȯ
	while (1)
	{
		if(PIND==0x00) PORTE=0xFF; //PIN�������ʹ� DDR�������Ϳ��� �Է����� ������ ���� ���¸� �о�´�. 
		//Ǯ�� �����̴� ��ư�� �������� ������ �帣�� ������ 0x00�϶� led�� ������ �����Ѵ�.
		else PORTE=0x00; //�ƴ϶�� led�� ������ �������� �ʴ´�.
		
	}
	return 0;
}
