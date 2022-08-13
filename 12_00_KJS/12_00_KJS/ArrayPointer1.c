#include <stdio.h>

int main()
{
	//int a = 10;
	//int* ptr_a = &a;

	//printf("ptr_a의 값 : %d\n", ptr_a);
	//printf("ptr_a의 값 + 1 : %d\n", ptr_a + 1);

	//int arr[5] = { 1, 2, 3, 4, 5 };

	//// arr = &arr[0]
	//// *arr = arr[0]

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("&arr[%d] = %d\n", i, &arr[i]);
	//	printf("arr + %d = %d\n", i, arr + i);
	//}

	// arr = &arr[0]
	// *arr = arr[0]
	// arr + 1 = arr에 sizeof(*arr)을 더한 값
	
	int arr[5] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 5; ptr++)
	{
		printf("%d ", *ptr);
	}
}