#include <stdio.h>

void main5() {
	// 학점 계산
	// 점수 : 90이상이면 A, 80이상이면 B, 70이상이면 C, 70미만이면 D

	char grade;			// 등급
	int score = 0;		// 점수

	// 점수 입력받고

	// 점수에 따라서 등금을 알려주세요

	// 85점, B등급

	scanf("%d", &score);

	if (score >= 90) {
		grade = 'A';
		printf("%d점 %c등급.", grade, grade);
	}
	else if (score >= 80) {
		grade = 'B';
		printf("%d점 %c등급.", grade, grade);
	}

	else if (score >= 70) {
		grade = 'C';
		printf("%d점 %c등급.", score, grade);
	}

	else if (score < 70) {
		grade = 'D';
		printf("%d점 %c등급.", score, grade);
	}


}