#include <stdio.h>

int main()
{
	// 증감 연산자
	//int a = 10;
	//int b = 20;
	//// 후위 증감 연산자
	//// a 출력 => a+1
	//printf("%d\n", a++ + b);
	//printf("%d\n", a);

	//// 전위 증감 연산자
	//// a에 1 추가 => a 출력
	//printf("%d\n", ++a + b);

	//printf("%d\n", a);

	// 대입 연산자
	int a = 12348548;
	int b = 10;

	// b의 값을 a에 대입한다.
	printf("%d\n", a = b);
	// a = a + b
	printf("%d\n", a += b);
	// 대입 연산자는 변수의 값이 바뀐다.
	printf("%d\n", a);
}