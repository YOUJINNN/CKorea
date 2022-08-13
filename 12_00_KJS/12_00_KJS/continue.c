#include <stdio.h>

int main()
{
	// 4 제외 출력 (순서가 중요하다.)
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i == 4)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//}

	// 1부터 10까지 짝수만 출력하기
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		printf("%d ", i);
	}
}