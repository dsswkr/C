/* 1~100 �������� ���� ���� 5000�� ���� �ʴ� ���� ū ���� �� ���� ���� ����Ͻÿ�. */

#include <stdio.h>

#define LIMIT 5000

int main(void)
{
	unsigned int i, n;

	for (i = 0; i <= LIMIT; i++) {
		if ((i*i) > LIMIT) {
			n = i-1;
			break;
		}
	}

	printf("���� ���� 5000�� ���� �ʴ� ���� ū ������ %i�Դϴ�.\n", n);
	printf("%i�� ���� �� = %i\n", n, n*n);

	return 0;
}