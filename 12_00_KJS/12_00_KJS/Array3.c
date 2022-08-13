#include <stdio.h>

int main()
{
	// 배열의 선언
	int arr[3][2];

	// 배열의 초기화
	int data[3][2] = { {10, 20}, {30, 40}, {50, 60} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	int data2[][2] = { {1, 2}, {3, 4}, {5, 6} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", data2[i][j]);
		}
		printf("\n");
	}
}