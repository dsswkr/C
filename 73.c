/* 반지름이 100인 원을 그리시오. */

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define R 100.0
#define START_X 150
#define START_Y 150

int main(void)
{
	HWND hwnd;
	HDC hdc;
	int i;
	double x, y, radian;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	// 원 그리기
	for (i = 0; i < 360; i++) {
		radian = (i*3.14159) / 180;
		x = cos(radian) * R + START_X;
		y = sin(radian) * R + START_Y;
		SetPixel(hdc, (int)x, (int)y, RGB(0, 0, 0));
	}

	return 0;
}

