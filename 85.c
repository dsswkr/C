/* 네 자리 연도를 입력받고 윤달이 있는 윤년인지 아닌지를 출력하시오(단, 1583년부터 입력받음). */

#include <stdio.h>

int main(void)
{
	int year = 1582;
	int is_leap_year;

	while (year < 1583 || year > 9999) {
		printf("윤년인지 확인할 연도를 네 자리로 입력하세요(예; 2016): ");
		scanf_s("%i", &year);	// scanf("%i", &year);
	}

	is_leap_year = (!(year % 400) || (!(year % 4) && (year % 100)));

	printf("%i년은 %s입니다.\n", year, is_leap_year ? "윤년" : "평년");

	return 0;
}