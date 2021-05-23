#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
	char name[20];
	char tel[16];
	int age;
	struct person *next;
} ps;

ps *head = NULL, *tail;

void input_info(ps *bmp);
void add_item(ps *bmp);
ps * find_item();
int del_item();
void del_list();
void print_list();

int main()
{
	int i = 1, x;
	ps *bmp, *cur;
	printf("======= ���� ���� ���α׷� =========\n");

	while (i) {
		printf("\n1.�߰�  2.����  3.�˻�  4.���  5.����  6.���� : ");
		scanf("%d", &x);
		switch (x) {
		case 1:
			bmp = (ps*)malloc(sizeof(ps));
			input_info(bmp);
			add_item(bmp);
			break;
		case 2:
			cur = find_item();
			if (cur != NULL)
				input_info(cur);
			else
				puts("ã�� �� �����ϴ�.");
			break;
		case 3:
			cur = find_item();
			if (cur != NULL)
				printf("%-10s%-16s%-3d\n", cur->name, cur->tel,	cur->age);
			else
				puts("ã�� �� �����ϴ�.");
			break;
		case 4:
			print_list();
			break;
		case 5:			
			if (del_item())
				puts("ã�� �� �����ϴ�.");
			else
				puts("�����߽��ϴ�.");
			break;
		case 6:
			i = 0;
			del_list();
			break;
		}
	}
	return 0;
}

void input_info(ps *bmp)
{
	printf("\n�̸�: ");
	scanf("%s", bmp->name);
	printf("��ȭ��ȣ: ");
	scanf("%s", bmp->tel);
	printf("����: ");
	scanf("%i", &bmp->age);
}

void add_item(ps *bmp)
{
	if (head == NULL)
		head = bmp;
	else
		tail->next = bmp;

	tail = bmp;
	tail->next = NULL;
}

int del_item()
{
	char name[20];
	ps *cur, *pre_cur = NULL;

	printf("������ �̸�: ");
	scanf("%s", name);
	cur = head;

	while (cur != NULL) {
		if (!strcmp(name, cur->name)) {
			if (pre_cur == NULL)
				head = cur->next;
			else
				pre_cur->next = cur->next;
			if (cur->next == NULL)
				tail = pre_cur;
			free(cur);
			break;
		}
		pre_cur = cur;
		cur = cur->next;
	}

	if (cur == NULL)
		return 1;
	else
		return 0;
}

void del_list()
{
	ps *cur = head;

	while (head != NULL) {
		head = head->next;
		free(cur);
		cur = head;
	}
}

ps * find_item()
{
	char name[20];
	ps *cur;

	printf("\n�̸�: ");
	scanf("%s", name);
	cur = head;

	while (cur != NULL) {
		if (!strcmp(name, cur->name))
			return cur;
		cur = cur->next;
	}
	return NULL;
}

void print_list()
{
	ps *cur = head;

	puts("\n�̸�      ��ȭ           ����");
	puts("-----------------------------------------------");
	while (cur != NULL) {
		printf("%-10s%-15s%-4d\n", cur->name, cur->tel,	cur->age);
		cur = cur->next;
	}
}