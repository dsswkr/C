/* �� �Ǽ� x, y�� �Է¹޾� ��Ʈ(x���� + y����)�� ����ϵ� 
   ���� �Լ� sqrt(), pow()�� �̿��� ����� ����Ͻÿ�. */

#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y;   

	printf("x ���� �Է��ϼ���: ");
	scanf_s("%f", &x);
	printf("y ���� �Է��ϼ���: ");
	scanf_s("%f", &y);

	printf("Root(%.3f�� ���� + %.3f�� ����) = %.3f\n", x, y, sqrt(pow(x,2) + pow(y,2))); 
	return 0;
}