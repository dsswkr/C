/* 0���� ū �� ������ �Է� �޾Ƽ� 
   ��Ģ����(+, -, *, /) ����� �� ���� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, sum = 0;

	while (x <= 0 && y <= 0) {
		printf("0���� ū �� ������ ���ʷ� �Է��ϼ���(��:100 20<����>): ");
		scanf_s("%i %i", &x, &y);
	}

	printf("%i + %i = %i\n", x, y, x + y);
	printf("%i - %i = %i\n", x, y, x - y);
	printf("%i x %i = %i\n", x, y, x * y);
	printf("%i / %i = %i\n", x, y, x / y);

	sum = (x + y) + (x - y) + (x*y) + (x / y);
	printf("��� �� =  %i\n", sum);

	return 0;
}