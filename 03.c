/* ���ڿ��� �� �� �Է¹ް�, ���ļ� ����ϴ� ���� */

// �񺸾� �Լ� ��� ������ �����Ϸ��� �Ʒ� ��ũ���� �ּ��� �����Ѵ�.
// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_str[255] = "";
	char second_str[255] = "";
	char buffer[255] = "";

	printf("ó�� ���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", first_str, sizeof(first_str));
	printf("������ ������ ���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", second_str, sizeof(second_str));

	/* ����� �� �����ϴ� ��� */
	printf("���: %s %s\n", first_str, second_str);  

	/* sprintf_s �Լ� �̿��ϴ� ��� */
//	sprintf_s(buffer, sizeof(buffer), "%s %s", first_str, second_str);  
//	printf("%s\n", buffer);

	/* ���ڿ� ���� �Լ��� �̿��ϴ� ��� */
	//if (!strcat_s(first_str, sizeof(first_str), " ") &&		
	//	!strcat_s(first_str, sizeof(first_str), second_str)) 		
	//	printf("���: %s\n", first_str);					
	//else
	//	printf("���ڿ� ���տ� ������ �ֽ��ϴ�. \n");

	return 0;
}