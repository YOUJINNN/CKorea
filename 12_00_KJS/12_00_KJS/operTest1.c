#include <stdio.h>

int main()
{
	int a;
	printf("첫 번째 숫자 입력 : ");
	scanf_s("%d", &a);

	int b;
	printf("두 번째 숫자 입력 : ");
	scanf_s("%d", &b);

	//// 산술 연산자
	//printf("%d ＋ %d = %d\n", a, b, a + b);
	//printf("%d － %d = %d\n", a, b, a - b);
	//printf("%d × %d = %d\n", a, b, a * b);
	//printf("%d ÷ %d = %d.....%d\n", a, b, a / b, a % b);

	// 비교 연산자
	// C언어는 따로 논리값이 존재하지 않는다.
	// 즉, 0은 거짓이라는 뜻이고, 1은 참이라는 뜻이다.
	printf("%d > %d : %d\n", a, b, a > b);
	printf("%d >= %d : %d\n", a, b, a >= b);
	printf("%d < %d : %d\n", a, b, a < b);
	printf("%d <= %d : %d\n", a, b, a <= b);
	printf("%d == %d : %d\n", a, b, a == b);
	printf("%d != %d : %d", a, b, a != b);
}