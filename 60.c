/* 1~n ���� ���� 10,000�� ���� �ʴ� ���� ū �� n�� ����Ͻÿ�. */

#include <stdio.h>

#define LIMIT 10000

int main(void)
{
	int i, n;

	for (i = 1, n = 0; n < LIMIT; i++)
		n += i;

	i -= 2;

	printf("1~n ���� %i�� ���� �ʴ� ���� ū ���� n = %i \n\n", LIMIT, i);

	return 0;
}


