/* 정육각형을 그리시오. */

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define SIZE 100.0
#define START_X 150
#define START_Y 150

struct point {
	int x;
	int y;
};
struct point vertices[7];

int main(void)
{
	HWND hwnd;
	HDC hdc;
	int i;
	double x, y, radian;
	double degree = (double)(360 / 6); // 60도

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	// 육각형 꼭짓점 좌표 구하기    (처음(0번)과 끝(6번) 좌표는 같음)
	for (i = 0; i < 7; i++) {
		radian = (degree * i)*(3.14159 / 180);
		x = cos(radian) * SIZE; // 반지름 == SIZE
		y = sin(radian) * SIZE; // 반지름 == SIZE
		// 육각형 꼭짓점 좌표 저장 							
		vertices[i].x = (int)x + START_X;  // START_X: 음수 좌표가 있으므로 화면 좌표로 변경
		vertices[i].y = (int)y + START_Y;  // START_Y: 음수 좌표가 있으므로 화면 좌표로 변경
	}

	MoveToEx(hdc, vertices[0].x, vertices[0].y, 0);
	for (i = 1; i < 7; i++)
		LineTo(hdc, vertices[i].x, vertices[i].y);

	return 0;
}

