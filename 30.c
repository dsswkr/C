/* �Ϸ翡 9�ð��� ������ ��, 35�Ⱓ �����ϴ� �ð��� ���� ����Ͻÿ�. 
   ��, ���� 8ȸ�� ������ �Ⱓ�̴�. (������ 366��) */

#include <stdio.h>

#define TIME 9
#define YEARS 35
#define LEAP_YEARS 8

int main(void)
{
	int total;
	
	total = (TIME * YEARS * 365) + (LEAP_YEARS * TIME);
	printf("�Ϸ� 9�ð��� 35��(���� 8ȸ) ������ �ð�: %i �ð�\n", total);

	return 0;
}

