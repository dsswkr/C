/* �������� ���� �Է� �ް� �� ���� ��2 x 3 = 6���������� ��� ����Ͻÿ�. 
   �Է� ���� 0�̸� �����ϰ� �׷��� ������ ���� �ݺ��Ͻÿ�. */

#include <stdio.h>

int main(void)
{
	int i, dan;

	while (1) {
		printf("�������� ���� �Է��ϼ���(2~9; 0=����): ");
		scanf_s("%i", &dan);

		if (dan == 0)
			break;
		else if (dan < 2 || dan > 9)
			continue;

		printf("\n[%i��]\n", dan);
		for (i = 1; i <= 9; i++)
			printf("%i x %i = %2i\n", dan, i, dan*i);
		printf("\n");
	}
	printf("�����.\n");

	return 0;
}