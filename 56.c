/* ���� �迭 na�� 20, -10, 5, -4, -11, 6, -1 ���� ���� ��
   �迭�� ��� ���� ��� ����ϰ�, ������ ���� ����Ͻÿ�.*/

#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	int na[] = { 20, -10, 5, -4, -11, 6, -1 };

	for (i = 0; i < sizeof(na) / sizeof(int); i++) {
		printf("%i ", na[i]);
		if (na[i] < 0)
			sum += na[i];
	}

	printf("\n\n������ �� : %i\n\n", sum);

	return 0;
}
