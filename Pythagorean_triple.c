/* 피타고라수 수를 파일에 저장하고 출력하기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

int main()
{
	int a, b, c, aa, cc, n = 1;
	FILE * fp;

	if ((fp = fopen("피타고라스수.txt", "w")) == NULL)
		printf("File Open Error!\n");

	for (a = 3; a < MAX; a += 2) {			// a는 3보다 큰 홀수	
		aa = a*a;
		for (c = a+2; c <= MAX; c += 2) {	// c는 a보다 큰 홀수
			cc = c*c;
			for (b = 2; b < c; b += 2) {	// b는 c보다 작은 짝수
				if (cc == aa + b*b) { // 피타고라스 수 
					printf("a = %3i, b = %3i, c = %3i\n", a, b, c);	// 화면 출력
					if (fp != NULL)
						fprintf(fp, "[%4i] a = %3i, b = %3i, c = %3i\n", n++, a, b, c);	// 파일 저장 
				}
			}
		}
	}

	if (fp != NULL)
		fclose(fp);

	return 0;
}