/* ��3...1...4���� ��1...9..2..2..1���� 
    ������ ������ ���� ���� ����Ͻÿ�. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) 
{
	int i, sum = 0;
	char * s1 = "3...1...4";
	char * s2 = "1...9..2..2..1";

	for (i = 0; i < (int)strlen(s1); i++) {
		if (isdigit((char)s1[i])) {
			sum += (int)s1[i] - 48;			
		}
	}
	for (i = 0; i < (int)strlen(s2); i++) {
		if (isdigit((char)s2[i])) {
			sum += (int)s2[i] - 48;
		}
	}

	printf("\n'%s' ����� '%s' ���忡 ������\n ������ ���� %i�Դϴ�.\n\n", s1, s2, sum);
	return 0;
}

