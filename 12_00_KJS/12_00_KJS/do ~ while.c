#include <stdio.h>

int main()
{
	int n;
	printf("값 입력 : ");
	scanf_s("%d", &n);

	do
	{
		printf("do ~ while : %d\n", n++);
	} while (n <= 5);

	printf("프로그램 종료 : %d\n", n);

}