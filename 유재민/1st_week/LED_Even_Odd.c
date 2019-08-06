#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRE=0xFF;  //��Ʈ E�� ��� ���� ��»��·� ��ȯ
	//DDR�������ʹ� �Է����� ������� �����ϴ� ��������, 0�̸� �Է�, 1�̸� ��� 0xFF�� 8bits 1111 1111�̴� ��� ���� ��»��°� ��.
	int nPin= 0x55;
	while (1)
	{
		PORTE=nPin; //0101 0101�̴� ¦�� ���� ����ȴ�.
		_delay_ms(1000); //�Ƶ��̳��� delay�Լ��� ����
		PORTE=0x00;
		PORTE=~nPin; // 1010 1010 �̴� Ȧ�� ���� ����ȴ�.
		_delay_ms(1000);
		PORTE=0x00;
	}
}
