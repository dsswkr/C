/* 0~100 사이의 난수(random number, 임의 값) 5개를 출력하시오. */

#include <stdio.h>
#include <stdlib.h>			// srand, rand
#include <time.h>			// time

#define COUNT 5

int main(void)
{
	int i;

	srand((unsigned)time(NULL));			// 랜덤 함수 초기화 (NULL == 0)

	for(i=0; i<COUNT; i++)
		printf("임의 값[%i] = %i\n", i+1, rand()%101); // %101: 임의 값 0~100

	printf("\n");

	return 0;
}