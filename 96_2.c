/* 3���� ��ǥ�� ������ ���� �߽��� ���Ͻÿ�. */
#include <stdio.h>
#define POINTS p3

int p1[] = { -10, 0, 0, 10, 0, -10 };	// ���� ������ 1; �߽��� (0, 0)
int p2[] = { 2, -1, 0, 1, 2, 3 };		// ���� ������ 2; �߽��� (2,1)
int p3[] = { 0, -5, 5, -10, 10, -5 };	// ���� ������ 3; �߽��� (5,-5)

// ���� �����ϴ� �� ������ Ȯ�� (��ȯ��: 1=����, 0=�Ұ���) 
int check_points(int x1, int y1, int x2, int y2, int x3, int y3)
{
	// �� ���� �������� �ְų�, �� ���� ���� ���� ��쿡�� ���� �߽����� ���� �� ����
	return ((x2 - x1)*(y3 - y2) - (y2 - y1)*(x3 - x2));
}

// �� ���� �߽����� ���ϴ� ����� �Լ� 2
int get_center(double * xp, double * yp) {
	int x1, y1, x2, y2, x3, y3;
	double dx1, dy1, dx2, dy2, a, b, k;

	x1 = POINTS[0];	y1 = POINTS[1];
	x2 = POINTS[2];	y2 = POINTS[3];
	x3 = POINTS[4];	y3 = POINTS[5];

	// ���� ������ �� �ִ� �� ������ �˻��Ѵ�.
	if (check_points(x1, y1, x2, y2, x3, y3) == 0)
		return 1;

	dx1 = x2 - x1;
	dy1 = y2 - y1;
	dx2 = x3 - x1;
	dy2 = y3 - y1;

	a = dx1 * (x1 + x2) + dy1 * (y1 + y2);
	b = dx2 * (x1 + x3) + dy2 * (y1 + y3);
	k = 2.0 * (dx1 * (y3 - y2) - dy1 * (x3 - x2));

	*xp = (dy2 * a - dy1 * b) / k;
	*yp = (dx1 * b - dx2 * a) / k;

	return 0;
}

int main(void)
{
	double x, y;  // �߽� ��ǥ

	if (get_center(&x, &y))
		printf("3���� �߽����� ã�� �� �����ϴ�.\n");
	else
		printf("3���� �߽����� (%f, %f)�Դϴ�.\n", x, y);

	return 0;
}

// �߽����� �˸� ����ó�� �������� ���� ���� �ִ�.
// ������ = sqrt((x1 - *xp) * (x1 - *xp) + (y1 - *yp) * (y1 - *yp));