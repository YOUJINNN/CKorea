#include "stack.h"

int main()
{
	Stack s;
	Stack* ptr = &s;

	init(ptr);
	
	push(ptr, 10);
	push(ptr, 20);
	push(ptr, 30);
	push(ptr, 40);
	push(ptr, 50);

	printf("Peek 함수 = %d\n", peek(ptr));
	view(ptr);

	printf("Pop 함수 = %d\n", pop(ptr));
	view(ptr);
}