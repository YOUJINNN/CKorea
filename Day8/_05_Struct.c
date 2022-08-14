#include <stdio.h>

// 구조체 Human (이름, 나이)
typedef struct Human {
	char name[20];
	int age;
} H;

// 함수1 info(Human*) : 이름과 나이 출력
int Info(H* human)
{
	printf("이름 : %s, 나이 : %d \n",human->name, human->age );
}

// 함수2 Modify(Human*) : scanf를 통해서 나이를 수정
int Modify(H* human)
{
	printf("%s 나이 수정하기>>", human->age);
	scanf("%d",&(human->age));
	
}

int main()
{
	// 구조체변수 초기화
	H 홍길동 = { "홍길동", 20 };

	//  정보출력 info()
	Info(&홍길동);

	// 수정함수
	Modify(&홍길동);

	//정보 출력 함수
	Info(&홍길동);

	return 0;
}