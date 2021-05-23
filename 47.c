/* 정수를 입력받고, 음수이면 "음수", 양수이면 "양수", 0이면, "영"을 출력하시오. */

#include <stdio.h>

#define MAX 100
#define MIN -100

int main(void)
{
	int n=MAX+1;

	while (n<MIN || n>MAX) {
		printf("정수를 입력하세요(%i~%i): ", MIN, MAX);
		scanf_s("%i", &n);
	}

	printf("%i 숫자는 \'%s\'입니다.\n", n, (n < 0) ? "음수" : ((n == 0) ? "영" : "양수"));

	return 0;
}