/* �� ���ڸ� A, B ������ �Է¹ް�, ���� ����� ���� ����ó�� ����Ͻÿ�.
   A x B = ���(��; 2�� 3�� �ԷµǸ�, ��2 x 3 = 6���� �����)  */

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("������ �Է��ϼ���: ");
	scanf_s("%i", &a);
	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%i", &b);

	printf("%i x %i = %i \n", a, b, a*b);
	return 0;
}