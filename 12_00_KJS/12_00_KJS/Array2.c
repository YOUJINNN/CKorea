#include <stdio.h>
#include <math.h>

// 1. �迭�� ũ�⸦ ��ũ�� ����� �����Ѵ�.
#define MAX 5

int main()
{
	int arr[MAX] = { 1, 2, 3, 4, 5 };

	// 2. �迭�� �̸����κ��� �迭�� ũ�⸦ ���Ѵ�.
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// �迭 ������ ���
	int size = 4;
	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = -200;
	printf("%d\n", abs(arr[2]));
	//scanf_s("%d", &arr[3]);
	arr[size] = 4;

	// �迭�� ����
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		y[i] = x[i];
		printf("%d ", y[i]);
	}
	printf("\n");

	// �迭�� ��
	int z[5] = { 1, 2, 3, 4, 5 };
	int v[5] = { 1, 3, 3, 5, 5 };
	for (int i = 0; i < 5; i++)
	{
		if (z[i] != v[i])
		{
			printf("z[%d]�� v[%d]�� ���� �ʽ��ϴ�.\n", i, i);
		}
	}
}