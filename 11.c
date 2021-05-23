/* 정수 숫자 하나를 입력 받아서 출력하시오. */

#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하세요: ");
	scanf_s("%i", &num);    /* scanf("%i", &num); */

	printf("입력한 숫자는 %i입니다.\n", num);

	return 0;
}