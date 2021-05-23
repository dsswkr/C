/* A*A + B*B = C*C을 만족하는 A, B, C를 구하여 출력하시오. 
   단, A와 B의 범위는 정수 1~20으로 제한함.  */

#include <stdio.h>
#include <math.h>

#define MIN 1
#define MAX 20

int main(void) {
	int a, b, c, cc;

	for (a = MIN; a <= MAX; a++) {
		for (b = MIN; b <= MAX; b++) {
			c = (int)sqrt(a*a + b*b);
			cc = a*a + b*b;
			if (cc == c*c)		// a*a + b*b = c*c 만족 
				printf("a=%3i, b=%3i, c=%3i\n", a, b, c);
		}
	}
	return 0;
}