/* 서로 다른 수를 세 개 입력 받고, 크기가 중간인 수를 출력하시오.  
   만약 같은 수를 입력받으면 다시 입력 받으시오. */

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 0, b = 0, c = 0;

	while (a == b || b == c || a == c) {
		printf("서로 다른 세 정수를 입력하세요(예; 30 50 20): ");
		scanf_s("%i %i %i", &a, &b, &c);
	}

	if (a > b) 
		swap(&a, &b);
	if (b > c) 
		swap(&b, &c);
	if (a > b) 
		swap(&a, &b);

	printf("\n %i, %i, %i 값의 중간 값 => %i \n\n", a, b, c, b);

	return 0;
}
