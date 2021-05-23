# include <stdio.h>

/* ���� ���� �Լ�            */
/* ���� �μ�                 */
/*    list: ������ �迭      */
/*    cnt: �迭�� ��� ����  */
/* ��ȯ��                    */
/*    -1: ���� ����          */
/*    0: ���� ����           */
int bubble_sort(int list[], int cnt)
{
	int i, j, temp;

	/* ���� ������ 2�� �̸��̸� ���� ���ʿ� */
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

	/* test �迭�� ��� ���� ��� */
	count = sizeof(test) / sizeof(int);

	/* ���� �ڷ� ��� */
	for (i = 0; i < count; i++)
		printf("%i ", test[i]);

	printf("\n\nBubble sorting...\n\n");
	/* ���� ���� �Լ� ȣ�� */
	bubble_sort(test, count);

	/* ���ĵ� �ڷ� ��� */
	for (i = 0; i < count; i++)
		printf("%i ", test[i]);
	printf("\n");

	return 0;
}
