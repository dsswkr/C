/* �� �� ���̰� 100�� ���簢���� �׸��ÿ�. */

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define SIZE 100.0
#define START_X 50
#define START_Y 100

int main(void)
{
	HWND hwnd;
	HDC hdc;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, START_X, START_Y, 0);
	LineTo(hdc, (int)(START_X + SIZE), (int)START_Y);
	LineTo(hdc, (int)(START_X + SIZE), (int)(START_Y + SIZE));
	LineTo(hdc, (int)START_X, (int)(START_Y + SIZE));
	LineTo(hdc, (int)START_X, (int)START_Y);

	return 0;
}
