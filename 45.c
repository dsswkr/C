/* 10~90 ������ ����(���� ��) 100���� ����Ͻÿ�. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_RANGE(min, max)  (rand() % (max-min+1) + min)
#define COUNT 100

int main(void)
{
	int i;

	srand((unsigned)time(NULL));	// ���� �Լ� �ʱ�ȭ (NULL == 0)

	for (i = 0; i<COUNT; i++)
		printf("���� ��[%i] = %i\n", i + 1, RANDOM_RANGE(10, 90)); 
	printf("\n");

	return 0;
}
