/* 10���� 2586�� 16������ ����Ͻÿ�. (16���� ǥ��� 0~9,A,B,C,D,E,F���� ����ϸ�, 
   ���ڿ� %x �Ǵ� %X ������ ������� ���� ���� ��ȯ�Ͽ� ����Ͻÿ�.)   */

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
	
	printf("10���� %i ==> 16���� %s\n", NUMBER, nx);
}