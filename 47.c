/* ������ �Է¹ް�, �����̸� "����", ����̸� "���", 0�̸�, "��"�� ����Ͻÿ�. */

#include <stdio.h>

#define MAX 100
#define MIN -100

int main(void)
{
	int n=MAX+1;

	while (n<MIN || n>MAX) {
		printf("������ �Է��ϼ���(%i~%i): ", MIN, MAX);
		scanf_s("%i", &n);
	}

	printf("%i ���ڴ� \'%s\'�Դϴ�.\n", n, (n < 0) ? "����" : ((n == 0) ? "��" : "���"));

	return 0;
}