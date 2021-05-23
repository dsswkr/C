# include <stdio.h>

/* 버블 정렬 함수            */
/* 전달 인수                 */
/*    list: 정수형 배열      */
/*    cnt: 배열의 요소 개수  */
/* 반환값                    */
/*    -1: 정렬 안함          */
/*    0: 정상 수행           */
int bubble_sort(int list[], int cnt)
{
	int i, j, temp;

	/* 원소 개수가 2개 미만이면 정렬 불필요 */
	if (cnt < 2)
		return -1;

	for (i = cnt; i >= 0; i--) {
		for (j = 0; j <= i - 2; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	return 0;
}

int main(void)
{
	int i, count;
	int test[] = { 5, 8, 10, -1, -10, 100, 50, 90, 45, 64,
		7, 9, -20, -10, -1, 0, 255, 500, -300, -256 };

	/* test 배열의 요소 개수 계산 */
	count = sizeof(test) / sizeof(int);

	/* 원래 자료 출력 */
	for (i = 0; i < count; i++)
		printf("%i ", test[i]);

	printf("\n\nBubble sorting...\n\n");
	/* 버블 정렬 함수 호출 */
	bubble_sort(test, count);

	/* 정렬된 자료 출력 */
	for (i = 0; i < count; i++)
		printf("%i ", test[i]);
	printf("\n");

	return 0;
}
