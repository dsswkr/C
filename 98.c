#include <stdio.h>

// �������� �ޱ����� �Ÿ� (mm ����)
#define LEN 380000000000.0

int main()
{
	int count = 0;
	double d = 1;   // 1mm

	while (d <= LEN) {
		count++;
		d *= 2;
	}

	printf("1mm �β� ���̸� ��� �������� �ޱ���(38��km) �����Ϸ���,\n"
			"%i�� ������մϴ�. ���� ������ �β��� �� %.0lf��km�Դϴ�.\n", count, d/10000000000.0);

	return 0;
}