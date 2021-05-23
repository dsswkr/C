/* 미로 찾기 C 콘솔 프로그램 v1.0   (Using Right Hand On Wall)
Date: 2016.10.2
Name: Oh, Sangmun   (E-mail: sualchi@daum.net)
Tool: Visual Studio 2015
*/
#include <stdio.h>
#include <Windows.h>

int  go(void);							/* 현재 방향으로 마우스 이동 */
char get_mazexy(int x, int y);			/* 미로의 해당 좌표의 데이터 읽기 */
void set_mazexy(int x, int y, char c);	/* 미로의 해당 좌표에 데이터 쓰기 */
void draw(int x, int y);				/* 화면 갱신하기 */
void turn_right(void);					/* 방향을 오른쪽으로 바꾸기 */
void turn_left(void);					/* 방향을 왼쪽으로 바꾸기 */
int  wall_ahead(void);					/* 방향 앞쪽에 벽이 있는지 검사 */

#define MAZE_SIZE 12
#define WALL  '#'
#define EXIT  '$'
#define MOUSE 'Q'

enum DIRECTION { UP, RIGHT, DOWN, LEFT };

char maze[MAZE_SIZE][MAZE_SIZE + 1] = {  /* 미로 정의 데이터 */
	"############",
	"#    ##    #",
	"# ## ## ## #",
	"# ## ##  # #",
	"# ## ### # #",
	"# ##  ## # #",
	"# ### ## # #",
	"# #   ## # #",
	"# # #### # #",
	"# # #### # #",
	"# #      # #",
	"##########$#" };

struct mouse {		/* 마우스 좌표와 방향 저장  */
	int x;
	int y;
	enum DIRECTION d;
} ms, old_ms;

/* 미로의 x,y 위치에 있는 값 읽기 */
char get_mazexy(int x, int y)
{
	if (ms.x < 0 || ms.x > MAZE_SIZE || ms.y < 0 || ms.y > MAZE_SIZE)
	{
		printf("[get_mazexy()] Mouse-position error!!!");
		getchar();
		exit(1);
	}
	return maze[y][x];
}

int update = 1;		/* 화면 갱신 제어 (1:갱신, 0:갱신 없음) */

					/* 미로의 x,y 위치에 값 저장하기 */
void set_mazexy(int x, int y, char c)
{
	if (ms.x < 0 || ms.x > MAZE_SIZE || ms.y < 0 || ms.y > MAZE_SIZE)
	{
		printf("[set_mazexy()] Mouse-position error!!!");
		getchar();
		exit(1);
	}
	maze[y][x] = c;
}

/* 화면 갱신하기 */
void draw(int x, int y)
{
	int i;

	set_mazexy(old_ms.x, old_ms.y, ' ');
	old_ms.x = x, old_ms.y = y;
	set_mazexy(x, y, MOUSE);

	system("cls");
	for (i = 0; i < MAZE_SIZE; i++)
		puts(maze[i]);
}

/* 오른쪽으로 돌기 */
void turn_right(void)
{
	ms.d = (ms.d + 1) % 4;
}

/* 왼쪽으로 돌기 */
void turn_left(void)
{
	ms.d = (ms.d == 0) ? 3 : ms.d - 1;
}

/* 현재 방향으로 마우스 좌표 이동하기 */
int go(void)
{
	switch (ms.d) {
	case UP: ms.y++;
		break;
	case DOWN: ms.y--;
		break;
	case RIGHT: ms.x++;
		break;
	case LEFT: ms.x--;
	}

	if (ms.x < 0 || ms.x > MAZE_SIZE || ms.y < 0 || ms.y > MAZE_SIZE)
	{
		printf("[ERROR] Mouse-position error!!!");
		getchar();
		exit(1);
	}

	if (get_mazexy(ms.x, ms.y) == EXIT)
		return 1;
	else {
		update = 1;
		return 0;
	}
}

/* 이동 방향 쪽에 벽이 있는지 검사 */
int wall_ahead(void)
{
	int ret = 0;

	switch (ms.d) {
	case UP:	if (get_mazexy(ms.x, ms.y + 1) == WALL)
		ret = 1;
		break;
	case DOWN:	if (get_mazexy(ms.x, ms.y - 1) == WALL)
		ret = 1;
		break;
	case RIGHT:	if (get_mazexy(ms.x + 1, ms.y) == WALL)
		ret = 1;
		break;
	case LEFT:	if (get_mazexy(ms.x - 1, ms.y) == WALL)
		ret = 1;
	}
	return ret;
}

/* 예제 메인 함수 */
int main(void)
{
	int exit = 0;

	old_ms.x = ms.x = 1;
	old_ms.y = ms.y = 10;
	ms.d = UP;

	while (exit == 0) {		/* 탈출하기 전까지 반복  */		
		if (update) {		/* 화면 갱신 */
			/* Sleep(100);  // windows.h */
			draw(ms.x, ms.y);
			update = 0;
		}
		turn_right();		/* 오른쪽으로 돌기 */

		while (wall_ahead())	/* 앞에 벽이 없을 때까지 왼쪽으로 돌기 */
			turn_left();

		exit = go();		/* 벽이 없는 방향으로 이동한다. */
	}

	printf("\n 성공!!\n");  /* 성공 메시지 출력 후 키 입력 대기  */
	getchar();

	return 0;
}

