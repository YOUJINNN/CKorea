#include <stdio.h>

int main()
{
	// ��ø�� for��
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("i = %d\t j = %d\n", i, j);
	//	}
	//	printf("\n");
	//}

	// 5 x 5 ���簢��
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// ������
	//for (int i = 2; i <= 9; i++)
	//{
	//	for (int j = 2; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	// ����
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

	// ����
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

	// ����
	//     *
	//    **
	//   ***
	//  ****
	// *****
	for (int i = 0; i < 5; i++)
	{
		// ���� ���
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}

		// �� ���
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}