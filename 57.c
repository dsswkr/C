/* ���(Heron)�� ������ �̿��Ͽ� �� �� A, B, C�� 3, 4, 5�� �ﰢ�� ���̸� ���Ͻÿ�. 
    S = (A + B + C) / 2
	�ﰢ�� ���� = sqrt(S*(S - A)*(S - B)*(S - C))   */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 3, b = 4, c = 5;
	double s, area; 

	s = (double)(a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));  
	
	printf("���� ���̰� %i, %i, %i�� �ﰢ�� ���� = %.3f\n", a, b, c, area);

	return 0;
}
