#include <stdio.h>

int main()
{
	// ���� ������
	//int a = 10;
	//int b = 20;
	//// ���� ���� ������
	//// a ��� => a+1
	//printf("%d\n", a++ + b);
	//printf("%d\n", a);

	//// ���� ���� ������
	//// a�� 1 �߰� => a ���
	//printf("%d\n", ++a + b);

	//printf("%d\n", a);

	// ���� ������
	int a = 12348548;
	int b = 10;

	// b�� ���� a�� �����Ѵ�.
	printf("%d\n", a = b);
	// a = a + b
	printf("%d\n", a += b);
	// ���� �����ڴ� ������ ���� �ٲ��.
	printf("%d\n", a);
}