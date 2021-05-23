#include <stdio.h>

// a = 77, b = 200 ---> 4
// a = 72, b = 246 ---> 6

int gcd(int a, int b);

int main()
{
	int a = 77, b = 200;

	printf("%i와 %i의 최대공약수 = %i\n", a, b, gcd(a, b));

	return 0;
}

int __gcd(int p, int q) {
	return((q == 0) ? p : __gcd(q, p%q));
}

int gcd(int a, int b) {
	return((a > b) ? __gcd(a, b) : __gcd(b, a));
}