/* �� �׸��� ����� �̿��Ͽ� �� ����� �׸��ÿ�. */

#include <stdio.h>
#include <math.h>
#include <windows.h>

#define START_X 150
#define START_Y 150
#define COUNT 8

// �� ����� ��ǥ ������
int house[COUNT][2] = { {100, 100}, {150, 50}, {200, 100}, {100, 100}, 
						{120, 100}, {120, 150}, {180, 150}, {180, 100} };

int main(void)
{
	HWND hwnd;
	HDC hdc;
	int i;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, house[0][0], house[0][1], 0);
	
	for (i = 1; i < COUNT; i++)
		LineTo(hdc, house[i][0], house[i][1]);
	
	return 0;
}