/* 다음 예시와 비슷하게 수업시간표를 작성하여 화면에 출력하시오. 
   단, 각 요일과 과목은 배열 변수에 담아서 사용하시오.

              <수업 시간표>
========================================
    월   	화  	수 		목		금   
========================================	
1	국어	컴퓨터	국어	국어	바생
2	국어	한자	국어	창의	수학
3	수학	국어	즐생	수학	즐생
4	즐생	슬생	즐생	즐생	즐생
5	영어	바생	영어	영어	실험
6			영어	체육
======================================== */

#include <stdio.h>

int main(void)
{
	char * weekday[] = { "월", "화", "수", "목", "금" };
	char * subject[] = { "국어", "수학", "영어", "컴퓨터", "한자", 
						"체육", "실험", "즐생", "바생", "슬생", "창의" };
	char line[] = "============================================";

	printf("\t\t<수업 시간표>\n");
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