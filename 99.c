/* �̷� ã�� C �ܼ� ���α׷� v1.0   (Using Right Hand On Wall)
Date: 2016.10.2
Name: Oh, Sangmun   (E-mail: sualchi@daum.net)
Tool: Visual Studio 2015
*/
#include <stdio.h>
#include <Windows.h>

int  go(void);							/* ���� �������� ���콺 �̵� */
char get_mazexy(int x, int y);			/* �̷��� �ش� ��ǥ�� ������ �б� */
void set_mazexy(int x, int y, char c);	/* �̷��� �ش� ��ǥ�� ������ ���� */
void draw(int x, int y);				/* ȭ�� �����ϱ� */
void turn_right(void);					/* ������ ���������� �ٲٱ� */
void turn_left(void);					/* ������ �������� �ٲٱ� */
int  wall_ahead(void);					/* ���� ���ʿ� ���� �ִ��� �˻� */

#define MAZE_SIZE 12
#define WALL  '#'
#define EXIT  '$'
#define MOUSE 'Q'

enum DIRECTION { UP, RIGHT, DOWN, LEFT };

char maze[MAZE_SIZE][MAZE_SIZE + 1] = {  /* �̷� ���� ������ */
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

struct mouse {		/* ���콺 ��ǥ�� ���� ����  */
	int x;
	int y;
	enum DIRECTION d;
} ms, old_ms;

/* �̷��� x,y ��ġ�� �ִ� �� �б� */
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

int update = 1;		/* ȭ�� ���� ���� (1:����, 0:���� ����) */

					/* �̷��� x,y ��ġ�� �� �����ϱ� */
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

/* ȭ�� �����ϱ� */
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

/* ���������� ���� */
void turn_right(void)
{
	ms.d = (ms.d + 1) % 4;
}

/* �������� ���� */
void turn_left(void)
{
	ms.d = (ms.d == 0) ? 3 : ms.d - 1;
}

/* ���� �������� ���콺 ��ǥ �̵��ϱ� */
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

/* �̵� ���� �ʿ� ���� �ִ��� �˻� */
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

/* ���� ���� �Լ� */
int main(void)
{
	int exit = 0;

	old_ms.x = ms.x = 1;
	old_ms.y = ms.y = 10;
	ms.d = UP;

	while (exit == 0) {		/* Ż���ϱ� ������ �ݺ�  */		
		if (update) {		/* ȭ�� ���� */
			/* Sleep(100);  // windows.h */
			draw(ms.x, ms.y);
			update = 0;
		}
		turn_right();		/* ���������� ���� */

		while (wall_ahead())	/* �տ� ���� ���� ������ �������� ���� */
			turn_left();

		exit = go();		/* ���� ���� �������� �̵��Ѵ�. */
	}

	printf("\n ����!!\n");  /* ���� �޽��� ��� �� Ű �Է� ���  */
	getchar();

	return 0;
}

