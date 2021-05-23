/* 9.5 실수 값을 올림 함수(ceil())와 내림 함수(floor())를 이용한 
   계산 결과 값을 각각 출력하시오. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double num = 9.5;	// float num = 9.5

	printf("%.1f의 올림 값: %.1f\n", num, ceil(num));
	printf("%.1f의 내림 값: %.1f\n", num, floor(num));

	return 0;
}