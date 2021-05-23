/* 두 수 X, Y를 입력 받고 X의 Y승 값과 그 값이 몇 자리 수인지 출력하시오.
   X는 1~9, Y는 2~10까지 허용하되 double 형으로 계산하고, 
   X의 Y승은 수학 함수(pow())를 사용하지 말고 직접 구현하시오. */

#include <stdio.h>
// #include <math.h>    // pow

int main(void)
{
	unsigned int i;
	unsigned int x = -1, y = -1;
	long long xx = 1;
/*
	while (x < 1 || x > 9 || y < 2 || y > 10) {
		printf("X의 Y승을 구하는 예제입니다.\n");
		printf("정수 X를 입력하세요(1~9): ");
		scanf_s("%i", &x);
		printf("정수 Y를 입력하세요(2~10): ");
		scanf_s("%i", &y);
	}
*/
	do {
		printf("X의 Y승을 구하는 예제입니다.\n");
		printf("정수 X를 입력하세요(1~9): ");
		scanf_s("%i", &x);
		printf("정수 Y를 입력하세요(2~10): ");
		scanf_s("%i", &y);
	} while (x < 1 || x > 9 || y < 2 || y > 10);

	//	xx = pow(x, y);
	for (i = 0; i < y; i++)
		xx *= x;

	printf("%i의 %i승 = %lli\n", x, y, xx);

	/* 자릿수 계산 */
	i = 0;
	while (xx > 0) {
		xx = xx / 10;    // xx /= 10;
		i++;
	}

	printf("결과 값의 자릿수 = %i \n", i);

	return 0;
}