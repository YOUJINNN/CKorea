#include <stdio.h>

void main2() {
	int age = 0;
	printf("���̸� �Է��ϼ��� >>");
	scanf("%d", &age);		// ���̰��� ��

	// if1
	if (age < 10) {
		printf("��� �Դϴ�. \n");
	}
	else if (age < 20) {
		// else if : if�� Ʋ���� �� �� ������ �˻��� if
		printf("10���Դϴ� \n");
	}
		// 10���Դϴ�.
	
	else if (age < 30) {					// ���� �ִ� if�� else if�� ��� Ʋ���� ���� �˻�
		printf("20���Դϴ�.\n");
	}
		// 20���Դϴ�.
	
	else if (age >= 30) {
		printf("30�� �̻��Դϴ�.\n");
			
		// 30�� �̻��Դϴ�.
	 }
	}
