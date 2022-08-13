#pragma once
#include <stdio.h>

typedef char* String;

// 동물 구조체 정의
// 이름, 성별, 나이

typedef struct animal
{
	String name;
	String gender;
	int age;
}Animal;

// 동물 이름을 이용하여
// 밥먹고, 숨쉬고 자는 함수 구현
// "이름"이(가) 자고 있습니다.
// "이름"이(가) eat를 먹고 있습니다.
// "이름"이(가) 숨쉬고 있습니다.

void eat(Animal* a, String eat);
void breath(Animal* a);
void sleep(Animal* a);

void eat(Animal* a, String eat)
{
	printf("%s(이)가 %s을(를) 먹고 있습니다.\n", a->name, eat);
}

void breath(Animal* a)
{
	printf("%s(이)가 숨쉬고 있습니다.\n", a->name);
}

void sleep(Animal* a)
{
	printf("%s(이)가 자고 있습니다.\n", a->name);
}