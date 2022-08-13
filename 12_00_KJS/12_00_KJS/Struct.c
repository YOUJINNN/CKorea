#include <stdio.h>

typedef struct car
{
	char* brand;
	char* color;
	int price;
}Car;

void changePrice(Car* c, int price)
{
	c->price = price;
}

int main()
{
	Car mycar = { "Ferrari", "Red", 50000 };

	// 구조체 포인터 선언
	Car* ptr = &mycar;

	//(*ptr). == ptr->
	printf("차의 브랜드 : %s\n", (*ptr).brand);
	printf("차의 색깔 : %s\n", ptr->color);
	printf("차의 가격 : %d\n", ptr->price);

	// 함수로 차의 가격 바꾸기 (포인터)
	int price;
	printf("수정된 가격 : ");
	scanf_s("%d", &price);
	changePrice(ptr, price);
	printf("차의 가격 : %d\n", ptr->price);
}