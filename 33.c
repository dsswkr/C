/* 5�ڸ� ���ڸ� �Է¹޾Ƽ� �� 2�ڸ��� �Ʒ� 3�ڸ��� ����Ͻÿ�. 
(��: 12345 �Է� ��, 12, 345�� �����) */

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 5

int main(void)
{
	unsigned int ret;
	char str_num[MAX_NUM+1] = "";

	while (1) {
		printf("%i�ڸ� ���ڸ� �Է��Ͻÿ�(�� 12345): ", MAX_NUM);
		scanf_s("%s", str_num, MAX_NUM+1);

		ret = atoi(str_num);
		if (ret >= 10000)
			break;
	}

	printf("�� �� �ڸ�: %i\n", ret/1000);
	printf("�� �� �ڸ�: %i\n", ret%1000);
	return 0;
}