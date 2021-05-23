/* 정수 숫자 두 개와 사칙 연산을 선택 받아서 계산한 결과를 출력하시오. 
  (단, 나눗셈에서 0으로 나눌 때, "0으로 나눌 수 없습니다." 오류 메시지를 출력하시오.) */

#include <stdio.h>

int main(void) 
{
	int num1, num2, op;
	
	printf("사칙연산에 사용할 처음 정수를 입력하세요: ");
	scanf_s("%i", &num1);

	// fflush(stdin);
	printf("사칙연산 번호 1~4를 입력하세요(1:'+', 2:'-', 3:'/', 4:'*'): ");
	scanf_s("%i", &op);

	// fflush(stdin);
	printf("사칙연산에 사용할 다음 정수를 입력하세요: ");
	scanf_s("%i", &num2);

	switch (op) {
	case 1: 
		printf("\n%i + %i = %i \n\n", num1, num2, num1 + num2);
		break;
	case 2:
		printf("\n%i - %i = %i \n\n", num1, num2, num1 - num2);
		break;
	case 3:
		if(num2)
			printf("\n%i / %i = %i \n\n", num1, num2, num1 / num2);
		else {
			printf("\n[에러!] 0으로 나눌 수 없습니다.\n\n");
			return -1;
		}
		break;
	case 4:
		printf("\n%i x %i = %i\n\n", num1, num2, num1 * num2);
		break;
	default:
		printf("\n[에러!] 사용 가능한 사칙 연산자는 1~4 번호로 입력하세요.\n\n");
		return -1;
	}
	return 0;
}

