/* ���� �ڷῡ ��Ÿ�� ����(1~5)���� �� Ƚ���� ����Ͻÿ�. 
   1, 2, 5, 2, 4, 5, 1, 5, 5, 3, 3, 1
   (��� ��; 1:3, 2:1, 3:3, 4:1, 5:2)  */

#include <stdio.h>

int main(void)
{
	int i, j, count;
	int data[] = { 1, 2, 5, 2, 4, 5, 1, 5, 5, 3, 3, 1 };

	for (i = 1; i <= 5; i++) {
		for (j = 0, count = 0; j < sizeof(data) / sizeof(int); j++)
			if (i == data[j])
				count++;
		printf("%i:%i ", i, count);
	}
	printf("\n");

	return 0;
}
