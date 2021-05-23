/* 구의 체적이 1000 cm³일 때, 구의 반지름을 소수점 두자리까지 출력하시오. 
   (단, 구의 체적 = 4/3 × Π × R³이고, Π는 3.141592임) */

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void)
{
	double radius;
	double volume = 1000.0;

	/* 구의 체적 = 4 * PI * r * r * r / 3  */ 
	radius = pow(volume * 3.0 / 4.0 / PI, 1.0/3.0);

	printf("구의 반지름은 약 %.2fcm입니다.\n", radius);

	return 0;
}
