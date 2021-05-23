/* 10진수 2586을 16진수로 출력하시오. (16진수 표기는 0~9,A,B,C,D,E,F까지 사용하며, 
   문자열 %x 또는 %X 포맷을 사용하지 말고 직접 변환하여 출력하시오.)   */

#include <stdio.h>

#define NUMBER 12586

int main(void)
{
	unsigned int i, n, temp, num = NUMBER;
	char numx[5] = { 0, }, nx[5] = { 0, };

	char x[] = "0123456789ABCDEF";

	for (i = 0; num > 0; i++) {
		temp = num % 16;
		num /= 16;
		numx[i] = x[temp];
	}

	for (n = 0, temp = i - 1; n <= temp; n++, i--)
		nx[n] = numx[i-1];		  
	
	printf("10진수 %i ==> 16진수 %s\n", NUMBER, nx);
}