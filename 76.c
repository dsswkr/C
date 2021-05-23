/* 1에서 99 사이의 난수를 생성하고, 추정 값을 5 번까지 입력 받는 게임을 만듭니다. 
  입력된 값이 난수보다 작으면 “그것보다 큽니다.”, 크면 “그것보다 작습니다.”를 
  출력하고, 값을 맞추면 "정답입니다!"를 출력하고 끝냅니다. 
  단, 입력 횟수가 5회를 넘어가면 "실패했습니다!"를 출력하고 끝냅니다.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int quest, n = 1, input;

	srand((int)time(0));
	quest = (rand() % 99) + 1;

	while (n++ < 6)
	{		
		printf("1~99 범위의 숫자입니다. 예상하는 수를 입력하세요: ");
		scanf_s("%i", &input);
		if (quest == input) {
			printf("정답입니다!\n");
			return 0;
		}
		else if (quest > input)
			printf("%i보다 큽니다.\n", input);
		else
			printf("%i보다 작습니다.\n", input);
	}

	printf("실패했습니다!\n");

	return 0;
}