/* 열 개의 이름을 리스트에 입력받고, 사전순서로 이름을 화면에 출력하시오.
   ('abc...', '가나다...' 순서이고 영문이 한글보다 순위가 높아야함) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_list[10][256]; /* = { "","","","","","","","","","" }; */

void str_sort(char ** list)
{
	qsort(list, 10, sizeof(char[256]), strcmp);
}

int main(void)
{
	int i;
	char name[256];

	for (i = 0; i < 10; i++) {
		printf("%i번 이름을 입력하세요.: ", i);
		scanf_s("%s", name, sizeof(name));
		strcpy_s(name_list[i], 255, name);
	}

	str_sort((char **)name_list);

	printf("\n[정렬된 이름 목록]\n");
	for (i = 0; i < 10; i++)
		printf("%s\n", name_list[i]);
	printf("\n<끝>\n");

	return 0;
}