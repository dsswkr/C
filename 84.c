/* ������ ǳ���� ��Ÿ�� ��, ���� ǳ���� ���߸� 5��, �Ķ� ǳ���� 3��, ��� ǳ���� 1���̰� 
   �����߸� -1���� ��, 10�� ������ �� ǳ���� ���� ���ڸ� �Է¹ް�, ��� ������ ����Ͻÿ�. */

#include <stdio.h>

#define RED    5
#define BLUE   3
#define YELLOW 1
#define FAIL  -1  
#define TOTAL 10

int main(void)
{
	int red = -1, blue = -1, yello = -1, fail = 0, sum;

	while (red < 0 || red > TOTAL)
	{
		printf("\n%i�� ��ȸ���� ���� ǳ���� ���� ���ڸ� �Է��ϼ���(0~10): ", TOTAL);
		scanf_s("%i", &red);
	}
	sum = red;

	if (red < TOTAL) {
		while ((blue < 0 || blue > TOTAL - sum))
		{
			printf("\n%i�� ��ȸ���� �Ķ� ǳ���� ���� ���ڸ� �Է��ϼ���(0~10): ", TOTAL - red);
			scanf_s("%i", &blue);
		}
	}
	else
		blue = 0;

	sum += blue;

	if (blue < TOTAL - red) {
		while (yello < 0 || yello > TOTAL - sum)
		{
			printf("\n%i�� ��ȸ���� ��� ǳ���� ���� ���ڸ� �Է��ϼ���(0~10): ", TOTAL - sum);
			scanf_s("%i", &yello);
		}
	}
	else
		yello = 0;

	sum += yello;
	fail = TOTAL - sum;
	printf("red(5��):%iȸ, blue(3��):%iȸ, yello(1��):%iȸ, fail(-1��):%iȸ\n", 
		red, blue, yello, fail );
	printf("��� ���� = %i\n", red*RED + blue*BLUE + yello*YELLOW + fail*FAIL);

	return 0;
}