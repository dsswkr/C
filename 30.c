/* 하루에 9시간씩 공부할 때, 35년간 공부하는 시간의 합을 출력하시오. 
   단, 윤년 8회를 포함한 기간이다. (윤년은 366일) */

#include <stdio.h>

#define TIME 9
#define YEARS 35
#define LEAP_YEARS 8

int main(void)
{
	int total;
	
	total = (TIME * YEARS * 365) + (LEAP_YEARS * TIME);
	printf("하루 9시간씩 35년(윤년 8회) 공부한 시간: %i 시간\n", total);

	return 0;
}

