#include <stdio.h>

void main5() {

	// 자기소개하기 (이름과 나이는 변수를 사용해주세요)
	// 안녕하세요. 나는 김유진 입니다.
	// 나이는 27 입니다.

	int 숫자공간 = 27;
	char 이름[100] = "김유진";


	printf("자기소개하기 \n");
	printf("안녕하세요. 나는 %s 입니다. \n", 이름);
	printf("나이는 %d 입니다.", 숫자공간);
}