/* 10진수 258을 8진수로 출력하시오. (8진수 출력 형식 지정어는 사용 금지) */

#include <stdio.h>
#include <string.h>

#define NUMBER 258
#define MAX_OCTAL_LEN 100

int main(void)
{
	int i, j, temp, n = NUMBER;
	char octal[MAX_OCTAL_LEN+1] = { 0, };

	for (i = 0; i < MAX_OCTAL_LEN - 1 && n > 7; i++) {
		octal[i] = n % 8 + '0';
		n /= 8;
	}
	octal[i] = n + '0';

	for (i = 0; i < (int)strlen(octal) / 2; i++) { // 문자열 뒤집기
		j = strlen(octal) - 1 - i;
		temp = octal[i];
		octal[i] = octal[j];
		octal[j] = temp;
	}

	printf("10진수 %i의 8진수 = %s \n", NUMBER, octal);
	// printf("10진수 %i의 8진수 = %o \n", NUMBER, NUMBER);  // 테스트
}

