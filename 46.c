/* �� �� X, Y�� �Է� �ް� X�� Y�� ���� �� ���� �� �ڸ� ������ ����Ͻÿ�.
   X�� 1~9, Y�� 2~10���� ����ϵ� double ������ ����ϰ�, 
   X�� Y���� ���� �Լ�(pow())�� ������� ���� ���� �����Ͻÿ�. */

#include <stdio.h>
// #include <math.h>    // pow

int main(void)
{
	unsigned int i;
	unsigned int x = -1, y = -1;
	long long xx = 1;
/*
	while (x < 1 || x > 9 || y < 2 || y > 10) {
		printf("X�� Y���� ���ϴ� �����Դϴ�.\n");
		printf("���� X�� �Է��ϼ���(1~9): ");
		scanf_s("%i", &x);
		printf("���� Y�� �Է��ϼ���(2~10): ");
		scanf_s("%i", &y);
	}
*/
	do {
		printf("X�� Y���� ���ϴ� �����Դϴ�.\n");
		printf("���� X�� �Է��ϼ���(1~9): ");
		scanf_s("%i", &x);
		printf("���� Y�� �Է��ϼ���(2~10): ");
		scanf_s("%i", &y);
	} while (x < 1 || x > 9 || y < 2 || y > 10);

	//	xx = pow(x, y);
	for (i = 0; i < y; i++)
		xx *= x;

	printf("%i�� %i�� = %lli\n", x, y, xx);

	/* �ڸ��� ��� */
	i = 0;
	while (xx > 0) {
		xx = xx / 10;    // xx /= 10;
		i++;
	}

	printf("��� ���� �ڸ��� = %i \n", i);

	return 0;
}