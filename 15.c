/* ���� ���� �װ�(A, B, C, D)�� �Է� �޾Ƽ� ����� �Ǽ� ������ ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	printf("���� �� ���� �Է��Ͻÿ�(��; 10 20 30 40 <����>): ");
	scanf_s("%i %i %i %i", &a, &b, &c, &d);

	printf("%i, %i, %i, %i �Է� ���� ����� %f�Դϴ�.\n", a, b, c, d, (a + b + c + d) / 4.0);

	return 0;
}
