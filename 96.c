/* 3���� ��ǥ�� ������ ���� �߽��� ���Ͻÿ�. 
   3������ �߽ɿ� �̸��� �Ÿ� ���ٴ� ������ �̿���  */
#include <stdio.h>

#define MAX_X 500
#define MAX_Y 500
#define MIN_X -500
#define MIN_Y -500
#define POINTS p2

int p1[] = { -10, 0, 0, 10, 0, -10 };	// ���� ������ 1; �߽��� (0, 0)
int p2[] = { 2, -1, 0, 1, 2, 3 };		// ���� ������ 2; �߽��� (2,1)
int p3[] = { 0, -5, 5, -10, 10, -5 };	// ���� ������ 3; �߽��� (5,-5)

// ���� �����ϴ� �� ������ Ȯ�� (��ȯ��: 1=����, 0=�Ұ���) 
int check_points(int x1, int y1, int x2, int y2, int x3, int y3)
{
	// �� ���� �������� �ְų�, �� ���� ���� ���� ��쿡�� ���� �߽����� ���� �� ����
	return ((x2 - x1)*(y3 - y2) - (y2 - y1)*(x3 - x2));
}

// �� ���� �߽����� ���ϴ� ����� �Լ� 
int get_center1(double *xp, double *yp) 
{
	int x1, x2, x3, y1, y2, y3;
	double d1, d2, d3;
	double x = *xp;
	double y = *yp;

	x1 = POINTS[0]; y1 = POINTS[1];
	x2 = POINTS[2];	y2 = POINTS[3];
	x3 = POINTS[4];	y3 = POINTS[5];

	if (check_points(x1, y1, x2, y2, x3, y3) == 0)
		return 1;

	// �� ������ �߽ɿ� �̸��� �Ÿ��� ������ �̿��Ͽ� �ݺ� Ž�� (��, ���� ����)
	for (x = MIN_X; x <= MAX_X; x++) {
		for (y = MIN_Y; y <= MAX_Y; y++) {
			d1 = (x - x1)*(x - x1) + (y - y1)*(y - y1);
			d2 = (x - x2)*(x - x2) + (y - y2)*(y - y2);
			if (d1 == d2) {
				d3 = (x - x3)*(x - x3) + (y - y3)*(y - y3);
				if (d2 == d3) {
					*xp = x;
					*yp = y;
					return 0;	// ã����
				}					
			}
		}
	}
	return 1;  // ã�� �� ����
}

int main(void)
{
	double x, y;  // �߽� ��ǥ
	
	if (get_center1(&x, &y))
		printf("3���� �߽����� ã�� �� �����ϴ�.\n");
	else
		printf("3���� �߽����� (%f, %f)�Դϴ�.\n", x, y);
	
	return 0;
}