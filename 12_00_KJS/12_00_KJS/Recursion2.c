#include <stdio.h>

void for_fibo(int n)
{
		// 피보나치 수열 반복문으로
	int a = 1;
	int b = 1;
	int c;

	for (int i = 1; i < n + 1; i++)
	{
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
}

int fibo(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
}

int for_gcd(int a, int b)
{
	int tmp, n;

	// a에 큰 값을 위치시키기 위한 조건문
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	// 유클리드 알고리즘
	// n이 0이 될 때까지 반복문을 돌게 한다.
	while (1)
	{
		n = a % b;
		if (n == 0)
		{
			break;
		}
		a = b;
		b = n;
	}

	return b;
}

int gcd(int a, int b)
{
	// 1. a를 큰 값으로 위치 시킬 필요 없다.
	// 2. n == 0이 아니라, b == 0일 때로 해보자
	int n;
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		gcd(b, a % b);
	}
}

int main()
{
	int a, b;
	printf("두 수 입력 >> ");
	scanf_s("%d %d", &a, &b);
	printf("반복문으로 구한 최대공약수는 %d입니다.\n", for_gcd(a, b));
	printf("재귀함수로 구한 최대공약수는 %d입니다.\n", gcd(a, b));

	//int n;
	//printf("항 입력 : ");
	//scanf_s("%d", &n);
	// 반복문을 사용한 피보나치 수열
	// for_fibo(n);

	// 재귀함수를 사용한 피보나치 수열
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", fibo(i));
	//}
}