/* 0~100 ������ ����(random number, ���� ��) 5���� ����Ͻÿ�. */

#include <stdio.h>
#include <stdlib.h>			// srand, rand
#include <time.h>			// time

#define COUNT 5

int main(void)
{
	int i;

	srand((unsigned)time(NULL));			// ���� �Լ� �ʱ�ȭ (NULL == 0)

	for(i=0; i<COUNT; i++)
		printf("���� ��[%i] = %i\n", i+1, rand()%101); // %101: ���� �� 0~100

	printf("\n");

	return 0;
}