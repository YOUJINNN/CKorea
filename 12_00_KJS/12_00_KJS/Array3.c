#include <stdio.h>

int main()
{
	// �迭�� ����
	int arr[3][2];

	// �迭�� �ʱ�ȭ
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