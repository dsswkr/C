/* �����˻� ���� �� ���� �ڵ� */
#include <stdio.h>

/* a = ������ �ڷ� �迭           */
/* what = ã������ ���� ��        */
/* left = ���� �˻� ����          */
/* right = ������ �˻� ����       */
int b_search(int *a, int what, int left, int right)
{
	int mid;

	if ((right - left) < 2)
		if (a[left] == what)
			return left;
		else if (a[right] == what)
			return right;
		else
			return -1;	/* ã�� ����*/

	mid = left + (right - left) / 2;

	if (a[mid] == what)
		return mid;

	if (a[mid] > what)
		return b_search(a, what, left, mid - 1);
	else
		return b_search(a, what, mid + 1, right);
}

/* ������ �迭���� ������ �˻��ϴ� �Լ�          */
/* �����μ�                                      */
/*   array = ������ �ڷ� �迭 �̸�               */
/*   size = �迭�� �ڷ� ��                       */
/*   what = ã������ ���� ��                     */
/* ��ȯ ��                                       */
/*   -1 = ã�� ����                              */
/*   0 �̻� = �˻� �ڷ��� ��ġ (�迭 �ε��� ��)  */
int search(int *array, int size, int what)
{
	return b_search(array, what, 0, size - 1);
}

/* ���� ���� */
int main()
{
	int i;
	int a[100];

	/* ���� �迭 �ʱ�ȭ (0~99) */
	for (i = 0; i < 100; i++)
		a[i] = i;

	i = search(a, 100, 99);
	printf("%s, ��ġ�� a[%i]\n", i > -1 ? "ã��" : "����", i); /* ã��! */

	i = search(a, 100, -1);
	printf("%s, ��ġ�� a[%i]\n", i > -1 ? "ã��" : "����", i); /* ����! */

	i = search(a, 100, 0);
	printf("%s, ��ġ�� a[%i]\n", i > -1 ? "ã��" : "����", i);  /* ã��! */

	return 0;
}
