#include <stdio.h>

int main()
{
	int n;
	printf("�� �Է� : ");
	scanf_s("%d", &n);

	do
	{
		printf("do ~ while : %d\n", n++);
	} while (n <= 5);

	printf("���α׷� ���� : %d\n", n);

}