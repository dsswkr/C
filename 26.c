/* ���� ���ڸ� �Է� ���� ������ �� �հ踦 ����ϴ� ���� ������ �ۼ��ϵ�, 
   '0'�� �ԷµǸ� �����ϵ��� �ۼ��Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int num = 1, sum = 0;

	while (num != 0) {
		printf("���� ���ڸ� �Է��Ͻÿ�: ");
		scanf_s("%i", &num);
		sum += num;
		printf("�հ�: %i\n", sum);
	}
	printf("�����!\n");

	return 0;
}


//int main(void)
//{
//	int num, sum = 0;
//
//	while (1) {
//		printf("���� ���ڸ� �Է��Ͻÿ�: ");
//		scanf_s("%i", &num);
//		if (num == 0) {
//			printf("�����.\n");
//			break;
//		}
//		sum += num;
//		printf("�հ�: %i\n", sum);
//	}
//
//	return 0;
//}