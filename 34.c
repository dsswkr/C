/* 1024.3456 ���� �Ҽ��� �� �ڸ����� �ݿø��Ͽ� 
   �Ҽ��� ��°�ڸ����� ����Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	double f = 1024.3456;

	printf("%.2f\n", f += 0.005);

	return 0;
}