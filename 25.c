/* �� ������ �Է� �ް�, �� ������ ������ ���Ͽ� ���� ���� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("������ �Է��Ͻÿ�(a) : ");
	scanf_s("%i", &a);

	printf("�ٸ� ������ �ϳ� �� �Է��Ͻÿ�(b): ");
	scanf_s("%i", &b);

	printf("\n%i�� ������ %i�� ������ ���� ����� %i�Դϴ�.\n", a, b, a*a + b*b); 

	return 0;
}
