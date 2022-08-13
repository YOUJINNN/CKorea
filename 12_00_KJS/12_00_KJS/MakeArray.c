#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	printf("배열의 사이즈 : ");
	scanf_s("%d", &size);

	// 2차원 배열

	// size 만큼 배열의 세로 동적 할당
	int** arr = (int**)malloc(sizeof(int*) * size);

	// size 만큼 배열의 가로 동적 할당
	for (int i = 0; i < size; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * size);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = (i + 1) * (j + 2);
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("arr[%d][%d] : %d\t", i, j, arr[i][j]);
		}
		printf("\n");
	}

	// 1차원 배열
	//int* arr = (int*)malloc(sizeof(int) * size);

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = i + 1;
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	printf("arr[%d] : %d\n", i, arr[i]);
	//}
}