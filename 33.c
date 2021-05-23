/* 5자리 숫자를 입력받아서 위 2자리와 아래 3자리를 출력하시오. 
(예: 12345 입력 시, 12, 345를 출력함) */

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 5

int main(void)
{
	unsigned int ret;
	char str_num[MAX_NUM+1] = "";

	while (1) {
		printf("%i자리 숫자를 입력하시오(예 12345): ", MAX_NUM);
		scanf_s("%s", str_num, MAX_NUM+1);

		ret = atoi(str_num);
		if (ret >= 10000)
			break;
	}

	printf("앞 두 자리: %i\n", ret/1000);
	printf("뒤 세 자리: %i\n", ret%1000);
	return 0;
}