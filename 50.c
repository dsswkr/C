/* ������ �Ǽ������� �Է� �ް�, ���� ǥ������ ����Ͽ� ����Ͻÿ�. 
   ���� ǥ������ = 4*����*R*R�̰�, ���̴� 3.141592�� ����Ͻÿ�. */

#include <stdio.h>

#define PI 3.141592

int main(void)
{
	double diameter=0;
	double radius, serface_area = 0;

	while (diameter <= 0) {
		printf("ǥ������ ���� ���� ������ �Է��ϼ���: ");
		scanf_s("%lf", &diameter);
	}

	radius = diameter / 2;
	serface_area = 4.0 * PI * radius * radius;
	printf("���� %.3f ���� ǥ���� = %.3f\n", diameter, serface_area);

	return 0;
}