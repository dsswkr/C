/* �ټ��� ������ �Է¹ް� ���� ū ���� ���� ���� ���� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int nums[5];
	int max, min, i;

	printf("1) ���� ���ڸ� �Է��ϼ���: ");
	scanf_s("%i", &nums[0]);
	max = min = nums[0];

	for (i = 1; i < 5; i++) {
		printf("%i) ���� ���ڸ� �Է��ϼ���: ", i+1);
		scanf_s("%i", &nums[i]);
		if (nums[i] > max)
			max = nums[i];
		else if (nums[i] < min)
			min = nums[i];
	}

	printf("\n���� ū �� = %i, ���� ���� �� = %i \n", max, min);
	return 0;
}