/* 1~100 범위에서 제곱 값이 5000을 넘지 않는 가장 큰 수와 그 제곱 값을 출력하시오. */

#include <stdio.h>

#define LIMIT 5000

int main(void)
{
	unsigned int i, n;

	for (i = 0; i <= LIMIT; i++) {
		if ((i*i) > LIMIT) {
			n = i-1;
			break;
		}
	}

	printf("제곱 값이 5000을 넘지 않는 가장 큰 정수는 %i입니다.\n", n);
	printf("%i의 제곱 값 = %i\n", n, n*n);

	return 0;
}