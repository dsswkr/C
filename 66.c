/* 45, 50, 70, 85, 90, 100인 점수 평균과 중간값을 구하여 출력하시오.
  (중간값은 가운데 있는 값이며 짝수인 경우에는 가운데 두 수의 평균임. 
   평균과 중간값에서 소수점 이하는 버리시오.)  */

#include <stdio.h>

int main(void)
{
	int i, mid, sum;
	int nums[] = { 45, 50, 70, 85, 90, 100 };		// 짝수
//	int nums[] = { 45, 50, 65, 70, 85, 90, 100 };	// 홀수일 때 테스트
	int count = sizeof(nums) / sizeof(int);

	printf("\n점수: ");
	for (i = 0, sum = 0; i < count; i++) {
		sum += nums[i];
		printf("%i ", nums[i]);
	}
	printf("\n------------------------------------------");
	if (count % 2) { // 항목이 홀수
		mid = count / 2 + 1;
		printf("\n중간값은 %i, 평균은 %i입니다.\n", nums[mid-1], sum / count);
	}
	else {  // 항목이 짝수
		mid = count / 2;
		printf("\n중간값은 %i, 평균은 %i입니다.\n", (nums[mid-1] + nums[mid]) / 2, sum / count);
	}
	printf("------------------------------------------\n\n");
	return 0;
}
