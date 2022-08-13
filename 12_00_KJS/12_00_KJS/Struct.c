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

	// ����ü ������ ����
	Car* ptr = &mycar;

	//(*ptr). == ptr->
	printf("���� �귣�� : %s\n", (*ptr).brand);
	printf("���� ���� : %s\n", ptr->color);
	printf("���� ���� : %d\n", ptr->price);

	// �Լ��� ���� ���� �ٲٱ� (������)
	int price;
	printf("������ ���� : ");
	scanf_s("%d", &price);
	changePrice(ptr, price);
	printf("���� ���� : %d\n", ptr->price);
}