/* 10���� 258�� 8������ ����Ͻÿ�. (8���� ��� ���� ������� ��� ����) */

#include <stdio.h>
#include <string.h>

#define NUMBER 258
#define MAX_OCTAL_LEN 100

int main(void)
{
	int i, j, temp, n = NUMBER;
	char octal[MAX_OCTAL_LEN+1] = { 0, };

	for (i = 0; i < MAX_OCTAL_LEN - 1 && n > 7; i++) {
		octal[i] = n % 8 + '0';
		n /= 8;
	}
	octal[i] = n + '0';

	for (i = 0; i < (int)strlen(octal) / 2; i++) { // ���ڿ� ������
		j = strlen(octal) - 1 - i;
		temp = octal[i];
		octal[i] = octal[j];
		octal[j] = temp;
	}

	printf("10���� %i�� 8���� = %s \n", NUMBER, octal);
	// printf("10���� %i�� 8���� = %o \n", NUMBER, NUMBER);  // �׽�Ʈ
}

