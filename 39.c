/* 1에서 20까지의 log X 계산 값을 줄 단위로 출력하시오. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;

	for (i = 1; i <= 20; i++)
		printf("LOG(%i) = %f\n", i, log((double)i));

	return 0;
}

