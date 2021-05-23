/* 정수 숫자 두 개를 입력 받고, 처음 입력한 수에서 다음에 입력한 수를 뺀 값을 출력하시오. */

#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("처음 정수를 입력하세요: ");
	scanf_s("%i", &num1);
	printf("다음 정수를 입력하세요: ");
	scanf_s("%i", &num2);
	
	printf("%i - %i = %i \n", num1, num2, num1-num2);

	return 0;
}
