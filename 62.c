/* �뵷 11�������� ���� 3,000���� ����ϵ� 7��° �Ǵ� ������ �� �� �踦 ����� ��,
   ���̳ʽ� �ݾ��� ���� �ʴ� ���� ���� ��¥ ���� ����Ͻÿ�. */

#include <stdio.h>

#define MONEY 110000

int main(void)
{
	long my_money = MONEY;
	unsigned int days = 0;

	while (my_money >= 0)   // ���� ���� ������... 
	{
		if ((days % 7) !=0 && days > 0)   // 7������ �ƴϸ�... 
			my_money -= 3000;
		else
			my_money -= 6000;

		days++;
	}

	printf("�뵷�� %i�ϱ��� ����� �� �ֽ��ϴ�.\n", days);
	
	return 0;
}