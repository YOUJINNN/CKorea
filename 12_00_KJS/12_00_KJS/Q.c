#include "Q.h"

int main()
{
	Queue queue;
	Queue* q = &queue;

	init(q);

	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);
	enqueue(q, 40);
	enqueue(q, 50);
	enqueue(q, 60);
	enqueue(q, 70);
	enqueue(q, 80);
	enqueue(q, 90);
	enqueue(q, 100);

	view(q);

	printf("dequeue : %d\n", dequeue(q));

	view(q);

	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);

	view(q);
}