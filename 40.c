/* 100만원을 10년간 5% 복리로 저축할 때, 만기 시 찾는 돈을 출력하시오. 
   (복리계산식 = 원금의 (이자*기간)승이고 기간은 연 단위이다.)  */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double money = 1000000;
	double interest = 0.05;
	double years = 10;
	double ret;

	ret = money * pow(1.0 + interest, years);

	printf("%i원을 %i년 간 연%i%% 복리로 저축 시 만기 금액: %i원\n",
		(int)money, (int)years, (int)(interest*100), (int)ret);

	return 0;
}