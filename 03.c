/* 문자열을 두 개 입력받고, 합쳐서 출력하는 예제 */

// 비보안 함수 사용 에러를 금지하려면 아래 매크로의 주석을 해제한다.
// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_str[255] = "";
	char second_str[255] = "";
	char buffer[255] = "";

	printf("처음 문자열을 입력하세요: ");
	scanf_s("%s", first_str, sizeof(first_str));
	printf("다음에 연결할 문자열을 입력하세요: ");
	scanf_s("%s", second_str, sizeof(second_str));

	/* 출력할 때 연결하는 방법 */
	printf("결과: %s %s\n", first_str, second_str);  

	/* sprintf_s 함수 이용하는 방법 */
//	sprintf_s(buffer, sizeof(buffer), "%s %s", first_str, second_str);  
//	printf("%s\n", buffer);

	/* 문자열 결합 함수를 이용하는 방법 */
	//if (!strcat_s(first_str, sizeof(first_str), " ") &&		
	//	!strcat_s(first_str, sizeof(first_str), second_str)) 		
	//	printf("결과: %s\n", first_str);					
	//else
	//	printf("문자열 결합에 문제가 있습니다. \n");

	return 0;
}