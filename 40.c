/* 100������ 10�Ⱓ 5% ������ ������ ��, ���� �� ã�� ���� ����Ͻÿ�. 
   (�������� = ������ (����*�Ⱓ)���̰� �Ⱓ�� �� �����̴�.)  */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double money = 1000000;
	double interest = 0.05;
	double years = 10;
	double ret;

	ret = money * pow(1.0 + interest, years);

	printf("%i���� %i�� �� ��%i%% ������ ���� �� ���� �ݾ�: %i��\n",
		(int)money, (int)years, (int)(interest*100), (int)ret);

	return 0;
}