#include <stdio.h>

int main()
{
	// arr = &arr[0]
	// *arr = arr[0]
	// arr + 1 = arr�� sizeof(*arr)�� ���� ��

	//int arr[3] = { 1, 2, 3 };
	//int* ptr = arr;
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(ptr + i));
	//}
	//printf("\n");

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", ptr[i]);
	//}
	//printf("\n");

	//// ptr[i] == *(ptr + i) == *(i + ptr) == i[ptr]

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", i[ptr]);
	//}

	//int arr[3] = { 1, 2, 3 };
	//printf("arr = %d\n", arr);
	//// arr�� ���� ���� 4����Ʈ ����
	//printf("arr + 1 = %d\n", arr + 1);

	//printf("&arr = %d\n", &arr);
	//// arr�� ���� �迭�� 12����Ʈ ����
	//printf("&arr + 1 = %d\n", &arr + 1);

	//int arr[3] = { 1, 2, 3 };

	//// ���̰� 3�� int�� �迭�� ����Ű�� �����͸� ����
	//int(*ptr_arr)[3];
	//ptr_arr = &arr;

	//// 1���� �迭�϶��� �迭 �����͸� ����� ������ ����.
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", (*ptr_arr)[i]);
	//}

	//int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	//// ptr = &arr[0]
	//int(*ptr)[3] = arr;

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d ", ptr[i][j]);
	//	}
	//	printf("\n");
	//}

	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	for (int(*row)[3] = arr; row < arr + 2; row++)
	{
		for (int* col = *row; col < *row + 3; col++)
		{
			printf("%d ", *col);
		}
		printf("\n");
	}
}