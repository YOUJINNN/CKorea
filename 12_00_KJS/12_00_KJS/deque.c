#include "deque.h"

int main()
{
	Deque dd;
	Deque* d = &dd;

	init(d);

	add_Rear(d, 20);
	add_Front(d, 10);
	add_Rear(d, 30);

	printf("�� �ʿ��� �� �������� : %d\n", get_Front(d));
	printf("�� �ʿ��� �� �������� : %d\n", get_Rear(d));

	view(d);

	printf("�� �ʿ��� ���� : %d\n", delete_Front(d));
	printf("�� �ʿ��� ���� : %d\n", delete_Rear(d));

	view(d);
}