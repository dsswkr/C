/* ���簢�� �� �� ���̸� �Է¹ް�, ���������� �߽ɱ����� �Ÿ��� ���Ͽ� ����Ͻÿ�. */

#include <stdio.h>
#include <math.h>   // sqrt, hypot

int main(void)
{
	double n = 0;
	double len;

	while (n <= 0) {
		printf("���簢�� �� ���� ���̸� �Է��ϼ���: ");
		scanf_s("%lf", &n);
	}
		
	// ������ = ���� / 2
	len = sqrt(2 * n * n) / 2;    // len = hypot(n, n) / 2;   

	printf("���������� �߽ɱ����� �Ÿ�: %f \n\n", len);

	return 0;
}


