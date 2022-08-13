#include <stdio.h>

int main3()
{
	int 가격[5] = { 2300,2400,2500,2600,2700 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d원 \n", 가격[i]);
	}

	printf("%d원 \n", 가격[1]);			// 1번째방의 값

	// for문으로 전부 출력


	return 0;
}