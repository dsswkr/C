/* 한 변 길이가 100인 정삼각형을 그리시오. */

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define SIZE 100.0
#define START_X 50
#define START_Y 200

int main(void)
{
	int high;
	HWND hwnd;
	HDC hdc;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	high = (int)sqrt(SIZE*SIZE - (SIZE / 2)*(SIZE / 2));
	
	MoveToEx(hdc, START_X, START_Y, 0);
	LineTo(hdc, (int)(START_X + SIZE), (int)START_Y);
	LineTo(hdc, (int)(START_X + SIZE/2), (int)(START_Y-high));
	LineTo(hdc, (int)START_X, (int)START_Y);
	getchar();
	return 0;
}
