/* ���� ���� �� ���� �Է� �ް�, ó�� �Է��� ������ ������ �Է��� ���� �� ���� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("ó�� ������ �Է��ϼ���: ");
	scanf_s("%i", &num1);
	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%i", &num2);
	
	printf("%i - %i = %i \n", num1, num2, num1-num2);

	return 0;
}
