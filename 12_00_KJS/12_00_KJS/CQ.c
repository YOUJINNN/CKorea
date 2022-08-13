#include "CQ.h"

int main()
{
	CircleQueue qq;
	CircleQueue* q = &qq;

	init(q);

	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);
	enqueue(q, 40);
	enqueue(q, 50);
	enqueue(q, 60);
	enqueue(q, 70);

	view(q);

	printf("dequeue·Î »« °ª = %d\n", dequeue(q));
	printf("dequeue·Î »« °ª = %d\n", dequeue(q));
	printf("dequeue·Î »« °ª = %d\n", dequeue(q));

	view(q);

	enqueue(q, 80);
	enqueue(q, 90);
	enqueue(q, 100);

	view(q);
}