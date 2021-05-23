/* 1~9 ������ ����(����) ���� 100�� �����Ͽ� ����ϰ�,
   �� ���ڸ��� ���ڿ� ������ ����Ͻÿ�. (�� ���� : ����) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 100

int main(void)
{
	int i, n;
	int nums[10] = { 0, };

	srand((unsigned int)time(0));

	for (i = 0; i < COUNT; i++) { 
		n = (rand() % 9) + 1;
		nums[n] += 1;					// 1~9 ����
		printf("[%i] ", n);
	}
	
	printf("\n");

	for (i = 1; i < 10; i++)
		printf("%i : %i\n", i, nums[i]);

	printf("\n");

	return 0;
}
