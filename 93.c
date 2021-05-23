/* 1부터 100사이의 정수에서 소수를 20개 순서대로 출력하되, '에라토스테네스의 체' 원리를 이용하시오. */

#include <stdio.h>

#define MAX 100
#define COUNT 20

int main(void)
{
	int i, j;
	int n = 0;							// 구한 소수 개수
	int check[MAX + 1] = { 0, };		// 소수 거르는 배열 (항목 위치의 값이 그 수의 소수 체크 상태)
	int prime_num[COUNT+1] = { 0, };	// 소수를 저장할 배열 

	for (i = 2; i <= MAX && n < COUNT; i++)		// 2부터 배수 검사...
	{
		if (check[i] == 0) {
			printf("%i ", prime_num[n++] = i);	// 소수 저장 및 출력
			for (j = i; j <= MAX; j += i)		// 배수는 소수가 아님
				check[j] = 1;
		}
	}

	printf("\n\n");

	return 0;
}