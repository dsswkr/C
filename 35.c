/* 1���� 10������ ���ڵ��� ������ ���� pow() �Լ��� ����Ͽ� ����Ͻÿ�. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++) 
		printf("%2i�� 4���� = %6i\n", i, (int)pow(i, 4));
	
	return 0;
}