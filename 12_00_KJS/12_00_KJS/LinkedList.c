#include "LinkedList.h"

int main()
{
	LinkedList* list = init_List();
	insert_Data(list, 10, 0);
	insert_Data(list, 20, -1);
	insert_Data(list, 30, -1);
	insert_Data(list, 40, -1);

	insert_Data(list, 100, 2);

	remove_Data(list, 2);

	search_Data(list, 3);

	print_List(list);

	destory_List(list);
}