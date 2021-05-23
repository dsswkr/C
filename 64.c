/* 정사각형 한 변 길이를 입력받고, 꼭짓점에서 중심까지의 거리를 구하여 출력하시오. */

#include <stdio.h>
#include <math.h>   // sqrt, hypot

int main(void)
{
	double n = 0;
	double len;

	while (n <= 0) {
		printf("정사각형 한 변의 길이를 입력하세요: ");
		scanf_s("%lf", &n);
	}
		
	// 반지름 = 지름 / 2
	len = sqrt(2 * n * n) / 2;    // len = hypot(n, n) / 2;   

	printf("꼭짓점에서 중심까지의 거리: %f \n\n", len);

	return 0;
}


