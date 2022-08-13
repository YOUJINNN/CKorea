#include <stdio.h>

int main()
{
	// 1부터 100까지의 합
	//int i = 1;
	//int sum = 0;
	//while (i <= 100)
	//{
	//	sum += i++;
	//}
	//printf("총합 : %d\n", sum);

	// 1부터 100까지의 합 무한 루프 활용
	//int i = 1;
	//int sum = 0;
	//while (1)
	//{
	//	sum += i++;
	//	if (i == 101)
	//	{
	//		break;
	//	}
	//}
	//printf("총합 : %d\n", sum);

	// 문제 : 정수를 계속 입력받다가 0이 입력되면
	// 0 을 제외하고 이전에 입력된 자료의 수와 합계, 평균을 출력하는 프로그램 작성
	int num;
	int sum = 0;
	int cnt = 0;
	while (1)
	{
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		cnt++;
		sum += num;
	}
	printf("입력된 자료의 개수 : %d\n", cnt);
	printf("입력된 자료의 총합 : %d\n", sum);
	printf("입력된 자료의 평균 : %d\n", sum/cnt);

}