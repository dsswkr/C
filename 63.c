/* 숫자를 입력받고 정수이면 "정수입니다.", 실수이면 "실수입니다."를 출력하시오. 
   단, -9999가 입력되면 종료하시오.  */

#include <stdio.h>

int main(void)
{
	float f;

	do {
		printf("정수 또는 실수를 입력하세요: ");
		scanf_s("%f", &f);

		if (f != -9999)
			if (f == (double)((int)f)) // (double)((int)f : 소수점 이하 버림
				printf("정수입니다.\n");
			else
				printf("실수입니다.\n");
	} while (f != -9999);

	return 0;
}