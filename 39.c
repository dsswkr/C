/* 1���� 20������ log X ��� ���� �� ������ ����Ͻÿ�. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;

	for (i = 1; i <= 20; i++)
		printf("LOG(%i) = %f\n", i, log((double)i));

	return 0;
}

