#include <stdio.h>

void main5() {
	// ���� ���
	// ���� : 90�̻��̸� A, 80�̻��̸� B, 70�̻��̸� C, 70�̸��̸� D

	char grade;			// ���
	int score = 0;		// ����

	// ���� �Է¹ް�

	// ������ ���� ����� �˷��ּ���

	// 85��, B���

	scanf("%d", &score);

	if (score >= 90) {
		grade = 'A';
		printf("%d�� %c���.", grade, grade);
	}
	else if (score >= 80) {
		grade = 'B';
		printf("%d�� %c���.", grade, grade);
	}

	else if (score >= 70) {
		grade = 'C';
		printf("%d�� %c���.", score, grade);
	}

	else if (score < 70) {
		grade = 'D';
		printf("%d�� %c���.", score, grade);
	}


}