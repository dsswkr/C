/* 성과 이름을 입력받고 가장 끝 이름을 *로 바꿔서 출력하시오. 
   (예; '홍길동' 이름을 입력하면 '홍길*' 형식으로 출력함. */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len = 0;
	char name[100] = { 0, };

	while (len < 3) {
		printf("\n당신의 이름을 입력하세요(세 글자 이상): ");		
		scanf_s("%s", name, 99);
		len = strlen(name);
	}

	if ((unsigned char)name[len - 2] > 0x80) {		// 이름 끝 문자가 한글
		name[len - 2] = '*';
		name[len - 1] = '\0';
	} else
		name[len - 1] = '*';						// 이름 끝 문자가 영어

	printf("당신의 이름은(끝 자는 * 대체): %s\n", name);

	return 0;
}