/* �� �ڸ� ������ �Է¹ް� ������ �ִ� �������� �ƴ����� ����Ͻÿ�(��, 1583����� �Է¹���). */

#include <stdio.h>

int main(void)
{
	int year = 1582;
	int is_leap_year;

	while (year < 1583 || year > 9999) {
		printf("�������� Ȯ���� ������ �� �ڸ��� �Է��ϼ���(��; 2016): ");
		scanf_s("%i", &year);	// scanf("%i", &year);
	}

	is_leap_year = (!(year % 400) || (!(year % 4) && (year % 100)));

	printf("%i���� %s�Դϴ�.\n", year, is_leap_year ? "����" : "���");

	return 0;
}