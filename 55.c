/* 10에서 999까지 숫자에서 같은 단위 숫자로만 이루어진 수를 한줄에 9개씩 출력하시오.
   (출력 예; 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, ...)   */

#include <stdio.h>

#define MIN 10
#define MAX 100000

int digit_unit_count(int n)
{
	int count = 1;

	while (n > 9) {
		count++;
		n /= 10;
	}
	return count;
}

int main(void)
{
	int i, j, count, unit, num, print_cnt = 0;

	for (i = MIN; i <= MAX; i++) {
		num = i;
		unit = i % 10;  // 끝 자리
		count = digit_unit_count(i);   // 몇 자리 숫자인지 계산

		for (j = 1; j < count; j++) {
			num = num / 10;   // 다음 자리 (작은 자리에서 큰 자리로 이동) 
			if (unit != num % 10)
				break;
			else if (j == count - 1) { // 각 자리수 값이 모두 일치
				printf("%i", i);
				print_cnt++;
				if (i != MAX)
					printf("%s", (print_cnt % 9) ? ", " : "\n");
			}
		}
	}
	printf("\n\n");

	return 0;
}
