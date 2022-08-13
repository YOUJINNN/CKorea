#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", (rand() % 100) + 1);
	//}

	// 1부터 45까지 있는 로또번호 추첨기 만들기
	// 로또 번호는 6개
	// 내가 한 로또 랜덤, 중복 숫자 제거
	//int save[6];
	//int cnt = 0;
	//int tmp;
	//for (int i = 0; i < 6; i++)
	//{
	//	while (cnt < 6)
	//	{
	//		// 1부터 45까지 값을 랜덤으로 집어넣는다.
	//		tmp = (rand() % 45) + 1;
	//		save[cnt++] = tmp;
	//	}
	//	for (int j = 0; j < i; j++)
	//	{
	//		if (save[i] == save[j])
	//		{
	//			i--;
	//			break;
	//		}
	//	}
	//}

	int save[6];
	int cnt = 0;
	int tmp;
	while (cnt < 6)
	{
		tmp = (rand() % 45) + 1;
		save[cnt++] = tmp;
	}

	printf("추첨 숫자 : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", save[i]);
	}
}