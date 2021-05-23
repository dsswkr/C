/* 직각 삼각형의 바닥과 빗변늬 각도가 30도일 때 sin, cos, tan 값을 구하여 출력하시오. */

#include <stdio.h>
// #define _USE_MATH_DEFINES 
#include <math.h>

#define RADIAN(x) ((double)x * 3.141592 / 180.0)

int main(void)
{
	double theta = 30.0;

	//printf("SIN(%.1f) = %f\n", theta, sin(theta * M_PI / 180.0));
	//printf("COS(%.1f) = %f\n", theta, cos(theta * M_PI / 180.0));
	//printf("TAN(%.1f) = %f\n", theta, tan(theta * M_PI / 180.0));

	printf("SIN(%.1f) = %f\n", theta, sin(RADIAN(theta)));
	printf("COS(%.1f) = %f\n", theta, cos(RADIAN(theta)));
	printf("TAN(%.1f) = %f\n", theta, tan(RADIAN(theta)));

	return 0;
}