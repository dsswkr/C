/* ���� ��¥�� ������ [2016�� 8�� 29��, ������] �������� ��Ÿ���ÿ�. */

#include <stdio.h>
#include <windows.h>	// sleep()
#include <time.h>		// time(), local_time()

int main(void)
{
	struct tm t;
	time_t now;
	char * wday[] = { "��", "��", "ȭ", "��", "��", "��", "��" };

	now = time(0);
	localtime_s(&t, &now);	// localtime_s() �����μ� ��ġ ���� 
	printf("\n%i�� %i�� %i��, %s����\n",
			t.tm_year+1900, t.tm_mon+1, t.tm_mday, wday[t.tm_wday]);
	
	return 0;
}
