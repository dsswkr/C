/* 1에서 100까지 숫자에서 짝수 합을 구하여 출력하시오. */

#include <stdio.h>

#define NUMBER 100

/* 짝수 합을 구하는 공식 이용하기 */
int main(void)
{
	int i, n;
	unsigned int sum = 0;

	// 공식으로 구하는 1~NUMBER까지의 짝수 합
	n = NUMBER / 2;
	sum = n * (n + 1);


	printf("1~%i 짝수 합 = %i\n", NUMBER, sum);   // 1~100 합 


	return 0;
}


/* 숫자마다 짝수인지 검사하여 구하기 */
/*
int main(void)
{
	int i;
	unsigned int sum = 0;
	
	for (i = 1; i <= number; i++)
		if((i+1)%2)			// i % 2 == 0    짝수 
			sum += i;

	printf("1~%i 짝수 합 = %i\n", number, sum);   // 1~100 합 

	return 0;
}
*/
