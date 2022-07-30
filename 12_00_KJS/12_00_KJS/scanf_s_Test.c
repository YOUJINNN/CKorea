#include <stdio.h>

int main()
{
	//int a;
	//printf("첫 번째 a 입력 : ");
	//scanf_s("%d", &a);
	//printf("입력한 숫자 : %d\n", a);

	//printf("두 번째 a 입력 : ");
	//scanf_s("%d", &a);
	//printf("입력한 숫자 : %d\n", a);

	// 숫자 한번에 두개 입력받기
	int a, b;
	printf("a, b 입력 : ");
	scanf_s("%d %d", &a, &b);
	printf("a의 값 : %d\nb의 값 : %d", a, b);
}