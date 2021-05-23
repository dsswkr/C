/* SIN(X) 곡선을 출력하되, 화면 크기를 고려하여 곡선이 출력되도록 하시오. */

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define R 100.0
#define START_X 50
#define START_Y 150

int main(void)
{
	HWND hwnd;
	HDC hdc;
	int i;
	double x, y, radian;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	// X축, Y축 기준선 그리기
	MoveToEx(hdc, 20, START_Y, 0);
	LineTo(hdc, 420, START_Y);
	MoveToEx(hdc, START_X, START_X, 0);
	LineTo(hdc, START_X, 250);

	// sine 곡선 그리기
	for (i = 0; i < 360; i++) {
		radian = (i*3.14159) / 180;
		x = i + START_X;
		y = sin(radian) * R + START_Y;
		SetPixel(hdc, (int)x, (int)y, RGB(0, 0, 0));
	}

	return 0;
}
