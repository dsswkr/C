/* ���� ���� X, Y�� �Է� �޾Ƽ� 3X + 2Y ���� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int x, y;

	printf("���� x, y�� �Է��ϸ�, 3x + 2y ��� ���� ����ϴ� �����Դϴ�.\n");
	printf("X�� ������ �Է��ϼ���: ");
	scanf_s("%i", &x);
	printf("Y�� ������ �Է��ϼ���: ");
	scanf_s("%i", &y);

	printf("3*%i + 2*%i = %i\n", x, y, 3 * x + 2 * y);
	
	return 0;
}