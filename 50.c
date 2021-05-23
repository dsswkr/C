/* 지름을 실수형으로 입력 받고, 구의 표면적을 계산하여 출력하시오. 
   구의 표면적은 = 4*파이*R*R이고, 파이는 3.141592로 계산하시오. */

#include <stdio.h>

#define PI 3.141592

int main(void)
{
	double diameter=0;
	double radius, serface_area = 0;

	while (diameter <= 0) {
		printf("표면적을 구할 구의 지름을 입력하세요: ");
		scanf_s("%lf", &diameter);
	}

	radius = diameter / 2;
	serface_area = 4.0 * PI * radius * radius;
	printf("지름 %.3f 구의 표면적 = %.3f\n", diameter, serface_area);

	return 0;
}