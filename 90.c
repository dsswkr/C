/* ���� �ð��� ��:��:�� ����(��; 10:09:05)���� ��Ÿ���ÿ�. */

#include <stdio.h>
#include <windows.h>	// sleep()
#include <time.h>		// time(), local_time()

int main(void)
{
	struct tm t;
	time_t now;

	while (1) {		
		system("cls");			// �������� �ܼ�â���� ȭ�� �����
		now = time(0);
		localtime_s(&t, &now);	// localtime_s() �����μ� ��ġ ���� 
		printf("\n���� �ð� [%02i:%02i:%02i]", 
				t.tm_hour, t.tm_min, t.tm_sec);
		Sleep(1000);			// 1�� ��ٸ�, S �빮�� ����!
	}
}
