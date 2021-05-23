/* 500원짜리 빵을 10개 샀을 때 가격을 구하시오. (4250원)
   단, 10개 사면 15% 할인한다. */

#include <stdio.h>

int main(void)
{
	int count = 10;
	int price = 500;

	printf("500원짜리 빵 10개를 15%% 할인한 가격은 %i원입니다.\n", (500 * 10) * 85 / 100);

	return 0;
}
