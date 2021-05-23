/* 1~20 ������ ���� n�� �Է� �ް� ���丮��(n!) ���� ����Ͻÿ�. 
   ������ ����� �ٽ� ������ �Է� �����ÿ�. */

#include <stdio.h> 

#define MAX 20
#define MIN 1

int main(void)
{
	unsigned int i;
	unsigned int n = MAX + 1;
	double factorial = 1.0;

	while (n < MIN || n > MAX) {
		printf("���丮�� ���� ���ϰ� ���� %i~%i ���� ������ �Է��Ͻÿ�: ",
			   MIN, MAX);
		scanf_s("%i", &n);
	}

	for (i = 2; i <= n; i++)
		factorial *= (double)i;

	printf("%i! = %0.f\n", n, factorial);

	return 0;
}