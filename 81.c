/* 2~8자리 양의 정수를 입력받고, 각 자리의 수를 반대로 출력하시오.
   (예; 12345를 입력하면 54321을 출력함)   */

#include <stdio.h>

int main(void)
{
	int num = -1, num2 = 0;

	while (num < 10 || num > 99999999) {
		printf("\n2~8자리 양의 정수를 입력하시오: ");
		scanf_s("%i", &num);
	}

	while (num > 0) {
		num2 *= 10;
		num2 += num % 10;
		num /= 10;
	}
	
	printf("뒤집힌 숫자: %i\n", num2);
	
	return 0;
}
