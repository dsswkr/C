/* ��� ������ �Ǽ��� ������ ���� �� ������ �׷����� ��Ÿ���ÿ�.
��: 220��, ����: 190��, ����: 150��, �ܿ�: 310��       */

#include <stdio.h>
#include <Windows.h>

#define P_SIZE 3

int main(void)
{
	int ta[4] = { 220, 190, 150, 310 };
	int i, x, y;
	HWND hwnd;
	HDC hdc;
	
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	/* ���ؼ� �׸��� */
	MoveToEx(hdc, 50, 50, 0);
	LineTo(hdc, 50, 250);
	LineTo(hdc, 450, 250);

	/* ������ �׸��� */
	for (i = 1; i < 5; i++) {
		x = i*100;
		y = 250 - (int)(ta[i-1] / 2);
		if(i==1) 
			MoveToEx(hdc, x, y, 0);
		else 
			LineTo(hdc, x, y);
		Rectangle(hdc, x - P_SIZE, y - P_SIZE, x + P_SIZE, y + P_SIZE);
	}

	return 0;
}