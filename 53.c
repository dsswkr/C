/* 1���� 100���� ���ڿ��� 3�� ��� ��(����: 1683)�� ���Ͽ� ����Ͻÿ�. */
#include <stdio.h>

#define NUMBER 100

/* ��� ���� ���ϴ� ���� �̿��ϱ� */
int main(void)
{
	int i, n;
	unsigned int sum = 0;

	// � ���� ��� �հ� ������ �̿��� ��� 
	n = NUMBER / 3;				// ����� ���� ���ڸ� ����� ������ ����  
	sum = 3 * n * (n + 1) / 2;

	printf("1~%i 3�� ��� �� = %i\n", NUMBER, sum);
	
	return 0;
}

/* 3�� ������� �˻��Ͽ� �� ���ϱ� */
/*
int main(void)
{
	int i;
	unsigned int sum = 0;

	for (i = 1; i <= NUMBER; i++)
		if (!(i % 3))	// 3���� ���� �������� 0�̸� 3�� ��� 
			sum += i;

	printf("1~%i 3�� ��� �� = %i\n", NUMBER, sum);    

	return 0;
}
*/