/* 연도(1583~9999)와 월(1~12)을 입력받고 달력을 출력하시오. */
#include <stdio.h>

int days_of_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  // 월의 최대 날짜

// 해당 월의 1일이 무슨 요일인지 구하는 함수 (반환 값: 0=일, 1=월, ..., 6=토)
int day_of_week(int year, int month) 
{
	int i, temp = 0;

	// 구하는 연도의 첫날 요일 계산 
	temp = (year + (year-1) / 4 - (year-1) / 100 + (year-1) / 400) % 7;
	// 구하는 연도의 2월 날짜 수 계산
	days_of_month[2] = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;

	for (i = 1; i < month; i++)  // 이전 월까지의 전체 날짜 수 구함
		temp += days_of_month[i];

	return (temp % 7);	// 반환값: 0=일요일,... 
}

// 달력을 출력하는 함수
int print_cal(int year, int month)
{
	int i, j, temp, day;	

	if ((year < 1583 || year > 9999) || month < 1 || month > 12)
		return 1;

	day = day_of_week(year, month);		// 해당 월의 시작 요일 
	temp = days_of_month[month];		// 해당 월의 날짜 수

	printf("\n\t[%i년 %i월] \n", year, month);
	printf("============================\n");
	printf(" 일  월  화  수  목  금  토 \n");
	printf("----------------------------\n");
	printf(" ");
	for (i = 1; i <= day; i++)
		printf("    ");

	for (i = 1, j = day; i <= temp; i++, j++) {
		if (j == 7) {		// 요일별로 출력되도록 줄바꿈
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
		printf("달력의 연도를 입력하시오(1583~9999): ");
		scanf_s("%i", &y);
		
		printf("달력의 월을 입력하시오(1~12): ");
		scanf_s("%i", &m);
		
		if (print_cal(y, m)) 
			printf("입력 오류입니다!!!\n");		
	}
	return 0;
}