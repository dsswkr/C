/* ���� ü���� 1000 cm���� ��, ���� �������� �Ҽ��� ���ڸ����� ����Ͻÿ�. 
   (��, ���� ü�� = 4/3 �� �� �� R���̰�, �д� 3.141592��) */

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void)
{
	double radius;
	double volume = 1000.0;

	/* ���� ü�� = 4 * PI * r * r * r / 3  */ 
	radius = pow(volume * 3.0 / 4.0 / PI, 1.0/3.0);

	printf("���� �������� �� %.2fcm�Դϴ�.\n", radius);

	return 0;
}
