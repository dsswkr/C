/* 1���� 100���� ���ڿ��� ¦�� ���� ���Ͽ� ����Ͻÿ�. */

#include <stdio.h>

#define NUMBER 100

/* ¦�� ���� ���ϴ� ���� �̿��ϱ� */
int main(void)
{
	int i, n;
	unsigned int sum = 0;

	// �������� ���ϴ� 1~NUMBER������ ¦�� ��
	n = NUMBER / 2;
	sum = n * (n + 1);


	printf("1~%i ¦�� �� = %i\n", NUMBER, sum);   // 1~100 �� 


	return 0;
}


/* ���ڸ��� ¦������ �˻��Ͽ� ���ϱ� */
/*
int main(void)
{
	int i;
	unsigned int sum = 0;
	
	for (i = 1; i <= number; i++)
		if((i+1)%2)			// i % 2 == 0    ¦�� 
			sum += i;

	printf("1~%i ¦�� �� = %i\n", number, sum);   // 1~100 �� 

	return 0;
}
*/
