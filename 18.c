/* ����(0~100)�� �ټ� �� ������ �Է¹ް� �� �߿��� ���� ���� ������ ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int i, max = 0, num[5] = { -1, -1, -1, -1, -1 };

	for (i = 0; i < 5; i++)
	{
		while (num[i] < 0 || num[i] > 100) {
			printf("(%i) ������ ������ �Է��ϼ���(0~100): ", i+1);
			scanf_s("%i", &num[i]);
		}
		if (max < num[i])
			max = num[i];
	}

	printf("�ִ� ������ %i���Դϴ�.\n", max);
	return 0;
}

//int main(void)
//{
//	int i, max = 0, num[5];
//
//	for (i = 0; i < 5; i++)
//	{
//		while (1) {
//			printf("(%i) ������ ������ �Է��ϼ���(0~100): ", i + 1);
//			scanf_s("%i", &num[i]);
//			if (num[i] >= 0 && num[i] <= 100)
//				break;
//		}
//		if (max < num[i])
//			max = num[i];
//	}
//
//	printf("�ִ� ������ %i���Դϴ�.\n", max);
//	return 0;
//}