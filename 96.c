/* 3점의 좌표를 지나는 원의 중심을 구하시오. 
   3점에서 중심에 이르는 거리 같다는 성질을 이용함  */
#include <stdio.h>

#define MAX_X 500
#define MAX_Y 500
#define MIN_X -500
#define MIN_Y -500
#define POINTS p2

int p1[] = { -10, 0, 0, 10, 0, -10 };	// 예제 데이터 1; 중심점 (0, 0)
int p2[] = { 2, -1, 0, 1, 2, 3 };		// 예제 데이터 2; 중심점 (2,1)
int p3[] = { 0, -5, 5, -10, 10, -5 };	// 예제 데이터 3; 중심점 (5,-5)

// 원에 존재하는 세 점인지 확인 (반환값: 1=가능, 0=불가능) 
int check_points(int x1, int y1, int x2, int y2, int x3, int y3)
{
	// 세 점이 일직선상에 있거나, 두 점이 서로 같은 경우에는 원의 중심점을 구할 수 없음
	return ((x2 - x1)*(y3 - y2) - (y2 - y1)*(x3 - x2));
}

// 세 점의 중심점을 구하는 사용자 함수 
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

	// 세 점에서 중심에 이르는 거리가 같음을 이용하여 반복 탐색 (단, 정수 단위)
	for (x = MIN_X; x <= MAX_X; x++) {
		for (y = MIN_Y; y <= MAX_Y; y++) {
			d1 = (x - x1)*(x - x1) + (y - y1)*(y - y1);
			d2 = (x - x2)*(x - x2) + (y - y2)*(y - y2);
			if (d1 == d2) {
				d3 = (x - x3)*(x - x3) + (y - y3)*(y - y3);
				if (d2 == d3) {
					*xp = x;
					*yp = y;
					return 0;	// 찾았음
				}					
			}
		}
	}
	return 1;  // 찾을 수 없음
}

int main(void)
{
	double x, y;  // 중심 좌표
	
	if (get_center1(&x, &y))
		printf("3점의 중심점을 찾을 수 없습니다.\n");
	else
		printf("3점의 중심점은 (%f, %f)입니다.\n", x, y);
	
	return 0;
}