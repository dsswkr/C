/* 1~n���� ���� ���� 1000�� �Ѿ�� ���� ���� �� n�� ����Ͻÿ�. */

#include <stdio.h>

#define LIMIT 1000

int main(void)
{
	int i, n;

	for (i = 1, n = 0; n < LIMIT; i++) 
		n += i;
	i--;
		
	printf("1~n ���� 1000�� �Ѿ�� ���� ���� �� n = %i \n\n", i);

	return 0;
}
