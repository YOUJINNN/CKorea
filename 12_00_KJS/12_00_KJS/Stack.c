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

	printf("Peek �Լ� = %d\n", peek(ptr));
	view(ptr);

	printf("Pop �Լ� = %d\n", pop(ptr));
	view(ptr);
}