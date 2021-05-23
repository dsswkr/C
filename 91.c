/* 오늘 날짜와 요일을 [2016년 8월 29일, 수요일] 형식으로 나타내시오. */

#include <stdio.h>
#include <windows.h>	// sleep()
#include <time.h>		// time(), local_time()

int main(void)
{
	struct tm t;
	time_t now;
	char * wday[] = { "일", "월", "화", "수", "목", "금", "토" };

	now = time(0);
	localtime_s(&t, &now);	// localtime_s() 전달인수 위치 주의 
	printf("\n%i년 %i월 %i일, %s요일\n",
			t.tm_year+1900, t.tm_mon+1, t.tm_mday, wday[t.tm_wday]);
	
	return 0;
}
