/* ���� ���ÿ� ����ϰ� �����ð�ǥ�� �ۼ��Ͽ� ȭ�鿡 ����Ͻÿ�. 
   ��, �� ���ϰ� ������ �迭 ������ ��Ƽ� ����Ͻÿ�.

              <���� �ð�ǥ>
========================================
    ��   	ȭ  	�� 		��		��   
========================================	
1	����	��ǻ��	����	����	�ٻ�
2	����	����	����	â��	����
3	����	����	���	����	���
4	���	����	���	���	���
5	����	�ٻ�	����	����	����
6			����	ü��
======================================== */

#include <stdio.h>

int main(void)
{
	char * weekday[] = { "��", "ȭ", "��", "��", "��" };
	char * subject[] = { "����", "����", "����", "��ǻ��", "����", 
						"ü��", "����", "���", "�ٻ�", "����", "â��" };
	char line[] = "============================================";

	printf("\t\t<���� �ð�ǥ>\n");
	printf("%s\n", line);
	printf("\t%s\t%s\t%s\t%s\t%s\n", weekday[0], weekday[1], weekday[2], weekday[3], weekday[4]);
	printf("%s\n", line);
	printf("1\t%s\t%s\t%s\t%s\t%s\n", subject[0], subject[3], subject[0], subject[10], subject[1]);
	printf("2\t%s\t%s\t%s\t%s\t%s\n", subject[0], subject[4], subject[0], subject[0], subject[8]);
	printf("3\t%s\t%s\t%s\t%s\t%s\n", subject[1], subject[0], subject[7], subject[1], subject[7]);
	printf("4\t%s\t%s\t%s\t%s\t%s\n", subject[7], subject[9], subject[7], subject[7], subject[7]);
	printf("5\t%s\t%s\t%s\t%s\t%s\n", subject[2], subject[8], subject[2], subject[2], subject[6]);
	printf("6\t\t%s\t%s\n", subject[2], subject[5]);
	printf("%s\n", line);
	return 0;
}