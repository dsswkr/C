/* 1���� 99 ������ ������ �����ϰ�, ���� ���� 5 ������ �Է� �޴� ������ ����ϴ�. 
  �Էµ� ���� �������� ������ ���װͺ��� Ů�ϴ�.��, ũ�� ���װͺ��� �۽��ϴ�.���� 
  ����ϰ�, ���� ���߸� "�����Դϴ�!"�� ����ϰ� �����ϴ�. 
  ��, �Է� Ƚ���� 5ȸ�� �Ѿ�� "�����߽��ϴ�!"�� ����ϰ� �����ϴ�.*/

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
		printf("1~99 ������ �����Դϴ�. �����ϴ� ���� �Է��ϼ���: ");
		scanf_s("%i", &input);
		if (quest == input) {
			printf("�����Դϴ�!\n");
			return 0;
		}
		else if (quest > input)
			printf("%i���� Ů�ϴ�.\n", input);
		else
			printf("%i���� �۽��ϴ�.\n", input);
	}

	printf("�����߽��ϴ�!\n");

	return 0;
}