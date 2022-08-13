#include <stdio.h>

void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("1번째 원판이 %c에서 %c로 움직였습니다.\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to, tmp);
		printf("%d번째 원판이 %c에서 %c로 움직였습니다.\n", n, from, to);
		hanoi(n - 1, tmp, from, to);
	}
}

int main()
{
	hanoi(4, 'A', 'B', 'C');
}