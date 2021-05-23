/* 두 정수를 입력 받고, 각 정수의 제곱을 구하여 더한 값을 출력하시오. */

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("정수를 입력하시오(a) : ");
	scanf_s("%i", &a);

	printf("다른 정수를 하나 더 입력하시오(b): ");
	scanf_s("%i", &b);

	printf("\n%i의 제곱과 %i의 제곱을 더한 결과는 %i입니다.\n", a, b, a*a + b*b); 

	return 0;
}
