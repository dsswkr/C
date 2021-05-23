/* '홍길동', '김철수' 후보 득표수가 1024표, 2319표일 때 각 후보자 득표율을 출력하시오. 
   (출력 예: 홍길동 후보 득표율 = 51.155%) */

#include <stdio.h>

int main(void)
{
	int hong = 1024;
	int kim = 2319;
	int sum = hong + kim;
	char hong_name[] = "홍길동";
	char kim_name[] = "김철수";

	printf("%s 득표율 = %.3f%%\n", hong_name, (hong*100.0) / sum);
	printf("%s 득표율 = %.3f%%\n", kim_name, (kim*100.0) / sum);

	return 0;
}