/* �� ���� �̸��� ����Ʈ�� �Է¹ް�, ���������� �̸��� ȭ�鿡 ����Ͻÿ�.
   ('abc...', '������...' �����̰� ������ �ѱۺ��� ������ ���ƾ���) */

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
		printf("%i�� �̸��� �Է��ϼ���.: ", i);
		scanf_s("%s", name, sizeof(name));
		strcpy_s(name_list[i], 255, name);
	}

	str_sort((char **)name_list);

	printf("\n[���ĵ� �̸� ���]\n");
	for (i = 0; i < 10; i++)
		printf("%s\n", name_list[i]);
	printf("\n<��>\n");

	return 0;
}