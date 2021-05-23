/* 1~n까지 숫자 합이 1000을 넘어가는 가장 작은 수 n을 출력하시오. */

#include <stdio.h>

#define LIMIT 1000

int main(void)
{
	int i, n;

	for (i = 1, n = 0; n < LIMIT; i++) 
		n += i;
	i--;
		
	printf("1~n 합이 1000을 넘어가는 가장 작은 수 n = %i \n\n", i);

	return 0;
}
