#include <stdio.h>

// 입력받은 숫자의 높은 자릿수부터 차례로 출력하라
// %c ~ %s 사용할 수 없다.
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

// N개의 정수를 입력 받아 최댓값을 구하는 프로그램을 작성하시오.
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
	//printf("숫자를 입력하세요 : ");
	//scanf_s("%d", &num);
	//result(num);

	int n = 5;
	int input[20];

	printf("숫자를 입력하세요 : ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &input[i]);
	}

	printf("%d", maxVal(input, n - 1));
}