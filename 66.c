/* 45, 50, 70, 85, 90, 100�� ���� ��հ� �߰����� ���Ͽ� ����Ͻÿ�.
  (�߰����� ��� �ִ� ���̸� ¦���� ��쿡�� ��� �� ���� �����. 
   ��հ� �߰������� �Ҽ��� ���ϴ� �����ÿ�.)  */

#include <stdio.h>

int main(void)
{
	int i, mid, sum;
	int nums[] = { 45, 50, 70, 85, 90, 100 };		// ¦��
//	int nums[] = { 45, 50, 65, 70, 85, 90, 100 };	// Ȧ���� �� �׽�Ʈ
	int count = sizeof(nums) / sizeof(int);

	printf("\n����: ");
	for (i = 0, sum = 0; i < count; i++) {
		sum += nums[i];
		printf("%i ", nums[i]);
	}
	printf("\n------------------------------------------");
	if (count % 2) { // �׸��� Ȧ��
		mid = count / 2 + 1;
		printf("\n�߰����� %i, ����� %i�Դϴ�.\n", nums[mid-1], sum / count);
	}
	else {  // �׸��� ¦��
		mid = count / 2;
		printf("\n�߰����� %i, ����� %i�Դϴ�.\n", (nums[mid-1] + nums[mid]) / 2, sum / count);
	}
	printf("------------------------------------------\n\n");
	return 0;
}
