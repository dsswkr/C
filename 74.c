/* ȫ�浿, �̵���, ����ȣ, �������̶�� �̸� ������ ���� ��, 
   ���� 1�� �Է��ϸ� ��ü �̸��� ��� �����ְ�, 
   ���� 2�� �Է��ϸ� ���� ����ϰ�, 
   ���� 3�� �Է��ϸ� ���� ������ �̸��� ����ϰ�, 
   ���� 4�� �Է��ϸ� ���α׷��� �����ÿ�. 
   (��, ��ü �̸����� ���� ù ���ڶ�� ����Ѵ�.)

   [���� ȭ��]
   1. ��ü �̸� ����
   2. ���� ����
   3. �̸��� ���� 
   4. ������ 
   �޴��� �����ϼ���(1~4): 3 
   �浿
   ����
   ��ȣ
   ����  */

#include <stdio.h>

#define COUNT 4

char menu[] = "1. ��ü �̸� ����\n2. ���� ����\n3. �̸��� ����\n4. ������\n�޴��� �����ϼ���(1~4): ";
char * name[COUNT] = { "ȫ�浿", "�̵���", "����ȣ", "������" };

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
			printf("\n[��ü �̸� ���]\n");
			for (i = 0; i < COUNT; i++)
				printf("%s\n", name[i]);
			break;
		case 2:
			printf("\n[���� ����]\n");
			for (i = 0; i < COUNT; i++) {
				last_name[0] = name[i][0];
				last_name[1] = name[i][1];
				printf("%s\n", last_name);
			}
			break;
		case 3: 
			printf("\n[�̸��� ����]\n");
			for (i = 0; i < COUNT; i++) 
				printf("%s\n", (char *)(name[i])+2);			
			break;
		default: 
			continue;
		}
	}

	return 0;
}