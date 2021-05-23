/* 문자열을 입력받고, 출력하는 예제 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char name[255] = "";

	printf("당신의 이름은?: ");
	scanf("%s", name);
	printf("%s\n", name);    // puts(name);
	return 0;
}