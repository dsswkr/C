#include <stdio.h>

int main(void)
{
	char name[255] = "";

	printf("����� �̸���?: ");
	scanf_s("%s", name, sizeof(name));
	printf("����� �̸��� %s�Դϴ�.\n", name);

	return 0;
}
