#include <stdio.h>

// ���� ����ϴ� �Լ�
// �Է°��� ��°��� ��� ����.
void  printStar();

// 1~N���� ����ϴ� �Լ�
// �Է°��� �ִ� �Լ��̴�.
void print1toN(int n);

// 1 ~ 10���� ���ؼ� �����ִ� �Լ�
// ��°��� �ִ� �Լ��̴�.
int sum1to10();

// �� ������ ���� �ް� ���ؼ� �����ִ� �Լ�
// �Է°��� ��°��� ��� �ִ� �Լ��̴�.
int add(int x, int y);

// �� ������ ���� �ް� ū ���� ���� ���� ���ؼ�
// ū ���� ���� ������ ������ �Լ�
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