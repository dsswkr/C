/* ���ڿ��� �Է¹ް�, ����ϴ� ���� */

#include <stdio.h>

int main(void)
{
	char name[255] = "";

	printf("����� �̸���?: ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);    // puts(name);
	return 0;
}