#include <stdio.h>

void main7() {
	//for (int i = 1; i <= 9; i++)
	//{
	//	printf("2 × %d = %d\n", i, 2 * i);
	//}

	int step = 0;
	printf("몇 단을 출력할까요?");
	scanf("%d", &step);
	for (int i = 0; i < 9; i++)
	{
		printf("%d × %d = %d\n", step, i, step * i);
	}

}