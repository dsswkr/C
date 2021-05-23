/* 15도 경사의 언덕을 500미터 걸었을 때 높이는 몇 미터인지 소수점 둘째 자리까지 출력하시오. 
   ( SIN(15) = X / 500 ) */

#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int main(void)
{
	double d = 500;
	double h;

	h = sin(15 * M_PI / 180) * d;

	printf("높이는 %.2fm입니다.\n", h);

	return 0;
}