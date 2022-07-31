#include <stdio.h>

void main() {

	for (int k = 2; k <= 9; k++)
	{
		printf("====%d단====\t", k);
	}
	printf("\n");

	// 구구단
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++){
			printf("%d × %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}

}