/* ���ڿ��� �Է¹ް�, ����ϴ� ���� */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char name[255] = "";

	printf("����� �̸���?: ");
	scanf("%s", name);
	printf("%s\n", name);    // puts(name);
	return 0;
}