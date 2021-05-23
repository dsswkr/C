/* 열 개 숫자를 입력받은 후에 오름차순(1 2 3...)으로 정리하여 출력하시오. */

#include <stdio.h>

#define MAX 10

int main(void)
{
	int i, j, n, count = 1;
	int nums[MAX];
	// int nums[] = { 1, -1, 2, 4, 10, -10, 2, 7, 100, 0 };   // Testing data

	while (count < MAX+1) {
		printf("[%2i] 정수를 입력하세요: ", count);
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
	
	printf("\n\n정렬된 데이터:\n");

	for (i = 0; i < MAX; i++)
		printf("%i ", nums[i]);

	printf("\n\n");

	return 0;
}
