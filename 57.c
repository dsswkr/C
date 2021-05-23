/* 헤론(Heron)의 공식을 이용하여 각 변 A, B, C가 3, 4, 5인 삼각형 넓이를 구하시오. 
    S = (A + B + C) / 2
	삼각형 넓이 = sqrt(S*(S - A)*(S - B)*(S - C))   */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 3, b = 4, c = 5;
	double s, area; 

	s = (double)(a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));  
	
	printf("변의 길이가 %i, %i, %i인 삼각형 넓이 = %.3f\n", a, b, c, area);

	return 0;
}
