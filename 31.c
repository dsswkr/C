/* 9.5 �Ǽ� ���� �ø� �Լ�(ceil())�� ���� �Լ�(floor())�� �̿��� 
   ��� ��� ���� ���� ����Ͻÿ�. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double num = 9.5;	// float num = 9.5

	printf("%.1f�� �ø� ��: %.1f\n", num, ceil(num));
	printf("%.1f�� ���� ��: %.1f\n", num, floor(num));

	return 0;
}