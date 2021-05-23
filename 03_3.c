#include <stdio.h>
#include <string.h>

int main()
{
	char first_str[255] = "";
	char second_str[255] = "";
	char buffer[255] = "";

	printf("처음 문자열을 입력하세요: ");
	scanf_s("%s", first_str, sizeof(first_str));
	/* scanf("%s", first_str); */

	printf("다음에 연결할 문자열을 입력하세요: ");
	scanf_s("%s", second_str, sizeof(second_str));
	/* scanf("%s", second_str); */

	sprintf_s(buffer, sizeof(buffer), "%s %s", first_str, second_str);
	/* sprintf(buffer, “%s %s”, first_str, second_str); */

	printf("%s\n", buffer);

	return 0;
}
