/* ������ �Է� �޾Ƽ� �� ������ ����ϰ�, 
   60�� �̸��� 'Ż��', 90�� �̻��� '���'�� ����Ͻÿ�. */
#include <stdio.h>

int main(void)
{
	int score = -1;
	
	while (score < 0 || score > 100)
	{
		printf("������ �Է��ϼ���(0~100): ");
		scanf_s("%i", &score);
	}

	printf("�Է��� ����: %i\n", score);
	if (score >= 90)
		printf("���\n");
	else if (score < 60)
		printf("Ż��\n");

	return 0;
}

//int main(void)
//{
//	int score = -1;
//
//	while (1)
//	{
//		printf("������ �Է��ϼ���(0~100): ");
//		scanf_s("%i", &score);
//		if (score >= 0 && score <= 100)
//			break;
//	}
//
//	printf("�Է��� ����: %i\n", score);
//	if (score >= 90)
//		printf("���\n");
//	else if (score < 60)
//		printf("Ż��\n");
//
//	return 0;
//}
