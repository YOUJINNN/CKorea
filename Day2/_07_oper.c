#include <stdio.h>

void main() {
		int num1 = 1, num2 = 0;
	
		char name[50] = "yujin";

	
		//이름
		printf("이름을 입력하세요 :");
		scanf("%s", &name);
		// 1+1
		printf("1+1=");
		scanf("%d", &num1);
		(2 == num1) ? printf("정답입니다, \n") : printf("오답입니다. \n");

		// 2-1
		printf("2-1=");
		scanf("%d", &num1);
		(1 == num1) ? printf("정답입니다, \n") : printf("오답입니다. \n");

		// 3*3
		printf("3*3=");
		scanf("%d", &num1);
		(9 == num1) ? printf("정답입니다, \n") : printf("오답입니다. \n");

		// 10/2
		printf("10/2=");
		scanf("%d", &num1);
		(5 == num1) ? printf("정답입니다, \n") : printf("오답입니다. \n");
		 
}