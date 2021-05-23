/* 1부터 10까지의 숫자들의 네제곱 값을 pow() 함수로 계산하여 출력하시오. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++) 
		printf("%2i의 4제곱 = %6i\n", i, (int)pow(i, 4));
	
	return 0;
}