/* 60, 70, 65, 85, 95, 88, 100, 75, 50�� ��հ� �л�, ǥ�������� ���Ͽ� ����Ͻÿ�.
   ǥ������ = sqrt(�л�), �л� = ((���-��) ����)�� ��  */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, count, sum;
	double mean, variance, standard_deviation;
	int scores[] = { 60, 70, 65, 85, 95, 88, 100, 75, 50 };

	count = sizeof(scores) / sizeof(int);					// ���� ���ϱ�

	for (i = 0, sum = 0; i < count; i++) {					// �հ� ���ϱ�
		sum += scores[i];
		printf("%i ", scores[i]);
	}
	printf("\n\n");

	mean = (double)sum / count;								// ��� ���ϱ�

	for (i = 0, variance = 0; i < count; i++)
		variance += (mean - scores[i])*(mean - scores[i]);	// �л� ���ϱ�
	variance /= count;

	standard_deviation = sqrt(variance);					// ǥ������ ���ϱ�

	printf("*��� = %.3f\n*�л� = %.3f\n*ǥ������ = %.3f\n\n", 
		mean, variance, standard_deviation);

	return 0;
}
