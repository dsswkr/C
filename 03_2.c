#include <stdio.h>
#include <string.h>

int main()
{
	char first_str[255] = "";
	char second_str[255] = "";

	printf("처음 문자열을 입력하세요: ");
	scanf_s("%s", first_str, sizeof(first_str));
	/* scanf("%s", first_str) */

	printf("다음에 연결할 문자열을 입력하세요: ");
	scanf_s("%s", second_str, sizeof(second_str));
	/* scanf("%s", second_str); */

	/* 첫 문자열 뒤에 빈칸 추가하기 */
	strcat_s(first_str, sizeof(first_str), " ");  /* strcat(first_str, " "); */

	/* 연결해서 출력하기 */
	/* strcat(first_str, second_str) */
	if (!strcat_s(first_str, sizeof(first_str), second_str))
		printf("결과: %s\n", first_str);
	else
		printf("문자열 결합에 문제가 있습니다. \n");

	return 0;
}
