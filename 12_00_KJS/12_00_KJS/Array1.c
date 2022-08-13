#include <stdio.h>

int main()
{
	// 배열의 선언 방법(사칙연산 다 됨)
	//int num[3];
	//num[0] = 10;
	//num[2] = 30;
	//scanf_s("%d", &num[1]);
	//printf("%d\n", num[0]+num[1]);

	// 1. 배열의 크기는 0이 될 수 없다.
	//int num2[0];

	// 2. 배열의 크기는 변수로 지정할 수 없다.
	//int size = 10;
	//int num3[size];

	// 3. 크기를 지정해야 한다.
	//int num4[];

	// 배열의 초기화
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 초기값이 부족하면 나머지 원소는 0으로 초기화된다.
	int arr2[5] = { 1 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	// 배열의 초기값을 지정하는 경우에는 배열의 크기를 생략할 수 있다.
	int arr3[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");

	// for문을 이용해 직접 접근 후 초기화
	int arr4[5];
	// 처리부분
	for (int i = 0; i < 5; i++)
	{
		arr4[i] = i + 1;
	}
	// 출력부분
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr4[i]);
	}

}