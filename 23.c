/* 도서관에 책을 빌린 후 3일 안에 반납하지 않으면 1일당 150원씩 과태료가 부과된다. 
   단, 30일 후에 반납될 때는 하루에 100원씩 추가 과태료를 내야한다. 
   책 3권을 빌리고 45일 후에 반납했다면, 과태료는 얼마인지 출력하시오. */

#include <stdio.h>

int main(void)
{
	int books = 3;
	int penalty = 150;
	int extra_penalty = 100;
	int sum = books * ((45 - 3) * penalty + (45 - 30) * extra_penalty);

	printf("책 3권을 45일 후에 반납할 때 내야할 총 과태료는 %i원입니다.\n", sum);

	return 0;
}