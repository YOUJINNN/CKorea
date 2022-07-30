#include <stdio.h>

void main() {
	// if : 범위에 속하는 지
	// switch : 일치하는 지

	// 턴제 게임
	// 1. 공격 2.방어 3.아이템 4.도망
	int choice;
	printf("무슨 행동을 할까요?");
	scanf("%d", &choice);

	switch (choice) {				// ()안에는 비교 기준
	case 1:
		printf("공격을 했다 \n");
		break;
	case 2:
		printf("방어를 했다 \n");
		break;
	case 4 :
		printf("아이템을 사용했다 \n");
		break;
	case 5:
		printf("도망을 쳤다 \n");
		break;
	default : 
		printf("잘못 선택했습니다 \n");

	}

}

// 조건문 : if~else if~else, switch~case~break