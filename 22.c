/* 사각형의 가로(밑변)와 세로(높이) 길이를 정수로 입력받고, 그 사각형의 넓이를 출력하시오. */

#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("사각형의 가로 길이를 정수로 입력하시오: ");
	scanf_s("%i", &a);
	printf("사각형의 세로 길이를 정수로 입력하시오: ");
	scanf_s("%i", &b);

	printf("가로 길이 %i, 세로 길이 %i인 사각형의 넓이는 %i입니다.\n", a, b, a*b);

	return 0;
}