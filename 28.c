/* �л� ������ �̸��� ����, ����, ���� ������ �Է� �ް�, 
   �� �л��� �̸��� ����� ����Ͻÿ�. */

#include <stdio.h>

char name[3][100]; 
int score[3][3];
double average[3];

int main(void)
{    
	int i;
	for (i = 0; i < 3; i++) {
		printf("%i�� �л� �̸��� �Է��ϼ���: ", i+1);
		scanf_s("%s", &name[i], 99);

		printf("%i�� �л��� ���� ���� ���� ������ �Է��ϼ���"
			   "(��; 90 90 90): ", i+1);
		scanf_s("%i %i %i", &score[i][0], &score[i][1], &score[i][2]);

		average[i] = (score[i][0] + score[i][1] + score[i][2]) / 3;
	}

	printf("\n�̸�      : ���\n");
	printf("----------------\n");
	for (i = 0; i < 3; i++) 
		printf("%-10s: %.2f\n", name[i], average[i]);

	return 0;
}
