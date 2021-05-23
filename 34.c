/* 1024.3456 값을 소수점 세 자리에서 반올림하여 
   소수점 둘째자리까지 출력하시오. */

#include <stdio.h>

int main(void)
{
	double f = 1024.3456;

	printf("%.2f\n", f += 0.005);

	return 0;
}