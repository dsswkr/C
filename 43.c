/* 평지의 두 지점에서 피라미드 꼭대기를 바라는 각도는 30도와 40도였고, 
   거리 차이는 100미터였다면 건물 높이는 몇 미터인지 소수점 첫째 자리까지 출력하시오.
   단, 파이 값은 3.141592이다.
   ( 높이 = (100×SIN(30)×SIN(40)) / (SIN(40)–SIN(30)) = 185.1m */

#include <stdio.h>
#include <math.h>

#define RADIAN(degree) (((double)(degree)*3.141592)/180.0)

int main(void)
{
	double h;
	double d = 100.0;
	
	h = (d * sin(RADIAN(30))*sin(RADIAN(40))) / (sin(RADIAN(40-30)));
	printf("피라미드 높이는 %.1fm입니다.\n", h);

	return 0;
}
