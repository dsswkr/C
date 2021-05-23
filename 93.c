/* 1���� 100������ �������� �Ҽ��� 20�� ������� ����ϵ�, '�����佺�׳׽��� ü' ������ �̿��Ͻÿ�. */

#include <stdio.h>

#define MAX 100
#define COUNT 20

int main(void)
{
	int i, j;
	int n = 0;							// ���� �Ҽ� ����
	int check[MAX + 1] = { 0, };		// �Ҽ� �Ÿ��� �迭 (�׸� ��ġ�� ���� �� ���� �Ҽ� üũ ����)
	int prime_num[COUNT+1] = { 0, };	// �Ҽ��� ������ �迭 

	for (i = 2; i <= MAX && n < COUNT; i++)		// 2���� ��� �˻�...
	{
		if (check[i] == 0) {
			printf("%i ", prime_num[n++] = i);	// �Ҽ� ���� �� ���
			for (j = i; j <= MAX; j += i)		// ����� �Ҽ��� �ƴ�
				check[j] = 1;
		}
	}

	printf("\n\n");

	return 0;
}