#include <stdio.h>

void main2() {
	int age = 0;
	printf("나이를 입력하세요 >>");
	scanf("%d", &age);		// 나이값이 들어감

	// if1
	if (age < 10) {
		printf("어린이 입니다. \n");
	}
	else if (age < 20) {
		// else if : if가 틀렸을 때 그 다음에 검사할 if
		printf("10대입니다 \n");
	}
		// 10대입니다.
	
	else if (age < 30) {					// 위에 있는 if나 else if가 모두 틀렸을 때만 검사
		printf("20대입니다.\n");
	}
		// 20대입니다.
	
	else if (age >= 30) {
		printf("30대 이상입니다.\n");
			
		// 30대 이상입니다.
	 }
	}
