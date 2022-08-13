#include <stdio.h>

int main()
{
	//int* ptr[3];
	//int a = 10;
	//int b = 20;
	//int c = 30;

	//ptr[0] = &a;
	//ptr[1] = &b;
	//ptr[2] = &c;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d\n", ptr[i]);
	//}
	
	char strings[3][10] = { "Hello", "World", "Kim" };
	char* p_str[3];

	for (int i = 0; i < 3; i++)
	{
		p_str[i] = strings[i];
		printf("%s\n", p_str[i]);
	}
}