/* 어린이 교통사고 건수가 다음과 같을 때 꺽은선 그래프로 나타내시오.
봄: 220건, 여름: 190건, 가을: 150건, 겨울: 310건       */

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

	/* 기준선 그리기 */
	MoveToEx(hdc, 50, 50, 0);
	LineTo(hdc, 50, 250);
	LineTo(hdc, 450, 250);

	/* 꺽은선 그리기 */
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