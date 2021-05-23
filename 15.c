/* 정수 숫자 네개(A, B, C, D)를 입력 받아서 평균을 실수 값으로 출력하시오. */

#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	printf("정수 네 개를 입력하시오(예; 10 20 30 40 <엔터>): ");
	scanf_s("%i %i %i %i", &a, &b, &c, &d);

	printf("%i, %i, %i, %i 입력 값의 평균은 %f입니다.\n", a, b, c, d, (a + b + c + d) / 4.0);

	return 0;
}
