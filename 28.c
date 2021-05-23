/* 학생 세명의 이름과 국어, 영어, 수학 점수를 입력 받고, 
   각 학생의 이름과 평균을 출력하시오. */

#include <stdio.h>

char name[3][100]; 
int score[3][3];
double average[3];

int main(void)
{    
	int i;
	for (i = 0; i < 3; i++) {
		printf("%i번 학생 이름을 입력하세요: ", i+1);
		scanf_s("%s", &name[i], 99);

		printf("%i번 학생의 국어 영어 수학 점수를 입력하세요"
			   "(예; 90 90 90): ", i+1);
		scanf_s("%i %i %i", &score[i][0], &score[i][1], &score[i][2]);

		average[i] = (score[i][0] + score[i][1] + score[i][2]) / 3;
	}

	printf("\n이름      : 평균\n");
	printf("----------------\n");
	for (i = 0; i < 3; i++) 
		printf("%-10s: %.2f\n", name[i], average[i]);

	return 0;
}
