/* ����(1583~9999)�� ��(1~12)�� �Է¹ް� �޷��� ����Ͻÿ�. */
#include <stdio.h>

int days_of_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  // ���� �ִ� ��¥

// �ش� ���� 1���� ���� �������� ���ϴ� �Լ� (��ȯ ��: 0=��, 1=��, ..., 6=��)
int day_of_week(int year, int month) 
{
	int i, temp = 0;

	// ���ϴ� ������ ù�� ���� ��� 
	temp = (year + (year-1) / 4 - (year-1) / 100 + (year-1) / 400) % 7;
	// ���ϴ� ������ 2�� ��¥ �� ���
	days_of_month[2] = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;

	for (i = 1; i < month; i++)  // ���� �������� ��ü ��¥ �� ����
		temp += days_of_month[i];

	return (temp % 7);	// ��ȯ��: 0=�Ͽ���,... 
}

// �޷��� ����ϴ� �Լ�
int print_cal(int year, int month)
{
	int i, j, temp, day;	

	if ((year < 1583 || year > 9999) || month < 1 || month > 12)
		return 1;

	day = day_of_week(year, month);		// �ش� ���� ���� ���� 
	temp = days_of_month[month];		// �ش� ���� ��¥ ��

	printf("\n\t[%i�� %i��] \n", year, month);
	printf("============================\n");
	printf(" ��  ��  ȭ  ��  ��  ��  �� \n");
	printf("----------------------------\n");
	printf(" ");
	for (i = 1; i <= day; i++)
		printf("    ");

	for (i = 1, j = day; i <= temp; i++, j++) {
		if (j == 7) {		// ���Ϻ��� ��µǵ��� �ٹٲ�
			printf("\n ");
			j = 0;
		}
		printf("%2d  ", i);
	}
	printf("\n============================\n\n");
	return 0;
}

int main(void)
{
	int y, m;

	while (1) {
		printf("�޷��� ������ �Է��Ͻÿ�(1583~9999): ");
		scanf_s("%i", &y);
		
		printf("�޷��� ���� �Է��Ͻÿ�(1~12): ");
		scanf_s("%i", &m);
		
		if (print_cal(y, m)) 
			printf("�Է� �����Դϴ�!!!\n");		
	}
	return 0;
}