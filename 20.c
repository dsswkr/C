/* �޸��� ������ �Ϸ翡 10, 6, 9, 8, 12km�� �޷��� �� 
   �޸� �Ÿ��� �հ�� ����� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int i, sum = 0, count;
	int data[] = { 10, 6, 9, 8, 12 };

	count = sizeof(data) / sizeof(int);
	for (i = 0; i < count; i++) {
		sum += data[i];
		printf("%i���� �޸� �Ÿ�: %ikm\n", i+1, data[i]);
	}

	printf("\n�հ�: %ikm, ���: %ikm\n", sum, sum / count);
	return 0;
}