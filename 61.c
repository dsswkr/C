/* ���� �ٸ� ���� �� �� �Է� �ް�, ũ�Ⱑ �߰��� ���� ����Ͻÿ�.  
   ���� ���� ���� �Է¹����� �ٽ� �Է� �����ÿ�. */

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 0, b = 0, c = 0;

	while (a == b || b == c || a == c) {
		printf("���� �ٸ� �� ������ �Է��ϼ���(��; 30 50 20): ");
		scanf_s("%i %i %i", &a, &b, &c);
	}

	if (a > b) 
		swap(&a, &b);
	if (b > c) 
		swap(&b, &c);
	if (a > b) 
		swap(&a, &b);

	printf("\n %i, %i, %i ���� �߰� �� => %i \n\n", a, b, c, b);

	return 0;
}
