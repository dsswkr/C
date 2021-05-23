/* ���������� �׸��ÿ�. */

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
	double degree = (double)(360 / 6); // 60��

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	// ������ ������ ��ǥ ���ϱ�    (ó��(0��)�� ��(6��) ��ǥ�� ����)
	for (i = 0; i < 7; i++) {
		radian = (degree * i)*(3.14159 / 180);
		x = cos(radian) * SIZE; // ������ == SIZE
		y = sin(radian) * SIZE; // ������ == SIZE
		// ������ ������ ��ǥ ���� 							
		vertices[i].x = (int)x + START_X;  // START_X: ���� ��ǥ�� �����Ƿ� ȭ�� ��ǥ�� ����
		vertices[i].y = (int)y + START_Y;  // START_Y: ���� ��ǥ�� �����Ƿ� ȭ�� ��ǥ�� ����
	}

	MoveToEx(hdc, vertices[0].x, vertices[0].y, 0);
	for (i = 1; i < 7; i++)
		LineTo(hdc, vertices[i].x, vertices[i].y);

	return 0;
}

