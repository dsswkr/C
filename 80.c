/* ���� �̸��� �Է¹ް� ���� �� �̸��� *�� �ٲ㼭 ����Ͻÿ�. 
   (��; 'ȫ�浿' �̸��� �Է��ϸ� 'ȫ��*' �������� �����. */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len = 0;
	char name[100] = { 0, };

	while (len < 3) {
		printf("\n����� �̸��� �Է��ϼ���(�� ���� �̻�): ");		
		scanf_s("%s", name, 99);
		len = strlen(name);
	}

	if ((unsigned char)name[len - 2] > 0x80) {		// �̸� �� ���ڰ� �ѱ�
		name[len - 2] = '*';
		name[len - 1] = '\0';
	} else
		name[len - 1] = '*';						// �̸� �� ���ڰ� ����

	printf("����� �̸���(�� �ڴ� * ��ü): %s\n", name);

	return 0;
}