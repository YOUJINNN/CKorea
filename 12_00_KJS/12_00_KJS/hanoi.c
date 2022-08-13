#include <stdio.h>

void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("1��° ������ %c���� %c�� ���������ϴ�.\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to, tmp);
		printf("%d��° ������ %c���� %c�� ���������ϴ�.\n", n, from, to);
		hanoi(n - 1, tmp, from, to);
	}
}

int main()
{
	hanoi(4, 'A', 'B', 'C');
}