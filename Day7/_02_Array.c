#include <stdio.h>

#define	SUBWAY_LENGTH	4			//SUBWAY_LENGTH 라고 쓰면 4로 변환됨 (치환)

int main2()
{
	int subway[4] = { 0,0,0,0 };			// 컴퓨터 0부터 셈, 사람은 일반적으로 1부터 셈

	// 1번 칸에 3명
	subway[0] = 3;

	// 2번 칸에 2명
	subway[1] = 2;

	// 3번 칸에 1명
	subway[2] = 1;

	// 4명 칸에 2명
	subway[3] = 2;

	// 3번칸에 3명이 추가로 탑승
	// int subway3 = 1;
	// subway3 += 3;
	subway[2] += 3;			//subway{3,2,4,2}
	int sum = 0;

	// 각 칸의 인원과 전체 인원을 계산
	for (int i = 0; i < 4; i++)			// 0,1,2,3 == 4번을 반복
	{
		printf("%d번째 칸에는 %d명 \n", i+1, subway[i]);		//subway[0], subway[1], subway[2],subway[3]
		sum += subway[i];
	}
	printf("총 인원은 %d명 \n", sum);

	return 0;

}