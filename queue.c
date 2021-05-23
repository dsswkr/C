/* 정수 데이터를 다루는 큐(원형 큐) 예제
visual studio 2015, C 소스
리눅스 사용자는 #include <windows.h>와 system("cls") 부분을 삭제 */

#include <stdio.h>
#include <stdlib.h>		/* exit() */
#include <windows.h>	/* system() */

#define QUEUE_MAX 5

int queue[QUEUE_MAX];	/* 큐 버퍼 */
int input_pos = 0;		/* 큐 저장 위치 (0,1,2,..,(Queue_MAX-1)) */
int output_pos = 0;		/* 큐 읽는 위치 (0,1,2,..,(Queue_MAX-1)) */
int queue_items = 0;    /* 큐에 저장된 항목 수 */

/* 자료를 큐에 넣음 */
int push(int item)
{
	/* 큐 항목 최대 값보다 적으면 추가 가능 */
	if (queue_items < QUEUE_MAX) {  
		queue[input_pos] = item;
		// 큐에서 다음 저장 위치 이동
		input_pos = (input_pos + 1) % QUEUE_MAX;		
		queue_items++;

		return item;
	}
	else  /* 큐에 저장할 공간 없음 */							
		return -1;
}

// 큐에서 꺼냄
int pop()
{
	int item;
	if (queue_items > 0) {
		item = queue[output_pos];
		// 큐 출구 위치 순환...	
		output_pos = (output_pos + 1) % QUEUE_MAX;		
		queue_items--;
		return item;
	}
	else
		return -1;
}

/* 큐 메뉴 */
int menu()
{
	int select;

	/* 큐 메뉴 출력 */
	do {
		printf("\n[큐 테스트 메뉴]\n");
		printf("----------------------------\n");
		printf("1. 큐에 넣기\n");
		printf("2. 큐에서 꺼내기\n");
		printf("3. 큐 보기\n");
		printf("4. 종료\n");
		printf("----------------------------\n");
		printf("선택: ");
		scanf_s("%i", &select);
	} while (select < 1 && select > 4);

	if (select == 4)
		exit(0);
	else
		return select;
}

/* 큐 사용 예제 */
int main(void)
{
	int i, n, m;

	while (1) {
		m = menu();
		if (m == 1) {
			do {
				printf("큐에 넣을 정수를 입력하시오(0~100): ");
				scanf_s("%i", &n);
			} while (n < 0 && n > 100);
			system("cls");
			if (push(n) == -1)
				printf("큐가 꽉 찼습니다.\n");
			else
				printf("큐에 %i 값을 넣었습니다.\n", n);
		}
		else if (m == 2) {
			n = pop();
			system("cls");
			if (n == -1)
				printf("빈 큐입니다.\n");
			else
				printf("큐에서 %i 값을 꺼냈습니다.\n", n);
		}
		else {
			system("cls");
			printf("[큐] ");
			if (queue_items <= 0)
				printf("아무 값도 없습니다.\n");
			else {
				/* 큐의 입출력 위치가 정상인 경우 */
				if (input_pos > output_pos) {   
					for (i = output_pos; i < input_pos; i++)
						printf("%i ", queue[i]);
				}
				else {  /* 큐의 입출력 위치가 뒤집어진 경우에는 나눠서 출력 */
					for (i = output_pos; i < QUEUE_MAX; i++)
						printf("%i ", queue[i]);
					for (i = 0; i < input_pos; i++)
						printf("%i ", queue[i]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}