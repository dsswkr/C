/* 예제:
   이름을 입력 받아서 출력하는 과정을 10번 반복해서 진행하시오. 
   단, 동일한 이름이 입력된 적이 있으면 "이미 존재하는 이름입니다.”를 출력하고, 
   입력한 이름이 숫자 '0'으로 시작하면 종료하시오. */

#include <stdio.h>
#include <string.h>

char name_list[10][256] = { "", };    /* 입력받은 이름 목록 */

check_dup_name(char * s)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (strcmp(s, name_list[i]) == 0)   /* 같은 이름 존재함 */
			return 1;
	}

	return 0;
}

int main(void)
{
	int i; 
	char name[256];

	for (i = 0; i < 10; i++) {
		printf("이름을 입력하세요: ");
		scanf_s("%s", &name, sizeof(name));
		if (name[0] == '0')
			break;
		if (check_dup_name(name)) {
			printf("이미 존재하는 이름입니다.\n");
			i--;
			continue;
		}
		else {
			strcpy_s(name_list[i], sizeof(name_list[0]), name);
			printf("입력한 이름: %s \n", name_list[i]);
		}
	}

	return 0;
}