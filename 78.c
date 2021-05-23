/* '2016/10/05', '2016/07/05', '2016/10/13' 자료를 
  'yyyy년m월m일' (예; 2016년7월5일) 형식으로 출력하시오. */

#include <stdio.h>
#include <string.h>

char * convert(char *str, const char *date)
{
	int i, j;
	char y[] = "년", m[] = "월", d[] = "일";

	for (i = 0, j = 0; i < 4; i++, j++)
		str[i] = date[j];
	str[i++] = y[0];	// 년
	str[i++] = y[1];
	j++; 
	if (date[j] != '0')	// 월 앞자리가 0이 아닌 경우
		str[i++] = date[j++];
	else 
		j++;
	str[i++] = date[j++];
	str[i++] = m[0];	// 월
	str[i++] = m[1];
	j++; 
	if (date[j] != '0')	// 일 앞자리가 0이 아닌 경우
		str[i++] = date[j++];
	else 
		j++;
	str[i++] = date[j++];
	str[i++] = d[0];	// 일
	str[i++] = d[1];
	str[i] = '\0';		// 널 종료문자

	return str;
}

int main(void)
{
	char str[15];

	printf("\n%s --> %s\n", "2016/10/05", convert(str, "2016/10/05"));
	printf("\n%s --> %s\n", "2016/07/05", convert(str, "2016/07/05"));
	printf("\n%s --> %s\n\n", "2016/12/15", convert(str, "2016/12/15"));

	return 0;
}