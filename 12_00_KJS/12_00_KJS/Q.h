#pragma once
#include "Myhead.h"

#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 10

// Queue 구조체 정의
typedef struct queue
{
	int front; // 데이터가 삭제되는 부분
	int rear; // 데이터가 삽입되는 부분
	int data[QUEUE_SIZE]; // 데이터가 저장되는 부분
}Queue;

void init(Queue* q); // 큐를 초기화하는 함수
int isFull(Queue* q); // 큐가 가득 찼는지 확인하는 함수
int isEmpty(Queue* q); // 큐가 비었는지 확인하는 함수
void enqueue(Queue* q, int data); // 큐에 값을 저장하는 함수 (rear값 증가)
int dequeue(Queue* q); // 큐에 값을 꺼내는 함수 (front값 증가)
void view(Queue* q); // 큐를 출력하는 함수

void init(Queue* q)
{
	// front와 rear값을 모두 -1로 초기화
	q->front = q->rear = -1;
}

int isFull(Queue* q)
{
	// rear+1과 배열 사이즈가 같아지면 큐가 가득 찬 것이다.
	return (q->rear + 1) == QUEUE_SIZE;
}

int isEmpty(Queue* q)
{
	// rear와 front의 위치가 같으면 q는 빈 상태이다.
	return q->front == q->rear;
}

void enqueue(Queue* q, int data)
{
	if (isFull(q)) // 큐가 가득 찼다면
	{
		printf("큐가 가득 찼습니다.\n");
	}
	else // 쿠가 가득 차지 않았다면
	{
		// rear값을 하나 증가시키고 그 안에 입력받은 데이터 저장
		q->rear++;
		q->data[q->rear] = data;
	}
}

int dequeue(Queue* q)
{
	if (isEmpty(q)) // 큐가 비었다면
	{
		printf("큐가 비었습니다.\n");
		return;
	}
	else // 큐가 비어 있지 않다면
	{
		// front값을 하나 증가시키고 그 안에 있는 원소를 돌려준다.
		int re = q->data[++q->front];
		return re;
	}
}

void view(Queue* q)
{
	// fornt + 1 부터 rear + 1 까지 for문 반복
	for (int i = q->front + 1; i < q->rear + 1; i++)
	{
		printf("%d ", q->data[i]);
	}
	printf("/ front = %d, rear = %d\n", q->front + 1, q->rear + 1);
}

#endif // !QUEUE_H
