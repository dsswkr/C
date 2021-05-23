/* 정수 배열 na에 20, -10, 5, -4, -11, 6, -1 값이 있을 때
   배열의 요소 값을 모두 출력하고, 음수의 합을 출력하시오.*/

#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	int na[] = { 20, -10, 5, -4, -11, 6, -1 };

	for (i = 0; i < sizeof(na) / sizeof(int); i++) {
		printf("%i ", na[i]);
		if (na[i] < 0)
			sum += na[i];
	}

	printf("\n\n음수의 합 : %i\n\n", sum);

	return 0;
}
