/* A*A + B*B = C*C�� �����ϴ� A, B, C�� ���Ͽ� ����Ͻÿ�. 
   ��, A�� B�� ������ ���� 1~20���� ������.  */

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
			if (cc == c*c)		// a*a + b*b = c*c ���� 
				printf("a=%3i, b=%3i, c=%3i\n", a, b, c);
		}
	}
	return 0;
}