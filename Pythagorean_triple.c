/* ��Ÿ���� ���� ���Ͽ� �����ϰ� ����ϱ� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

int main()
{
	int a, b, c, aa, cc, n = 1;
	FILE * fp;

	if ((fp = fopen("��Ÿ��󽺼�.txt", "w")) == NULL)
		printf("File Open Error!\n");

	for (a = 3; a < MAX; a += 2) {			// a�� 3���� ū Ȧ��	
		aa = a*a;
		for (c = a+2; c <= MAX; c += 2) {	// c�� a���� ū Ȧ��
			cc = c*c;
			for (b = 2; b < c; b += 2) {	// b�� c���� ���� ¦��
				if (cc == aa + b*b) { // ��Ÿ��� �� 
					printf("a = %3i, b = %3i, c = %3i\n", a, b, c);	// ȭ�� ���
					if (fp != NULL)
						fprintf(fp, "[%4i] a = %3i, b = %3i, c = %3i\n", n++, a, b, c);	// ���� ���� 
				}
			}
		}
	}

	if (fp != NULL)
		fclose(fp);

	return 0;
}