#include <stdio.h>

// �Է¹��� ������ ���� �ڸ������� ���ʷ� ����϶�
// %c ~ %s ����� �� ����.
// 3408
// 3
// 4
// 0
// 8
void result(int num)
{
	if (num < 10)
	{
		printf("%d\n", num);
	}
	else
	{
		result(num / 10);
		printf("%d\n", num % 10);
	}
}

// N���� ������ �Է� �޾� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 5
// 4 1 8 3 7 => 8
int maxVal(int* input, int n)
{
	if (n == 0)
	{
		return input[0];
	}

	int max = maxVal(input, n - 1);

	if (max < input[n])
	{
		return input[n];
	}
	else
	{
		return max;
	}
}

int main()
{
	//int num;
	//printf("���ڸ� �Է��ϼ��� : ");
	//scanf_s("%d", &num);
	//result(num);

	int n = 5;
	int input[20];

	printf("���ڸ� �Է��ϼ��� : ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &input[i]);
	}

	printf("%d", maxVal(input, n - 1));
}