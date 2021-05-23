/* 정수 숫자를 입력 받을 때마다 그 합계를 출력하는 무한 루프를 작성하되, 
   '0'이 입력되면 종료하도록 작성하시오. */

#include <stdio.h>

int main(void)
{
	int num = 1, sum = 0;

	while (num != 0) {
		printf("정수 숫자를 입력하시오: ");
		scanf_s("%i", &num);
		sum += num;
		printf("합계: %i\n", sum);
	}
	printf("종료됨!\n");

	return 0;
}


//int main(void)
//{
//	int num, sum = 0;
//
//	while (1) {
//		printf("정수 숫자를 입력하시오: ");
//		scanf_s("%i", &num);
//		if (num == 0) {
//			printf("종료됨.\n");
//			break;
//		}
//		sum += num;
//		printf("합계: %i\n", sum);
//	}
//
//	return 0;
//}