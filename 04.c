#include <stdio.h>

int main(void)
{
	char name[255] = "";

	printf("당신의 이름은?: ");
	scanf_s("%s", name, sizeof(name));
	printf("당신의 이름은 %s입니다.\n", name);

	return 0;
}
