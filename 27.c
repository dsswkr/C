/* 구구단의 단을 입력 받고 그 단을 “2 x 3 = 6”형식으로 모두 출력하시오. 
   입력 값이 0이면 종료하고 그렇지 않으면 무한 반복하시오. */

#include <stdio.h>

int main(void)
{
	int i, dan;

	while (1) {
		printf("구구단의 단을 입력하세요(2~9; 0=종료): ");
		scanf_s("%i", &dan);

		if (dan == 0)
			break;
		else if (dan < 2 || dan > 9)
			continue;

		printf("\n[%i단]\n", dan);
		for (i = 1; i <= 9; i++)
			printf("%i x %i = %2i\n", dan, i, dan*i);
		printf("\n");
	}
	printf("종료됨.\n");

	return 0;
}