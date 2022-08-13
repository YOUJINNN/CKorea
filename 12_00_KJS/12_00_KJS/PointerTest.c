#include <stdio.h>

void pow(int* p)
{
	*p = *p * *p;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	// 1. 숫자를 입력 받아 해당 숫자를 제곱으로 바꿔주는 함수 만들기
	// 조건 : 리턴 금지(void), 포인터 사용
	//int num;

	//printf("숫자 입력 : ");
	//scanf_s("%d", &num);

	//pow(&num);
	//printf("제곱 : %d\n", num);

	// 2. 숫자 2개를 입력 받아 두 개의 숫자를 바꾸는 함수 만들기
	// 조건 : 리턴 금지(void), 포인터 사용
	int a, b;

	printf("숫자 2개 입력 : ");
	scanf_s("%d %d", &a, &b);
	printf("바꾸기 전..\na = %d, b = %d\n", a, b);

	swap(&a, &b);
	printf("바꾼 후..\na = %d, b = %d\n", a, b);
}