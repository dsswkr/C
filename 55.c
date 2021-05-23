/* 10���� 999���� ���ڿ��� ���� ���� ���ڷθ� �̷���� ���� ���ٿ� 9���� ����Ͻÿ�.
   (��� ��; 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, ...)   */

#include <stdio.h>

#define MIN 10
#define MAX 100000

int digit_unit_count(int n)
{
	int count = 1;

	while (n > 9) {
		count++;
		n /= 10;
	}
	return count;
}

int main(void)
{
	int i, j, count, unit, num, print_cnt = 0;

	for (i = MIN; i <= MAX; i++) {
		num = i;
		unit = i % 10;  // �� �ڸ�
		count = digit_unit_count(i);   // �� �ڸ� �������� ���

		for (j = 1; j < count; j++) {
			num = num / 10;   // ���� �ڸ� (���� �ڸ����� ū �ڸ��� �̵�) 
			if (unit != num % 10)
				break;
			else if (j == count - 1) { // �� �ڸ��� ���� ��� ��ġ
				printf("%i", i);
				print_cnt++;
				if (i != MAX)
					printf("%s", (print_cnt % 9) ? ", " : "\n");
			}
		}
	}
	printf("\n\n");

	return 0;
}
