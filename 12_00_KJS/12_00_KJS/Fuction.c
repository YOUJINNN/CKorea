#include <stdio.h>

// 별을 출력하는 함수
// 입력값과 출력값이 모두 없다.
void  printStar();

// 1~N까지 출력하는 함수
// 입력값만 있는 함수이다.
void print1toN(int n);

// 1 ~ 10까지 더해서 돌려주는 함수
// 출력값만 있는 함수이다.
int sum1to10();

// 두 정수의 값을 받고 더해서 돌려주는 함수
// 입력값과 출력값이 모두 있는 함수이다.
int add(int x, int y);

// 두 정수의 값을 받고 큰 값과 작은 값을 비교해서
// 큰 값을 작은 값으로 나누는 함수
int divide(int a, int b);

void addVal(int val)
{
	val += 10;
}

int main()
{
	//printStar();
	//print1toN(10);
	//printf("%d\n", sum1to10());
	//printf("%d\n", add(10, 20));
	//printf("%d\n", divide(10, 20));
	//printf("%d\n", divide(20, 10));
	int a = 10;
	addVal(a);
	printf("%d\n", a);
}

void printStar()
{
	printf("*\n");
}

void print1toN(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i + 1);
	}
	printf("\n");
}

int sum1to10()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += i + 1;
	}
	return sum;
}

int add(int x, int y)
{
	return x + y;
}

int divide(int a, int b)
{
	if (a > b)
	{
		return a / b;
	}
	else
	{
		return b / a;
	}
}