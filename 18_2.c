/* 점수(0~100)를 다섯 개 정수로 입력받고 그 중에서 가장 높은 점수를 출력하시오. */

#include <stdio.h>

int main(void)
{
	int i, max = 0, num[5];

	for (i = 0; i < 5; i++)
	{
		do { 
			printf("(%i) 점수를 정수로 입력하세요(0~100): ", i + 1);
			scanf_s("%i", &num[i]);
		} while (num[i] < 0 || num[i] > 100);

		if (max < num[i])
			max = num[i];
	}

	printf("최대 점수는 %i점입니다.\n", max);
	return 0;
}