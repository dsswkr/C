/* 직사각형의 밑변이 10이고 면적이 400일 때 높이를 출력하시오. */

#include <stdio.h>

int main(void)
{
	int base = 10;
	int area = 400;
	int height = area / base;

	printf("밑변이 %i, 면적이 %i인 직사각형의 높이는 %i입니다.\n", base, area, height);

	return 0;
}