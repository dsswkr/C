/* '2016/10/05', '2016/07/05', '2016/10/13' �ڷḦ 
  'yyyy��m��m��' (��; 2016��7��5��) �������� ����Ͻÿ�. */

#include <stdio.h>
#include <string.h>

char * convert(char *str, const char *date)
{
	int i, j;
	char y[] = "��", m[] = "��", d[] = "��";

	for (i = 0, j = 0; i < 4; i++, j++)
		str[i] = date[j];
	str[i++] = y[0];	// ��
	str[i++] = y[1];
	j++; 
	if (date[j] != '0')	// �� ���ڸ��� 0�� �ƴ� ���
		str[i++] = date[j++];
	else 
		j++;
	str[i++] = date[j++];
	str[i++] = m[0];	// ��
	str[i++] = m[1];
	j++; 
	if (date[j] != '0')	// �� ���ڸ��� 0�� �ƴ� ���
		str[i++] = date[j++];
	else 
		j++;
	str[i++] = date[j++];
	str[i++] = d[0];	// ��
	str[i++] = d[1];
	str[i] = '\0';		// �� ���Ṯ��

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