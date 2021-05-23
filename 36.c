/* 1:5000(5000분의 1) 축척 지도에서 135mm는 몇 미터인지 출력하시오. */

#include <stdio.h>

int main(void)
{
	int n = 135;

	n *= 5000;		/* 원래 길이로 변경 */
	n /= 1000;		/* mm를 m 단위로 변경 */
	printf("거리: %im\n", n);
	
	return 0;
}
