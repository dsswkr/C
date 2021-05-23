/* 임의의 풍선이 나타날 때, 빤간 풍선을 맞추면 5점, 파란 풍선은 3점, 노란 풍선은 1점이고 
   못맞추면 -1점일 때, 10번 던져서 각 풍선을 맞춘 숫자를 입력받고, 결과 점수를 출력하시오. */

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
		printf("\n%i번 기회에서 빨간 풍선을 맞춘 숫자를 입력하세요(0~10): ", TOTAL);
		scanf_s("%i", &red);
	}
	sum = red;

	if (red < TOTAL) {
		while ((blue < 0 || blue > TOTAL - sum))
		{
			printf("\n%i번 기회에서 파란 풍선을 맞춘 숫자를 입력하세요(0~10): ", TOTAL - red);
			scanf_s("%i", &blue);
		}
	}
	else
		blue = 0;

	sum += blue;

	if (blue < TOTAL - red) {
		while (yello < 0 || yello > TOTAL - sum)
		{
			printf("\n%i번 기회에서 노란 풍선을 맞춘 숫자를 입력하세요(0~10): ", TOTAL - sum);
			scanf_s("%i", &yello);
		}
	}
	else
		yello = 0;

	sum += yello;
	fail = TOTAL - sum;
	printf("red(5점):%i회, blue(3점):%i회, yello(1점):%i회, fail(-1점):%i회\n", 
		red, blue, yello, fail );
	printf("결과 점수 = %i\n", red*RED + blue*BLUE + yello*YELLOW + fail*FAIL);

	return 0;
}