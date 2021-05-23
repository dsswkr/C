/* ���� �ﰢ���� �ٴڰ� ������ ������ 30���� �� sin, cos, tan ���� ���Ͽ� ����Ͻÿ�. */

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