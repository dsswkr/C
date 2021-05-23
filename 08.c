/* 전화번호를 ‘02 - 540 - 5403’ 형식으로 입력 받고, 
   전화번호 숫자만 출력하시오. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i;
	char * p; 
	char phone[256];

	p = phone;
	printf("전화번호를 '-'를 포함하여 입력하세요.: ");
	scanf_s("%s", phone, sizeof(phone) - 1);

	for (i = 0; i < (int)strlen(phone); i++) {
		if (isdigit(phone[i])) {
			*p = phone[i];
			p++;
		}
	}
	*p = '\0';  // NULL 종료 문자

	printf("\n'-' 등을 제외한 전화번호: %s\n", phone);
}

