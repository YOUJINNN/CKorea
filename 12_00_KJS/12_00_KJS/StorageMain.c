#include <stdio.h>

extern int value;
extern int s_value;
int main()
{
	// auto
	int a = 10;

	// register
	register int b = 20;

	printf("%d\n", value);
	//static 전역변수는 사용 할 수 없다.
	//printf("%d\n", s_value);
	printf("%d\n", sum(a, b));

	for (int i = 0; i < 5; i++)
	{
		static_test();
	}
}