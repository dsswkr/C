#include <stdio.h>

/* ���� ���� (5�� ���� �ڷḦ ó���ϴ� Stack) */
#define MAX 5
int a[MAX];

/* ���� �۾� ��ġ */
int top = -1;

/* ���� �۾� ���: 0 = ����, 1 = ���� */
int stack_err = 0;  

/* ���ÿ� �ڷḦ �ִ� �Լ�  */
/* �Է°� : ����              */
/* ��ȯ��: 0 = ����, 1 = ���� */
int push(int x)
{
	if (top >= MAX - 1)
		return (stack_err = 1);  /* ���ÿ� �� ���� �� ���� */

	stack_err = 0;
	a[++top] = x;
	return 0;
}

/* ���ÿ��� �ڷḦ ���� �Լ� */
/* ��ȯ��: check_stack_error() ȣ�� ����� 0�� ��, ���ÿ��� ���� �ڷ� */
int pop()
{
	if (top < 0)
		return (stack_err = 1);  /* ���ÿ� �ڷᰡ ���� */

	stack_err = 0;
	return a[top--];
}

/* ���� ����� �۾����� ������ �߻��ߴ��� �˻� */
/* ��ȯ��: 0 = ����, 1 = ����                */
int check_stack_error()
{
	int err = stack_err;
	stack_err = 0;
	return err;
}

/* ���� �ڷ� ���� ���� */
int main()
{
	int i, data;

	/* 7�� ������ PUSH ó�� (���ÿ� �ڷ� �ֱ�) */
	for (i = 1; i <= MAX + 2; i++) {  
		if (push(i * 100))
			printf("���� PUSH ����!\n");
		else
			printf("PUSH: %i\n", i * 100);
	}

	/* 7�� ������ POP ó�� (���ÿ��� �ڷ� ������) */
	for (i = 1; i <= MAX + 2; i++) {  
		data = pop();
		if (check_stack_error())
			printf("���� POP ����!\n");
		else
			printf("POP: %i\n", data);
	}

	return 0;
}
