#include <stdio.h>

void main8() {
	//int result1 = 3 - 5;
	// printf("3-5=%d", result1);

	// 1+1
	// 2-1
	// 3*3
	// 10/2
	// 10.0/3.0

	int result2 = 1 + 1;
	int result3 = 2 - 1;
	int result4 = 3 * 3;
	int result5 = 10 / 2;
	float result6 = 10.0 / 3.0;

	printf("1 + 1 = %d\n", result2);
	printf("2 - 1 = %d\n", result3);
	printf("3 × 3 = %d\n", result4);
	printf("10 ÷ 2 = %d\n", result5);
	printf("10.0 ÷ 3.0 = %.2f\n", result6);

	// % : 나머지 구하기
	int result9 = 10 % 3;			// == 1
	printf("10을 3으로 나눈 나머지는 %d이다.\n", result9);

	// 배수를 구할 때, 홀짝을 구분할 때
	// 3의 배수 == 3으로 나눈 나머지가 0
	printf("3의 배수면 %d는 0과 같다.\n", result9);

	int num = 3;
	printf("num이 홀수면 1, 짝수면 0 >> %d\n", num % 2);


	




}