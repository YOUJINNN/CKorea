#include <stdio.h>

int main()
{
	//typedef int INT;
	//INT n = 10;

	//printf("%d\n", n);
	//printf("%d\n", sizeof(INT));

	// 1. �迭�� �ڷ���ó��
	typedef int Pair[5];
	Pair arr = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 2. ���ڿ��� ���� ����
	typedef char* String;
	String name = "Kim";
	printf("�̸� : %s\n", name);
}