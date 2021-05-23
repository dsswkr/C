/* ���� �����͸� �ٷ�� ť(���� ť) ����
visual studio 2015, C �ҽ�
������ ����ڴ� #include <windows.h>�� system("cls") �κ��� ���� */

#include <stdio.h>
#include <stdlib.h>		/* exit() */
#include <windows.h>	/* system() */

#define QUEUE_MAX 5

int queue[QUEUE_MAX];	/* ť ���� */
int input_pos = 0;		/* ť ���� ��ġ (0,1,2,..,(Queue_MAX-1)) */
int output_pos = 0;		/* ť �д� ��ġ (0,1,2,..,(Queue_MAX-1)) */
int queue_items = 0;    /* ť�� ����� �׸� �� */

/* �ڷḦ ť�� ���� */
int push(int item)
{
	/* ť �׸� �ִ� ������ ������ �߰� ���� */
	if (queue_items < QUEUE_MAX) {  
		queue[input_pos] = item;
		// ť���� ���� ���� ��ġ �̵�
		input_pos = (input_pos + 1) % QUEUE_MAX;		
		queue_items++;

		return item;
	}
	else  /* ť�� ������ ���� ���� */							
		return -1;
}

// ť���� ����
int pop()
{
	int item;
	if (queue_items > 0) {
		item = queue[output_pos];
		// ť �ⱸ ��ġ ��ȯ...	
		output_pos = (output_pos + 1) % QUEUE_MAX;		
		queue_items--;
		return item;
	}
	else
		return -1;
}

/* ť �޴� */
int menu()
{
	int select;

	/* ť �޴� ��� */
	do {
		printf("\n[ť �׽�Ʈ �޴�]\n");
		printf("----------------------------\n");
		printf("1. ť�� �ֱ�\n");
		printf("2. ť���� ������\n");
		printf("3. ť ����\n");
		printf("4. ����\n");
		printf("----------------------------\n");
		printf("����: ");
		scanf_s("%i", &select);
	} while (select < 1 && select > 4);

	if (select == 4)
		exit(0);
	else
		return select;
}

/* ť ��� ���� */
int main(void)
{
	int i, n, m;

	while (1) {
		m = menu();
		if (m == 1) {
			do {
				printf("ť�� ���� ������ �Է��Ͻÿ�(0~100): ");
				scanf_s("%i", &n);
			} while (n < 0 && n > 100);
			system("cls");
			if (push(n) == -1)
				printf("ť�� �� á���ϴ�.\n");
			else
				printf("ť�� %i ���� �־����ϴ�.\n", n);
		}
		else if (m == 2) {
			n = pop();
			system("cls");
			if (n == -1)
				printf("�� ť�Դϴ�.\n");
			else
				printf("ť���� %i ���� ���½��ϴ�.\n", n);
		}
		else {
			system("cls");
			printf("[ť] ");
			if (queue_items <= 0)
				printf("�ƹ� ���� �����ϴ�.\n");
			else {
				/* ť�� ����� ��ġ�� ������ ��� */
				if (input_pos > output_pos) {   
					for (i = output_pos; i < input_pos; i++)
						printf("%i ", queue[i]);
				}
				else {  /* ť�� ����� ��ġ�� �������� ��쿡�� ������ ��� */
					for (i = output_pos; i < QUEUE_MAX; i++)
						printf("%i ", queue[i]);
					for (i = 0; i < input_pos; i++)
						printf("%i ", queue[i]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}