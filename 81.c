/* 2~8�ڸ� ���� ������ �Է¹ް�, �� �ڸ��� ���� �ݴ�� ����Ͻÿ�.
   (��; 12345�� �Է��ϸ� 54321�� �����)   */

#include <stdio.h>

int main(void)
{
	int num = -1, num2 = 0;

	while (num < 10 || num > 99999999) {
		printf("\n2~8�ڸ� ���� ������ �Է��Ͻÿ�: ");
		scanf_s("%i", &num);
	}

	while (num > 0) {
		num2 *= 10;
		num2 += num % 10;
		num /= 10;
	}
	
	printf("������ ����: %i\n", num2);
	
	return 0;
}
