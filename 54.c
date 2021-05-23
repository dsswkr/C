/* 다음 자료에 난타난 숫자(1~5)들의 각 횟수를 출력하시오. 
   1, 2, 5, 2, 4, 5, 1, 5, 5, 3, 3, 1
   (출력 예; 1:3, 2:1, 3:3, 4:1, 5:2)  */

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
