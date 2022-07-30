#include <stdio.h>

int main()
{
	// 1. 국어, 영어, 수학, 역사, 과학 시험 점수를 입력받고, 총점과 평균값을 출력한다.
	// 평균값은 소수점 둘째자리까지 출력한다.

	int kor, eng, math, his, sci;
	//int b;
	//int c;
	//int d;
	//int e;
	printf("국어 점수 : ");
	scanf_s("%d", &kor);

	printf("영어 점수 : ");
	scanf_s("%d", &eng);

	printf("수학 점수 : ");
	scanf_s("%d", &math);

	printf("역사 점수 : ");
	scanf_s("%d", &his);

	printf("과학 점수 : ");
	scanf_s("%d", &sci);

	printf("국어 : %d점\n", kor);
	printf("영어 : %d점\n", eng);
	printf("수학 : %d점\n", math);
	printf("역사 : %d점\n", his);
	printf("과학 : %d점\n", sci);

	int total = kor + eng + math + his + sci;
	double ave = (double)total / 5;

	printf("총점 : %d점\n", total);
	printf("평균 : %.2f점", ave);
}