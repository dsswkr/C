/* ��ȭ��ȣ�� ��02 - 540 - 5403�� �������� �Է� �ް�, 
   ��ȭ��ȣ ���ڸ� ����Ͻÿ�. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i;
	char * p; 
	char phone[256];

	p = phone;
	printf("��ȭ��ȣ�� '-'�� �����Ͽ� �Է��ϼ���.: ");
	scanf_s("%s", phone, sizeof(phone) - 1);

	for (i = 0; i < (int)strlen(phone); i++) {
		if (isdigit(phone[i])) {
			*p = phone[i];
			p++;
		}
	}
	*p = '\0';  // NULL ���� ����

	printf("\n'-' ���� ������ ��ȭ��ȣ: %s\n", phone);
}

