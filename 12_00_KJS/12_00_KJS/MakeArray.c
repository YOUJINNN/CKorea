#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	printf("�迭�� ������ : ");
	scanf_s("%d", &size);

	// 2���� �迭

	// size ��ŭ �迭�� ���� ���� �Ҵ�
	int** arr = (int**)malloc(sizeof(int*) * size);

	// size ��ŭ �迭�� ���� ���� �Ҵ�
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

	// 1���� �迭
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