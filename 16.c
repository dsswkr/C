/* 정수 숫자 X를 입력 받아서 (X-1)의 세제곱 값을 출력하시오. 
   단, 1보다 적은 값이 입력되면 다시 입력 받으시오. */

#include <stdio.h>

int main(void)
{
	int x;

	do {
		printf("(x-1)의 3승을 계산할 x 값을 정수로 입력하세요: ");
		scanf_s("%i", &x);
		if (x < 1)
			printf("1 이상의 정수 값만 입력하세요.\n");
	} while (x < 1);
	
	printf("(%i-1)의 3승은 %i입니다.\n", x, (x - 1)*(x - 1)*(x - 1));

	return 0;
}