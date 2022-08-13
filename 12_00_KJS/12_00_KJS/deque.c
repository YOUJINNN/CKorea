#include "deque.h"

int main()
{
	Deque dd;
	Deque* d = &dd;

	init(d);

	add_Rear(d, 20);
	add_Front(d, 10);
	add_Rear(d, 30);

	printf("앞 쪽에서 값 가져오기 : %d\n", get_Front(d));
	printf("뒤 쪽에서 값 가져오기 : %d\n", get_Rear(d));

	view(d);

	printf("앞 쪽에서 삭제 : %d\n", delete_Front(d));
	printf("뒤 쪽에서 삭제 : %d\n", delete_Rear(d));

	view(d);
}