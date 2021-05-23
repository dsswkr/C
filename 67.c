/* 60, 70, 65, 85, 95, 88, 100, 75, 50의 평균과 분산, 표준편차를 구하여 출력하시오.
   표준편차 = sqrt(분산), 분산 = ((평균-값) 제곱)의 합  */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, count, sum;
	double mean, variance, standard_deviation;
	int scores[] = { 60, 70, 65, 85, 95, 88, 100, 75, 50 };

	count = sizeof(scores) / sizeof(int);					// 개수 구하기

	for (i = 0, sum = 0; i < count; i++) {					// 합계 구하기
		sum += scores[i];
		printf("%i ", scores[i]);
	}
	printf("\n\n");

	mean = (double)sum / count;								// 평균 구하기

	for (i = 0, variance = 0; i < count; i++)
		variance += (mean - scores[i])*(mean - scores[i]);	// 분산 구하기
	variance /= count;

	standard_deviation = sqrt(variance);					// 표준편차 구하기

	printf("*평균 = %.3f\n*분산 = %.3f\n*표준편차 = %.3f\n\n", 
		mean, variance, standard_deviation);

	return 0;
}
