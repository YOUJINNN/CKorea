#include <stdio.h>

void main() {
	// if : ������ ���ϴ� ��
	// switch : ��ġ�ϴ� ��

	// ���� ����
	// 1. ���� 2.��� 3.������ 4.����
	int choice;
	printf("���� �ൿ�� �ұ��?");
	scanf("%d", &choice);

	switch (choice) {				// ()�ȿ��� �� ����
	case 1:
		printf("������ �ߴ� \n");
		break;
	case 2:
		printf("�� �ߴ� \n");
		break;
	case 4 :
		printf("�������� ����ߴ� \n");
		break;
	case 5:
		printf("������ �ƴ� \n");
		break;
	default : 
		printf("�߸� �����߽��ϴ� \n");

	}

}

// ���ǹ� : if~else if~else, switch~case~break