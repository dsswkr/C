/* 3점의 좌표를 지나는 원의 중심을 구하시오. */
#include <stdio.h>
#define POINTS p3

int p1[] = { -10, 0, 0, 10, 0, -10 };	// 예제 데이터 1; 중심점 (0, 0)
int p2[] = { 2, -1, 0, 1, 2, 3 };		// 예제 데이터 2; 중심점 (2,1)
int p3[] = { 0, -5, 5, -10, 10, -5 };	// 예제 데이터 3; 중심점 (5,-5)

// 원에 존재하는 세 점인지 확인 (반환값: 1=가능, 0=불가능) 
int check_points(int x1, int y1, int x2, int y2, int x3, int y3)
{
	// 세 점이 일직선상에 있거나, 두 점이 서로 같은 경우에는 원의 중심점을 구할 수 없음
	return ((x2 - x1)*(y3 - y2) - (y2 - y1)*(x3 - x2));
}

// 세 점의 중심점을 구하는 사용자 함수 2
int get_center(double * xp, double * yp) {
	int x1, y1, x2, y2, x3, y3;
	double dx1, dy1, dx2, dy2, a, b, k;

	x1 = POINTS[0];	y1 = POINTS[1];
	x2 = POINTS[2];	y2 = POINTS[3];
	x3 = POINTS[4];	y3 = POINTS[5];

	// 원에 존재할 수 있는 세 점인지 검사한다.
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
	double x, y;  // 중심 좌표

	if (get_center(&x, &y))
		printf("3점의 중심점을 찾을 수 없습니다.\n");
	else
		printf("3점의 중심점은 (%f, %f)입니다.\n", x, y);

	return 0;
}

// 중심점을 알면 다음처럼 반지름을 구할 수도 있다.
// 반지름 = sqrt((x1 - *xp) * (x1 - *xp) + (y1 - *yp) * (y1 - *yp));