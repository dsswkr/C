#include <stdio.h>

// 지구에서 달까지의 거리 (mm 단위)
#define LEN 380000000000.0

int main()
{
	int count = 0;
	double d = 1;   // 1mm

	while (d <= LEN) {
		count++;
		d *= 2;
	}

	printf("1mm 두께 종이를 접어서 지구에서 달까지(38만km) 도달하려면,\n"
			"%i번 접어야합니다. 접은 종이의 두께는 약 %.0lf만km입니다.\n", count, d/10000000000.0);

	return 0;
}