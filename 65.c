/* �� �� ���ڸ� �Է¹��� �Ŀ� ��������(1 2 3...)���� �����Ͽ� ����Ͻÿ�. */

#include <stdio.h>

#define MAX 10

int main(void)
{
	int i, j, n, count = 1;
	int nums[MAX];
	// int nums[] = { 1, -1, 2, 4, 10, -10, 2, 7, 100, 0 };   // Testing data

	while (count < MAX+1) {
		printf("[%2i] ������ �Է��ϼ���: ", count);
		scanf_s("%i", &n);
		nums[count - 1] = n;
		count++;
	}

	for (i = 1; i < MAX; i++) {
		for (j = 0; j < MAX-1; j++) {
			if (nums[i] < nums[j]) {
				n = nums[i];
				nums[i] = nums[j];
				nums[j] = n;
			}
		}
	}
	
	printf("\n\n���ĵ� ������:\n");

	for (i = 0; i < MAX; i++)
		printf("%i ", nums[i]);

	printf("\n\n");

	return 0;
}
