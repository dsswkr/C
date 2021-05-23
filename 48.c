/* 0보다 큰 두 정수를 입력 받아서 
   사칙연산(+, -, *, /) 결과와 그 합을 출력하시오. */

#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, sum = 0;

	while (x <= 0 && y <= 0) {
		printf("0보다 큰 두 정수를 차례로 입력하세요(예:100 20<엔터>): ");
		scanf_s("%i %i", &x, &y);
	}

	printf("%i + %i = %i\n", x, y, x + y);
	printf("%i - %i = %i\n", x, y, x - y);
	printf("%i x %i = %i\n", x, y, x * y);
	printf("%i / %i = %i\n", x, y, x / y);

	sum = (x + y) + (x - y) + (x*y) + (x / y);
	printf("결과 합 =  %i\n", sum);

	return 0;
}