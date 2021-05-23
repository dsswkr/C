/* 두 실수 x, y를 입력받아 루트(x제곱 + y제곱)을 계산하되 
   수학 함수 sqrt(), pow()를 이용한 결과를 출력하시오. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y;   

	printf("x 값을 입력하세요: ");
	scanf_s("%f", &x);
	printf("y 값을 입력하세요: ");
	scanf_s("%f", &y);

	printf("Root(%.3f의 제곱 + %.3f의 제곱) = %.3f\n", x, y, sqrt(pow(x,2) + pow(y,2))); 
	return 0;
}