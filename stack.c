#include <stdio.h>

/* 스택 구조 (5개 정수 자료를 처리하는 Stack) */
#define MAX 5
int a[MAX];

/* 스택 작업 위치 */
int top = -1;

/* 스택 작업 결과: 0 = 정상, 1 = 오류 */
int stack_err = 0;  

/* 스택에 자료를 넣는 함수  */
/* 입력값 : 정수              */
/* 반환값: 0 = 정상, 1 = 오류 */
int push(int x)
{
	if (top >= MAX - 1)
		return (stack_err = 1);  /* 스택에 더 넣을 수 없음 */

	stack_err = 0;
	a[++top] = x;
	return 0;
}

/* 스택에서 자료를 빼는 함수 */
/* 반환값: check_stack_error() 호출 결과가 0일 때, 스택에서 꺼낸 자료 */
int pop()
{
	if (top < 0)
		return (stack_err = 1);  /* 스택에 자료가 없음 */

	stack_err = 0;
	return a[top--];
}

/* 스택 입출력 작업에서 오류가 발생했는지 검사 */
/* 반환값: 0 = 정상, 1 = 오류                */
int check_stack_error()
{
	int err = stack_err;
	stack_err = 0;
	return err;
}

/* 스택 자료 구조 예제 */
int main()
{
	int i, data;

	/* 7개 데이터 PUSH 처리 (스택에 자료 넣기) */
	for (i = 1; i <= MAX + 2; i++) {  
		if (push(i * 100))
			printf("스택 PUSH 오류!\n");
		else
			printf("PUSH: %i\n", i * 100);
	}

	/* 7개 데이터 POP 처리 (스택에서 자료 꺼내기) */
	for (i = 1; i <= MAX + 2; i++) {  
		data = pop();
		if (check_stack_error())
			printf("스택 POP 오류!\n");
		else
			printf("POP: %i\n", data);
	}

	return 0;
}
