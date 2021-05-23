/* 문자열을 입력받고, 출력하는 예제 */

#include <stdio.h>

int main(void)
{
	char name[255] = "";

	printf("당신의 이름은?: ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);    // puts(name);
	return 0;
}