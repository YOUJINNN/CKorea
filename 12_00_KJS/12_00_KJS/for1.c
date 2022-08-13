#include <stdio.h>

int main()
{
	// 기본적인 for문 *추천
	//for (int i = 0; i < 100; i++)
	//{
	//	printf("%d\n", i);
	//}

	// 초기화식 간략화
	//int i;
	//for (i = 0; i < 100; i++)
	//{
	//	printf("%d\n", i);
	//}
	
	// 초기화식 생략
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	printf("%d\n", i);
	//}

	// 초기화식이나 증감식을 두개 사용(알아만 두자)
	//for (int i = 0, j = 10; i < 10 && j > 0; i++, j--)
	//{
	//	printf("안녕하세요!\n");
	//}

	// 세미콜론은 생략이 불가능하다.(알아만 두자)
	// 안에 명령문이 한줄인 경우 중괄호 생략이 가능하다.
	//for (; ;)
	//	printf("안녕하세요\n");

	// 문제 1 : 1부터 100까지의 합 출력
	int total = 0;
	for (int num = 0; num < 100; num++)
	{
		total += num + 1;
	}
	printf("총합 : %d\n", total);
	// 문제 2 : 1부터 n까지의 합 출력
	// n은 입력받는다.
	int n;
	int sum = 0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum += i + 1;
	}
	printf("1부터 n까지의 합 : %d\n", sum);
}