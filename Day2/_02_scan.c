#include <stdio.h>

void main2() {
	int 숫자 = 7;			//%d
	// char 문자;					//%d
	char 문자열[100] = "abc";	//%s
	float 실수 = 2.4f;					//%f



		//  입력
	printf("실수를 입력하세요 -> ");
	scanf("%f", &실수);

	// 출력
	printf("숫자를 입력하세요 -> ");
	scanf("%d", &숫자);
	
	printf("문자열 입력하세요 -> ");
	scanf("%s", &문자열);

	printf("당신이 입력한 숫자는 %d 입니다. \n", 숫자);
	printf("당신이 입력한 숫자는 %s 입니다. \n", 문자열);
	printf("당신이 입력한 숫자는 %f 입니다. \n", 실수);
}