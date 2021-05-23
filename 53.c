/* 1에서 100까지 숫자에서 3의 배수 합(정답: 1683)을 구하여 출력하시오. */
#include <stdio.h>

#define NUMBER 100

/* 배수 합을 구하는 공식 이용하기 */
int main(void)
{
	int i, n;
	unsigned int sum = 0;

	// 어떤 수의 배수 합계 공식을 이용한 방법 
	n = NUMBER / 3;				// 배수를 구할 숫자를 나누어서 개수를 구함  
	sum = 3 * n * (n + 1) / 2;

	printf("1~%i 3의 배수 합 = %i\n", NUMBER, sum);
	
	return 0;
}

/* 3의 배수인지 검사하여 합 구하기 */
/*
int main(void)
{
	int i;
	unsigned int sum = 0;

	for (i = 1; i <= NUMBER; i++)
		if (!(i % 3))	// 3으로 나눈 나머지가 0이면 3의 배수 
			sum += i;

	printf("1~%i 3의 배수 합 = %i\n", NUMBER, sum);    

	return 0;
}
*/