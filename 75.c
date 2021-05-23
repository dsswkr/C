/* 1~9 범위의 임의(랜덤) 값을 100개 생성하여 출력하고,
   각 숫자마다 숫자와 개수를 출력하시오. (각 숫자 : 개수) */

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
		nums[n] += 1;					// 1~9 난수
		printf("[%i] ", n);
	}
	
	printf("\n");

	for (i = 1; i < 10; i++)
		printf("%i : %i\n", i, nums[i]);

	printf("\n");

	return 0;
}
