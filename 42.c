/* 15�� ����� ����� 500���� �ɾ��� �� ���̴� �� �������� �Ҽ��� ��° �ڸ����� ����Ͻÿ�. 
   ( SIN(15) = X / 500 ) */

#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int main(void)
{
	double d = 500;
	double h;

	h = sin(15 * M_PI / 180) * d;

	printf("���̴� %.2fm�Դϴ�.\n", h);

	return 0;
}