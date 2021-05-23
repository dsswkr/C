/* 홍길동, 이동묵, 원종호, 최종현이라는 이름 정보가 있을 때, 
   숫자 1을 입력하면 전체 이름을 모두 보여주고, 
   숫자 2를 입력하면 성을 출력하고, 
   숫자 3을 입력하면 성을 제외한 이름을 출력하고, 
   숫자 4를 입력하면 프로그램을 끝내시오. 
   (단, 전체 이름에서 성은 첫 글자라고 약속한다.)

   [예시 화면]
   1. 전체 이름 보기
   2. 성만 보기
   3. 이름만 보기 
   4. 끝내기 
   메뉴를 선택하세요(1~4): 3 
   길동
   동묵
   종호
   종현  */

#include <stdio.h>

#define COUNT 4

char menu[] = "1. 전체 이름 보기\n2. 성만 보기\n3. 이름만 보기\n4. 끝내기\n메뉴를 선택하세요(1~4): ";
char * name[COUNT] = { "홍길동", "이동묵", "원종호", "최종현" };

int main(void)
{
	int i, n = 0;
	char last_name[3] = { 0, };

	while (n != 4)
	{
		printf("\n\n%s", menu);
		scanf_s("%i", &n);

		switch (n) {
		case 1:
			printf("\n[전체 이름 목록]\n");
			for (i = 0; i < COUNT; i++)
				printf("%s\n", name[i]);
			break;
		case 2:
			printf("\n[성만 보기]\n");
			for (i = 0; i < COUNT; i++) {
				last_name[0] = name[i][0];
				last_name[1] = name[i][1];
				printf("%s\n", last_name);
			}
			break;
		case 3: 
			printf("\n[이름만 보기]\n");
			for (i = 0; i < COUNT; i++) 
				printf("%s\n", (char *)(name[i])+2);			
			break;
		default: 
			continue;
		}
	}

	return 0;
}