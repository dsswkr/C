/* 달리기 선수가 하루에 10, 6, 9, 8, 12km씩 달렸을 때 
   달린 거리의 합계와 평균을 출력하시오. */

#include <stdio.h>

int main(void)
{
	int i, sum = 0, count;
	int data[] = { 10, 6, 9, 8, 12 };

	count = sizeof(data) / sizeof(int);
	for (i = 0; i < count; i++) {
		sum += data[i];
		printf("%i일차 달린 거리: %ikm\n", i+1, data[i]);
	}

	printf("\n합계: %ikm, 평균: %ikm\n", sum, sum / count);
	return 0;
}