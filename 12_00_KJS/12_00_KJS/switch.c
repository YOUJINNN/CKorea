#include <stdio.h>

int main()
{
	//int input;
	//printf("값 입력 : ");
	//scanf_s("%d", &input);

	//switch (input)
	//{
	//case 1:
	//	printf("1입니다.");
	//	break;

	//case 2:
	//	printf("2입니다.");
	//	break;

	//case 3:
	//	printf("3입니다.");
	//	break;

	//default:
	//	printf("기타");
	//	break;
	//}

	// 변형된 switch문

	//int input;
	//printf("값 입력 : ");
	//scanf_s("%d", &input);

	//switch (input)
	//{
	//case 1:	case 2:	case 3:
	//	printf("%d입니다.", input);
	//	break;

	//default:
	//	printf("기타");
	//}

	// 1번 문제
	int month;
	printf("월 입력 : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		printf("31일까지 있습니다.");
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		printf("30일까지 있습니다.");
		break;
	}
	case 2:
	{
		printf("28일까지 있습니다.");
	}
	default:
		printf("정확한 월을 입력해주세요.");
	}
	

	// 2번 문제
	int score;
	printf("점수 입력 : ");
	scanf_s("%d", &score);

	switch (score/10)
	{
	case 10: case 9:
	{
		printf("A학점 입니다.");
		break;
	}
	case 8:
	{
		printf("B학점 입니다.");
		break;
	}
	case 7:
	{
		printf("C학점 입니다.");
		break;
	}
	case 6:
	{
		printf("D학점 입니다.");
		break;
	}
	default:
		printf("F학점 입니다.");
	}
}