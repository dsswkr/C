/* ���ڸ� �Է¹ް� �����̸� "�����Դϴ�.", �Ǽ��̸� "�Ǽ��Դϴ�."�� ����Ͻÿ�. 
   ��, -9999�� �ԷµǸ� �����Ͻÿ�.  */

#include <stdio.h>

int main(void)
{
	float f;

	do {
		printf("���� �Ǵ� �Ǽ��� �Է��ϼ���: ");
		scanf_s("%f", &f);

		if (f != -9999)
			if (f == (double)((int)f)) // (double)((int)f : �Ҽ��� ���� ����
				printf("�����Դϴ�.\n");
			else
				printf("�Ǽ��Դϴ�.\n");
	} while (f != -9999);

	return 0;
}