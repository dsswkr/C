#include <stdio.h>
#include <string.h>

int main()
{
	char first_str[255] = "";
	char second_str[255] = "";

	printf("ó�� ���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", first_str, sizeof(first_str));
	/* scanf("%s", first_str) */

	printf("������ ������ ���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", second_str, sizeof(second_str));
	/* scanf("%s", second_str); */

	/* ù ���ڿ� �ڿ� ��ĭ �߰��ϱ� */
	strcat_s(first_str, sizeof(first_str), " ");  /* strcat(first_str, " "); */

	/* �����ؼ� ����ϱ� */
	/* strcat(first_str, second_str) */
	if (!strcat_s(first_str, sizeof(first_str), second_str))
		printf("���: %s\n", first_str);
	else
		printf("���ڿ� ���տ� ������ �ֽ��ϴ�. \n");

	return 0;
}
