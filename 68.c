/* y(x) = 5x**3 – 3x**2 + 2x - 1일 때, 
   두 수 a,b를 입력받아
   y(a) - y(b) 계산 결과를 출력하시오. */

#include <stdio.h>

#define MAX 30
#define MIN (-MAX)

int function(int x)
{
	return (5 * x*x*x - 3 * x*x + 2 * x - 1);
}

int main(void)
{
	int a = MAX + 1, b = MAX + 1;

	while (a < MIN || a > MAX || b < MIN || b > MAX) {
		printf("%i~%i 범위의 정수 두 개를 입력하시오(예; 20 10<Enter>): ", MIN, MAX);
		scanf_s("%i %i", &a, &b);
	}

	printf("\nf(%i) - f(%i) = %i \n\n", a, b, function(a) - function(b));

	return 0;
}