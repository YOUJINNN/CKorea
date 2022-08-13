#pragma once
#include "Myhead.h"

#ifndef CIRCLE_QUEUE_H
#define CIRCLE_QUEUE_H

#define QUEUE_SIZE 8

// 원형 큐 구조체 정의
typedef struct circlequeue
{
	int front; // 데이터가 삭제되는 부분
	int rear; // 데이터가 삽입되는 부분
	int data[QUEUE_SIZE]; // 데이터를 저장하는 곳
}CircleQueue;

void init(CircleQueue* q); // 원형 큐를 초기화하는 함수
int isFull(CircleQueue* q); // 원형 큐가 가득 찼는지 확인하는 함수
int isEmpty(CircleQueue* q); // 원형 큐가 비었는지 확인하는 함수
void enqueue(CircleQueue* q, int data); // 원형 큐의 값을 저장하는 함수
int dequeue(CircleQueue* q); // 원형 큐에서 값을 꺼내오는 함수
void view(CircleQueue* q); // 원형 큐를 출력하는 함수

void init(CircleQueue* q)
{
	// rear와 front를 0으로 초기화 해준다.
	// 그래야 맨 앞에 인덱스를 비울 수 있기 때문이다.
	q->front = q->rear = 0;
}

int isFull(CircleQueue* q)
{
	// (rear + 1) % QUEUE_SIZE == front이면 큐가 가득 찼다는 뜻이다.
	return (q->rear + 1) % QUEUE_SIZE == q->front;
}

int isEmpty(CircleQueue* q)
{
	// front와 rear가 같은 공간을 가리키고 있으면 큐는 비어있다.
	return q->front == q->rear;
}

void enqueue(CircleQueue* q, int data)
{
	if (isFull(q))
	{
		printf("큐가 가득 찼습니다.\n");
	}
	else
	{
		q->rear = (q->rear + 1) % QUEUE_SIZE;
		q->data[q->rear] = data;
	}
}

int dequeue(CircleQueue* q)
{
	if (isEmpty(q))
	{
		printf("큐가 비었습니다.\n");
		return;
	}
	else
	{
		q->front = (q->front + 1) % QUEUE_SIZE;
		return q->data[q->front];
	}
}

void view(CircleQueue* q)
{
	printf("Queue(front = %d, rear = %d) = ", q->front, q->rear);
	int i = q->front;
	do
	{
		i = (i + 1) % QUEUE_SIZE;
		printf("%d ", q->data[i]);
		if (i == q->rear)
		{
			break;
		}
	} while (i != q->front);
	printf("\n");
}

#endif // !CIRCLE_QUEUE_H
