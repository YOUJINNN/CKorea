#include <stdio.h>

void pow(int* p)
{
	*p = *p * *p;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	// 1. ���ڸ� �Է� �޾� �ش� ���ڸ� �������� �ٲ��ִ� �Լ� �����
	// ���� : ���� ����(void), ������ ���
	//int num;

	//printf("���� �Է� : ");
	//scanf_s("%d", &num);

	//pow(&num);
	//printf("���� : %d\n", num);

	// 2. ���� 2���� �Է� �޾� �� ���� ���ڸ� �ٲٴ� �Լ� �����
	// ���� : ���� ����(void), ������ ���
	int a, b;

	printf("���� 2�� �Է� : ");
	scanf_s("%d %d", &a, &b);
	printf("�ٲٱ� ��..\na = %d, b = %d\n", a, b);

	swap(&a, &b);
	printf("�ٲ� ��..\na = %d, b = %d\n", a, b);
}