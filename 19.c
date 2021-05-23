/* 다섯개 정수를 입력받고 가장 큰 수와 가장 작은 수를 출력하시오. */

#include <stdio.h>

int main(void)
{
	int nums[5];
	int max, min, i;

	printf("1) 정수 숫자를 입력하세요: ");
	scanf_s("%i", &nums[0]);
	max = min = nums[0];

	for (i = 1; i < 5; i++) {
		printf("%i) 정수 숫자를 입력하세요: ", i+1);
		scanf_s("%i", &nums[i]);
		if (nums[i] > max)
			max = nums[i];
		else if (nums[i] < min)
			min = nums[i];
	}

	printf("\n가장 큰 수 = %i, 가장 작은 수 = %i \n", max, min);
	return 0;
}