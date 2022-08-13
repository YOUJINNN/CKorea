#pragma once
#include "Myhead.h"

#ifndef DEQUE_H
#define DEQUE_H

#define DEQUE_SIZE 10

typedef struct deque
{
	int front;
	int rear;
	int data[DEQUE_SIZE];
}Deque;

void init(Deque* d); // 덱 초기화하는 함수
int isFull(Deque* d); // 덱 포화 상태 확인 함수
int isEmpty(Deque* d); // 덱 공백 상태 확인 함수
void add_Rear(Deque* d, int data); // rear쪽 값 삽입 함수
int delete_Rear(Deque* d); // rear쪽 값 삭제 함수
int get_Rear(Deque* d); // rear쪽 값을 반환하는 함수
void add_Front(Deque* d, int data); // front쪽 값 삽입 함수
int delete_Front(Deque* d); // front쪽 값 삭제 함수
int get_Front(Deque* d); // front쪽 값 반환하는 함수
void view(Deque* d); // 덱 출력 함수

void init(Deque* d)
{
	d->rear = d->front = 0;
}

int isFull(Deque* d)
{
	return (d->rear + 1) % DEQUE_SIZE == d->front;
}

int isEmpty(Deque* d)
{
	return d->rear == d->front;
}

void add_Rear(Deque* d, int data)
{
	if (isFull(d))
	{
		printf("덱이 포화상태입니다.\n");
	}
	else
	{
		d->rear = (d->rear + 1) % DEQUE_SIZE;
		d->data[d->rear] = data;
	}
}

int delete_Rear(Deque* d)
{
	if (isEmpty(d))
	{
		printf("덱이 공백상태입니다.\n");
		return;
	}
	else
	{
		int perv = d->rear;
		d->rear = ((d->rear - 1) + DEQUE_SIZE) % DEQUE_SIZE;
		return d->data[perv];
	}
}

int get_Rear(Deque* d)
{
	if (isEmpty(d))
	{
		printf("덱이 공백상태입니다.\n");
		return;
	}
	else
	{
		return d->data[d->rear];
	}
}

void add_Front(Deque* d, int data)
{
	if (isFull(d))
	{
		printf("덱이 포화상태입니다.\n");
	}
	else
	{
		d->data[d->front] = data;
		d->front = ((d->front - 1) + DEQUE_SIZE) % DEQUE_SIZE;
	}
}

int delete_Front(Deque* d)
{
	if (isEmpty(d))
	{
		printf("덱이 공백상태입니다.\n");
		return;
	}
	else
	{
		d->front = (d->front + 1) % DEQUE_SIZE;
		return d->data[d->front];
	}
}

int get_Front(Deque* d)
{
	if (isEmpty(d))
	{
		printf("덱이 공백상태입니다.\n");
		return;
	}
	else
	{
		return d->data[(d->front + 1) % DEQUE_SIZE];
	}
}

void view(Deque* d)
{
	printf("Deque(front = %d, rear = %d) = ", d->front, d->rear);
	int i = d->front;
	do
	{
		i = (i + 1) % DEQUE_SIZE;
		printf("%d ", d->data[i]);
	} while (i != d->rear);
	printf("\n");
}

#endif // !DEQUE_H
