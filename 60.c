/* 1~n 숫자 합이 10,000을 넘지 않는 가장 큰 수 n을 출력하시오. */

#include <stdio.h>

#define LIMIT 10000

int main(void)
{
	int i, n;

	for (i = 1, n = 0; n < LIMIT; i++)
		n += i;

	i -= 2;

	printf("1~n 합이 %i을 넘지 않는 가장 큰 정수 n = %i \n\n", LIMIT, i);

	return 0;
}


