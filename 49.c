/* 1~20 범위의 정수 n을 입력 받고 팩토리얼(n!) 값을 출력하시오. 
   범위를 벗어나면 다시 정수를 입력 받으시오. */

#include <stdio.h> 

#define MAX 20
#define MIN 1

int main(void)
{
	unsigned int i;
	unsigned int n = MAX + 1;
	double factorial = 1.0;

	while (n < MIN || n > MAX) {
		printf("팩토리얼 값을 구하고 싶은 %i~%i 범위 정수를 입력하시오: ",
			   MIN, MAX);
		scanf_s("%i", &n);
	}

	for (i = 2; i <= n; i++)
		factorial *= (double)i;

	printf("%i! = %0.f\n", n, factorial);

	return 0;
}