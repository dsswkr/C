/* ���� ���� �� ���� ��Ģ ������ ���� �޾Ƽ� ����� ����� ����Ͻÿ�. 
  (��, ���������� 0���� ���� ��, "0���� ���� �� �����ϴ�." ���� �޽����� ����Ͻÿ�.) */

#include <stdio.h>

int main(void) 
{
	int num1, num2, op;
	
	printf("��Ģ���꿡 ����� ó�� ������ �Է��ϼ���: ");
	scanf_s("%i", &num1);

	// fflush(stdin);
	printf("��Ģ���� ��ȣ 1~4�� �Է��ϼ���(1:'+', 2:'-', 3:'/', 4:'*'): ");
	scanf_s("%i", &op);

	// fflush(stdin);
	printf("��Ģ���꿡 ����� ���� ������ �Է��ϼ���: ");
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
			printf("\n[����!] 0���� ���� �� �����ϴ�.\n\n");
			return -1;
		}
		break;
	case 4:
		printf("\n%i x %i = %i\n\n", num1, num2, num1 * num2);
		break;
	default:
		printf("\n[����!] ��� ������ ��Ģ �����ڴ� 1~4 ��ȣ�� �Է��ϼ���.\n\n");
		return -1;
	}
	return 0;
}

