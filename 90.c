/* 현재 시간을 시:분:초 형식(예; 10:09:05)으로 나타내시오. */

#include <stdio.h>
#include <windows.h>	// sleep()
#include <time.h>		// time(), local_time()

int main(void)
{
	struct tm t;
	time_t now;

	while (1) {		
		system("cls");			// 윈도우즈 콘솔창에서 화면 지우기
		now = time(0);
		localtime_s(&t, &now);	// localtime_s() 전달인수 위치 주의 
		printf("\n현재 시간 [%02i:%02i:%02i]", 
				t.tm_hour, t.tm_min, t.tm_sec);
		Sleep(1000);			// 1초 기다림, S 대문자 주의!
	}
}
