/* 'ȫ�浿', '��ö��' �ĺ� ��ǥ���� 1024ǥ, 2319ǥ�� �� �� �ĺ��� ��ǥ���� ����Ͻÿ�. 
   (��� ��: ȫ�浿 �ĺ� ��ǥ�� = 51.155%) */

#include <stdio.h>

int main(void)
{
	int hong = 1024;
	int kim = 2319;
	int sum = hong + kim;
	char hong_name[] = "ȫ�浿";
	char kim_name[] = "��ö��";

	printf("%s ��ǥ�� = %.3f%%\n", hong_name, (hong*100.0) / sum);
	printf("%s ��ǥ�� = %.3f%%\n", kim_name, (kim*100.0) / sum);

	return 0;
}