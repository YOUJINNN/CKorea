#include <stdio.h>

void for_fibo(int n)
{
		// �Ǻ���ġ ���� �ݺ�������
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

	// a�� ū ���� ��ġ��Ű�� ���� ���ǹ�
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	// ��Ŭ���� �˰���
	// n�� 0�� �� ������ �ݺ����� ���� �Ѵ�.
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
	// 1. a�� ū ������ ��ġ ��ų �ʿ� ����.
	// 2. n == 0�� �ƴ϶�, b == 0�� ���� �غ���
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
	printf("�� �� �Է� >> ");
	scanf_s("%d %d", &a, &b);
	printf("�ݺ������� ���� �ִ������� %d�Դϴ�.\n", for_gcd(a, b));
	printf("����Լ��� ���� �ִ������� %d�Դϴ�.\n", gcd(a, b));

	//int n;
	//printf("�� �Է� : ");
	//scanf_s("%d", &n);
	// �ݺ����� ����� �Ǻ���ġ ����
	// for_fibo(n);

	// ����Լ��� ����� �Ǻ���ġ ����
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", fibo(i));
	//}
}