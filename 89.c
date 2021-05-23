/*  다음처럼 학생의 생월 데이터가 있을 때, 막대그래프로 출력하시오.
	1월: 2명, 2월: 4명, 3월 3명, 4월: 5명, 5월: 3명, 6월: 6명, 
	7월: 5명. 8월: 2명, 9월: 7명, 10월: 5명, 11월: 8명. 12월: 3명
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

	for (i = 0; i < 12; i++)  // 월별 막대그래프 x 위치 (시작)
		mon_x[i] = START_X + 20+ (20 * i);

	// X축, Y축 기준선 그리기
	MoveToEx(hdc, START_X, START_Y, 0);
	LineTo(hdc, START_X+270, START_Y);
	MoveToEx(hdc, START_X, START_Y, 0);
	LineTo(hdc, START_X, START_Y-130);

	// 막대그래프 그리기
	for (i = 0; i < 12; i++) 
		Rectangle(hdc, mon_x[i], START_Y, mon_x[i]+10, START_Y - birth_data[i]*UNIT_HIGHT);	

	return 0;
}





	