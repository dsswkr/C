/* ����:
   �̸��� �Է� �޾Ƽ� ����ϴ� ������ 10�� �ݺ��ؼ� �����Ͻÿ�. 
   ��, ������ �̸��� �Էµ� ���� ������ "�̹� �����ϴ� �̸��Դϴ�.���� ����ϰ�, 
   �Է��� �̸��� ���� '0'���� �����ϸ� �����Ͻÿ�. */

#include <stdio.h>
#include <string.h>

char name_list[10][256] = { "", };    /* �Է¹��� �̸� ��� */

check_dup_name(char * s)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (strcmp(s, name_list[i]) == 0)   /* ���� �̸� ������ */
			return 1;
	}

	return 0;
}

int main(void)
{
	int i; 
	char name[256];

	for (i = 0; i < 10; i++) {
		printf("�̸��� �Է��ϼ���: ");
		scanf_s("%s", &name, sizeof(name));
		if (name[0] == '0')
			break;
		if (check_dup_name(name)) {
			printf("�̹� �����ϴ� �̸��Դϴ�.\n");
			i--;
			continue;
		}
		else {
			strcpy_s(name_list[i], sizeof(name_list[0]), name);
			printf("�Է��� �̸�: %s \n", name_list[i]);
		}
	}

	return 0;
}