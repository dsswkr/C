/* ù���� 1��, ��° ���� 2��, ��° ���� 4���� ���� �� �辿 �����Ͽ� ������ ��, 
  30��° �Ǵ� ���� �����ؾ� �ϴ� �ݾ��� ����Ͻÿ�. */

#include <stdio.h>

#define DAYS 30

int main(void)
{
	int i; 
	double money = 1.0;

	for (i = 2; i <= DAYS; i++)
		money = money * 2;

	printf("100��° ������ �� : %.0f��\n", money);
	
	return 0;
}
