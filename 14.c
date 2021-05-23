/* 정수 숫자 X, Y를 입력 받아서 3X + 2Y 값을 출력하시오. */

#include <stdio.h>

int main(void)
{
	int x, y;

	printf("정수 x, y를 입력하면, 3x + 2y 계산 값을 출력하는 예제입니다.\n");
	printf("X값 정수를 입력하세요: ");
	scanf_s("%i", &x);
	printf("Y값 정수를 입력하세요: ");
	scanf_s("%i", &y);

	printf("3*%i + 2*%i = %i\n", x, y, 3 * x + 2 * y);
	
	return 0;
}