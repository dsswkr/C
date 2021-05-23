/* 다람쥐가 한달에 도토리 3,000개씩 받고, 각 주마다 같은 숫자로 나눠 먹어야 할 때, 한 주에 몇 개씩 먹을 수 있는지 출력하시오. (단, 한 달은 4.3주와 같음) */

#include <stdio.h>

int main(void)
{
	int dotori = 3000;

	printf("다람쥐가 한달에 먹을 수 있는 도토리는 %i개입니다.\n", dotori);
	printf("그러므로 한 주에 %i개씩 먹을 수 있습니다.\n", (int)(dotori / 4.3));

	return 0;
}