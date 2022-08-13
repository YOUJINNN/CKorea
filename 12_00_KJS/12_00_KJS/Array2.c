#include <stdio.h>
#include <math.h>

// 1. 배열의 크기를 매크로 상수로 지정한다.
#define MAX 5

int main()
{
	int arr[MAX] = { 1, 2, 3, 4, 5 };

	// 2. 배열의 이름으로부터 배열의 크기를 구한다.
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 배열 원소의 사용
	int size = 4;
	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = -200;
	printf("%d\n", abs(arr[2]));
	//scanf_s("%d", &arr[3]);
	arr[size] = 4;

	// 배열의 복사
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		y[i] = x[i];
		printf("%d ", y[i]);
	}
	printf("\n");

	// 배열의 비교
	int z[5] = { 1, 2, 3, 4, 5 };
	int v[5] = { 1, 3, 3, 5, 5 };
	for (int i = 0; i < 5; i++)
	{
		if (z[i] != v[i])
		{
			printf("z[%d]와 v[%d]와 같지 않습니다.\n", i, i);
		}
	}
}