#include <stdio.h>

int main()
{
	// 중첩된 for문
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("i = %d\t j = %d\n", i, j);
	//	}
	//	printf("\n");
	//}

	// 5 x 5 직사각형
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// 구구단
	//for (int i = 2; i <= 9; i++)
	//{
	//	for (int j = 2; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	// 문제
	// *
	// **
	// ***
	// ****
	// *****
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 문제
	// *****
	// ****
	// ***
	// **
	// *
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 문제
	//     *
	//    **
	//   ***
	//  ****
	// *****
	for (int i = 0; i < 5; i++)
	{
		// 공백 출력
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}

		// 별 찍기
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}