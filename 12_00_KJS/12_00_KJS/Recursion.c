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
		return n + sum(n - 1); // �Լ��� ���� ������ ���ϱ�� ���� �ʴ´�.
	}
}

// ���丮�� 1���� ���� ���� n������ ������ ��� ���� ���� ���ϸ� n����̶��, n!�� ��Ÿ����.
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