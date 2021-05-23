/* 용돈 11만원에서 매일 3,000원씩 사용하되 7일째 되는 날에는 그 두 배를 사용할 때,
   마이너스 금액이 되지 않는 가장 늦은 날짜 수를 출력하시오. */

#include <stdio.h>

#define MONEY 110000

int main(void)
{
	long my_money = MONEY;
	unsigned int days = 0;

	while (my_money >= 0)   // 돈이 남아 있으면... 
	{
		if ((days % 7) !=0 && days > 0)   // 7일차가 아니면... 
			my_money -= 3000;
		else
			my_money -= 6000;

		days++;
	}

	printf("용돈을 %i일까지 사용할 수 있습니다.\n", days);
	
	return 0;
}