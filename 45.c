/* 10~90 범위의 난수(임의 값) 100개를 출력하시오. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_RANGE(min, max)  (rand() % (max-min+1) + min)
#define COUNT 100

int main(void)
{
	int i;

	srand((unsigned)time(NULL));	// 랜덤 함수 초기화 (NULL == 0)

	for (i = 0; i<COUNT; i++)
		printf("임의 값[%i] = %i\n", i + 1, RANDOM_RANGE(10, 90)); 
	printf("\n");

	return 0;
}
