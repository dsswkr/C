/* 점수를 입력 받아서 그 점수를 출력하고, 
   60점 미만은 '탈락', 90점 이상은 '우수'를 출력하시오. */
#include <stdio.h>

int main(void)
{
	int score = -1;
	
	while (score < 0 || score > 100)
	{
		printf("점수를 입력하세요(0~100): ");
		scanf_s("%i", &score);
	}

	printf("입력한 점수: %i\n", score);
	if (score >= 90)
		printf("우수\n");
	else if (score < 60)
		printf("탈락\n");

	return 0;
}

//int main(void)
//{
//	int score = -1;
//
//	while (1)
//	{
//		printf("점수를 입력하세요(0~100): ");
//		scanf_s("%i", &score);
//		if (score >= 0 && score <= 100)
//			break;
//	}
//
//	printf("입력한 점수: %i\n", score);
//	if (score >= 90)
//		printf("우수\n");
//	else if (score < 60)
//		printf("탈락\n");
//
//	return 0;
//}
