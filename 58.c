/* 첫날에 1원, 둘째 날에 2원, 셋째 날에 4원씩 매일 두 배씩 증가하여 저축할 때, 
  30일째 되는 날에 저축해야 하는 금액을 출력하시오. */

#include <stdio.h>

#define DAYS 30

int main(void)
{
	int i; 
	double money = 1.0;

	for (i = 2; i <= DAYS; i++)
		money = money * 2;

	printf("100일째 저축할 돈 : %.0f원\n", money);
	
	return 0;
}
