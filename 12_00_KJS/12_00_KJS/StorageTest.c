#include <stdio.h>

// ���� ����
int value = 100;

// ���� ���� ����
static int s_value = 100;

int sum(int a, int b)
{
	return a + b;
}

void static_test()
{
	int value = 0;
	static int s_value = 0;

	value++;
	s_value++;

	printf("value = %d\t", value);
	printf("s_value = %d\n", s_value);
}