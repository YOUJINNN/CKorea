#include <stdio.h>

int main()
{
	//int a = 10;
	//int b = 20;

	//// 논리 연산자
	////printf("%d\n", a > b && a < b);
	////// 왼쪽이 거짓이면 오른쪽 식은 무시한다.
	////printf("%d\n", a > b && a / 0);

	////printf("%d\n", a > b || a < b);
	////// 왼쪽이 참이면 오른쪽 식은 무시한다.
	////printf("%d\n", a < b || a / 0);

	////printf("%d\n", !(a > b));

	//// 삼항 연산자
	//int total = 20 > 15 ? 1 : 2;
	//printf("%d\n", total);

	// 제 4사분면 만들기
	int x, y;
	printf("x, y 값 입력 : ");
	scanf_s("%d %d", &x, &y);
	int result = (x > 0) && (y > 0) ? 1 : (x < 0) && (y > 0) ? 2 : (x < 0) && (y < 0) ? 3 : 4;
	printf("제 %d사분면 입니다.", result);
}