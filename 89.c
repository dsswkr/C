/*  ����ó�� �л��� ���� �����Ͱ� ���� ��, ����׷����� ����Ͻÿ�.
	1��: 2��, 2��: 4��, 3�� 3��, 4��: 5��, 5��: 3��, 6��: 6��, 
	7��: 5��. 8��: 2��, 9��: 7��, 10��: 5��, 11��: 8��. 12��: 3��
*/

#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define START_X 100
#define START_Y 200
#define UNIT_HIGHT 15

int main(void)
{
	int i;
	int birth_data[] = { 2, 4, 3, 5, 3, 6, 5, 2, 7, 5, 8, 3 };
	int mon_x[12];
	HWND hwnd;
	HDC hdc;
	
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	for (i = 0; i < 12; i++)  // ���� ����׷��� x ��ġ (����)
		mon_x[i] = START_X + 20+ (20 * i);

	// X��, Y�� ���ؼ� �׸���
	MoveToEx(hdc, START_X, START_Y, 0);
	LineTo(hdc, START_X+270, START_Y);
	MoveToEx(hdc, START_X, START_Y, 0);
	LineTo(hdc, START_X, START_Y-130);

	// ����׷��� �׸���
	for (i = 0; i < 12; i++) 
		Rectangle(hdc, mon_x[i], START_Y, mon_x[i]+10, START_Y - birth_data[i]*UNIT_HIGHT);	

	return 0;
}





	