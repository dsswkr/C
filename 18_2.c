/* ����(0~100)�� �ټ� �� ������ �Է¹ް� �� �߿��� ���� ���� ������ ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int i, max = 0, num[5];

	for (i = 0; i < 5; i++)
	{
		do { 
			printf("(%i) ������ ������ �Է��ϼ���(0~100): ", i + 1);
			scanf_s("%i", &num[i]);
		} while (num[i] < 0 || num[i] > 100);

		if (max < num[i])
			max = num[i];
	}

	printf("�ִ� ������ %i���Դϴ�.\n", max);
	return 0;
}