/* 이진검색 구현 및 예제 코드 */
#include <stdio.h>

/* a = 정수형 자료 배열           */
/* what = 찾으려는 정수 값        */
/* left = 왼쪽 검색 범위          */
/* right = 오른쪽 검색 범위       */
int b_search(int *a, int what, int left, int right)
{
	int mid;

	if ((right - left) < 2)
		if (a[left] == what)
			return left;
		else if (a[right] == what)
			return right;
		else
			return -1;	/* 찾지 못함*/

	mid = left + (right - left) / 2;

	if (a[mid] == what)
		return mid;

	if (a[mid] > what)
		return b_search(a, what, left, mid - 1);
	else
		return b_search(a, what, mid + 1, right);
}

/* 정수형 배열에서 정수를 검색하는 함수          */
/* 전달인수                                      */
/*   array = 정수형 자료 배열 이름               */
/*   size = 배열의 자료 수                       */
/*   what = 찾으려는 정수 값                     */
/* 반환 값                                       */
/*   -1 = 찾지 못함                              */
/*   0 이상 = 검색 자료의 위치 (배열 인덱스 값)  */
int search(int *array, int size, int what)
{
	return b_search(array, what, 0, size - 1);
}

/* 실행 예제 */
int main()
{
	int i;
	int a[100];

	/* 정수 배열 초기화 (0~99) */
	for (i = 0; i < 100; i++)
		a[i] = i;

	i = search(a, 100, 99);
	printf("%s, 위치는 a[%i]\n", i > -1 ? "찾음" : "실패", i); /* 찾음! */

	i = search(a, 100, -1);
	printf("%s, 위치는 a[%i]\n", i > -1 ? "찾음" : "실패", i); /* 실패! */

	i = search(a, 100, 0);
	printf("%s, 위치는 a[%i]\n", i > -1 ? "찾음" : "실패", i);  /* 찾음! */

	return 0;
}
