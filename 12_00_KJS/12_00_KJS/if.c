#include <stdio.h>

int main()
{
	//// 숫자를 입력받은 후 50 이상인지 판단하는 프로그램
	//int input;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &input);

	//if (input >= 50)
	//{
	//	printf("입력하신 숫자가 50이상입니다.");
	//}
	//if (input < 50)
	//{
	//	printf("입력하신 숫자가 50미만입니다.");
	//}
	
	// 문제 : 숫자를 입력받은 후 짝수인지 홀수인지 구분하는 프로그램
	//int num;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &num);

	//if (num % 2 == 0)
	//	printf("입력하신 숫자는 짝수입니다.");
	//else
	//	printf("입력하신 숫자는 홀수입니다.");

	// 숫자를 입력받은 후 양수, 음수, 0인지 판단하는 프로그램
	//int input;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &input);

	//if (input > 0)
	//{
	//	printf("양수이다.");
	//}
	//else if (input < 0)
	//{
	//	printf("음수이다.");
	//}
	//else
	//{
	//	printf("0입니다.");
	//}

	//// 문제 : 문자를 입력받은 후 소문자인지 대문자인지 판단하는 프로그램
	//// 만약 잘못된 문자를 입력받는다면 알파벳이 아니다고 출력
	//char alp;
	//printf("문자 입력 : ");
	//scanf_s("%c", &alp,1);

	//if ('A' <= alp && alp <= 'Z')
	//{
	//	printf("대문자입니다.");
	//}
	//else if ('a' <= alp && alp <= 'z')
	//{
	//	printf("소문자입니다.");
	//}
	//else
	//{
	//	printf("알파벳이 아닙니다.");
	//}
		
	// 나이를 입력받은 후 20세 이상이면 통과
	// 20세 미만이면 보호자가 동행하는지 확인
	// 함께 왔다면 1 또는 다른 숫자 입력, 아니라면 0 입력
	//int age;
	//printf("나이를 입력하세요 : ");
	//scanf_s("%d", &age);

	//if (age >= 20)
	//{
	//	printf("재밌게 관람하세요~");
	//}
	//else
	//{
	//	printf("함께 온 보호자가 계신가요?\n");
	//	int choice;
	//	printf("답변 : ");
	//	scanf_s("%d", &choice);
	//	if (choice)
	//	{
	//		printf("좋은 시간 보내렴!");
	//	}
	//	else
	//	{
	//		printf("부모님 모시고 다시 오렴~");
	//	}
	//}

	// 문제 1 : 숫자 3개를 입력받고 비교하여 가장 큰 수만 출력
	// 숫자 3개는 모두 다르다.
	//int a, b, c;
	//printf("숫자 3개를 입력해주세요 >>> ");
	//scanf_s("%d %d %d", &a, &b, &c);

	//if (a > b)
	//{
	//	if (a > c)
	//	{
	//		printf("%d이 가장 큰 숫자입니다.", a);
	//	}
	//	else
	//	{
	//		printf("%d이 가장 큰 숫자입니다.", c);
	//	}
	//}
	//else
	//{
	//	if (b > c)
	//	{
	//		printf("%d이 가장 큰 숫자입니다.", b);
	//	}
	//	else
	//	{
	//		printf("%d이 가장 큰 숫자입니다.", c);
	//	}
	//}
	
	// 문제 2 : 시험 점수를 입력받아 학점을 다르게 출력
	// A : 100 ~ 90 , B : 89~80, C : 79~70, D : 69~60, F : 59~0
	// 단 100점 초과 0점 미만의 점수가 들어오면 점수를 잘못 입력 한 것
	int score;
	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score <= 100 || score >= 0)
	{
		if (score >= 90 && score <= 100)
		{
			printf("A학점입니다.");
		}
		else if (score >= 80 && score < 90)
		{
			printf("B학점입니다.");
		}
		else if (score >= 70 && score < 80)
		{
			printf("C학점입니다.");
		}
		else if (score >= 60 && score < 70)
		{
			printf("D학점입니다.");
		}
		else
		{
			printf("F학점입니다.");
		}
	}

}