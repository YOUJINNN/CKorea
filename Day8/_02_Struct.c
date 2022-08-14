#include <stdio.h>

// 구조체 : 하나의 주제를 통해 각기 다른 자료형의 변수들을 한번에 관리
struct Person {
	char* name;
	int age;
	float height;
	float weight;
};

int main2()
{
	char* name1="홍길동", * name2 = "신짱구", * name3 = "아무개", * name4= "이순신", * name5= "장보고";
	int age[5] = { 12,13,14,15,16 };
	float height[5] = { 155.5f, 160.0f, 170.0f, 180.0f, 188.0f };
	float weight[5] = { 55.5f, 60.0f, 66.0f, 75.0f, 80.0f };

	printf("이름은 %s이고, 나이는 %d, 키는 %f, 몸무게는 %f인 사람이다. \n", name1, age[0], height[0], weight[0]);
	printf("이름은 %s이고, 나이는 %d, 키는 %f, 몸무게는 %f인 사람이다.\n", name2, age[1], height[1], weight[1]);
	printf("이름은 %s이고, 나이는 %d, 키는 %f, 몸무게는 %f인 사람이다.\n", name3, age[2], height[2], weight[2]);
	printf("이름은 %s이고, 나이는 %d, 키는 %f, 몸무게는 %f인 사람이다.\n", name4, age[3], height[3], weight[3]);
	printf("이름은 %s이고, 나이는 %d, 키는 %f, 몸무게는 %f인 사람이다.\n", name5, age[4], height[4], weight[4]);

	//기본 변수와 배열의 한계점
	printf("\n==========================================\n");

	struct Person 홍길동 = { "홍길동", 12, 155.5f, 55.5f };
	struct Person 신짱구 = { "신짱구", 13, 160.0f, 60.0f };
	struct Person 아무개 = { "아무개", 14, 170.0f, 66.0f };
	struct Person 이순신 = { "이순신", 15, 180.0f, 75.0f };
	struct Person 장보고;
	장보고.age = 16;
	장보고.name = "장보고";
	장보고.height = 188.0f;
	장보고.weight = 80.0f;

	printf("이름은 %s이고, 나이는 %d, 키는 %f, 몸무게는 %f인 사람이다. \n", 장보고.name, 장보고.age, 장보고.height, 장보고.weight);


	return 0;
}