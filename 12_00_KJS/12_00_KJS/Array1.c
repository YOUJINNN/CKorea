#include <stdio.h>

int main()
{
	// �迭�� ���� ���(��Ģ���� �� ��)
	//int num[3];
	//num[0] = 10;
	//num[2] = 30;
	//scanf_s("%d", &num[1]);
	//printf("%d\n", num[0]+num[1]);

	// 1. �迭�� ũ��� 0�� �� �� ����.
	//int num2[0];

	// 2. �迭�� ũ��� ������ ������ �� ����.
	//int size = 10;
	//int num3[size];

	// 3. ũ�⸦ �����ؾ� �Ѵ�.
	//int num4[];

	// �迭�� �ʱ�ȭ
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// �ʱⰪ�� �����ϸ� ������ ���Ҵ� 0���� �ʱ�ȭ�ȴ�.
	int arr2[5] = { 1 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	// �迭�� �ʱⰪ�� �����ϴ� ��쿡�� �迭�� ũ�⸦ ������ �� �ִ�.
	int arr3[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");

	// for���� �̿��� ���� ���� �� �ʱ�ȭ
	int arr4[5];
	// ó���κ�
	for (int i = 0; i < 5; i++)
	{
		arr4[i] = i + 1;
	}
	// ��ºκ�
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr4[i]);
	}

}