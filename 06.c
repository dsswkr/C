/* 두 숫자를 A, B 변수에 입력받고, 곱한 결과를 다음 형식처럼 출력하시오.
   A x B = 결과(예; 2와 3이 입력되면, “2 x 3 = 6”을 출력함)  */

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("정수를 입력하세요: ");
	scanf_s("%i", &a);
	printf("다음 정수를 입력하세요: ");
	scanf_s("%i", &b);

	printf("%i x %i = %i \n", a, b, a*b);
	return 0;
}