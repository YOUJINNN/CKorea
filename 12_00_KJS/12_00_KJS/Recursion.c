#include <stdio.h>

void printStar()
{
	printf("* * * * *\n");
	printStar();
}

void rec(int n)
{
	if (n > 10)
	{
		return;
	}
	printf("int n = %d\n", n);
	rec(n + 1);
}

int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + sum(n - 1); // 함수가 끝날 때까지 더하기는 하지 않는다.
	}
}

// 팩토리얼 1부터 양의 정수 n까지의 정수를 모두 곱한 것을 말하며 n계승이라고, n!로 나타낸다.
// 0! = 1 / 1! = 1 / 2! = 2 x 1 = 2 / 3! = 3 x 2 x 1 = 6 / 4! = 4 x 3 x 2 x 1 = 24
int fact(int n)
{
	if (n == 1 || n == 0)
	{
		printf("%d", n);
		return 1;
	}
	else
	{
		printf("%d * ", n);
		return n * fact(n - 1);
	}
}

int main()
{
	// printStar();
	// rec(0);
	// printf("%d", sum(10));
	// printf(" = %d", fact(4));
}