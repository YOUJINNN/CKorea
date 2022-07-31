#include <stdio.h>

void main0() {
	// 조건문 : if~else if~else, switch~case~break
	// if(){}
	// switch(){}

	int number = 10;

	// ==, >, <, >=, <= : 맞으면 1, 틀리면 0
	if (number == 0) {
		// if : () 가 맞으면 {} 실행
		printf("숫자는 0과 같다. \n");
	}
	else if (number == 0) {		// else if : if의 ()가 틀리면 실행
		printf("숫자는 10과 같다, \n");
	}
	else if (number == 20) {		// else if : if와 위쪽 else if 가 틀리면 실행
		printf("숫자는 20과 같다, \n");
	}	
	else {			// else : if 와 else if 의 ()가 모두 틀리면 {} 실행
		printf("일치하는 숫자가 없다, \n");
		}
	switch (number) {
	case 0:
		printf("숫자는 0과 같다. \n");
		break;
	case 10:
		printf("숫자는 10과 같다. \n");
		break;
	case 20 :
		printf("숫자는 0과 같다. \n");
		break;
	default :
		printf("일치하는 숫자가 없다. \n");
	}

}