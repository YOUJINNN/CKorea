#pragma once
#include "Myhead.h"

#ifndef CIRCLE_QUEUE_H
#define CIRCLE_QUEUE_H

#define QUEUE_SIZE 8

// ���� ť ����ü ����
typedef struct circlequeue
{
	int front; // �����Ͱ� �����Ǵ� �κ�
	int rear; // �����Ͱ� ���ԵǴ� �κ�
	int data[QUEUE_SIZE]; // �����͸� �����ϴ� ��
}CircleQueue;

void init(CircleQueue* q); // ���� ť�� �ʱ�ȭ�ϴ� �Լ�
int isFull(CircleQueue* q); // ���� ť�� ���� á���� Ȯ���ϴ� �Լ�
int isEmpty(CircleQueue* q); // ���� ť�� ������� Ȯ���ϴ� �Լ�
void enqueue(CircleQueue* q, int data); // ���� ť�� ���� �����ϴ� �Լ�
int dequeue(CircleQueue* q); // ���� ť���� ���� �������� �Լ�
void view(CircleQueue* q); // ���� ť�� ����ϴ� �Լ�

void init(CircleQueue* q)
{
	// rear�� front�� 0���� �ʱ�ȭ ���ش�.
	// �׷��� �� �տ� �ε����� ��� �� �ֱ� �����̴�.
	q->front = q->rear = 0;
}

int isFull(CircleQueue* q)
{
	// (rear + 1) % QUEUE_SIZE == front�̸� ť�� ���� á�ٴ� ���̴�.
	return (q->rear + 1) % QUEUE_SIZE == q->front;
}

int isEmpty(CircleQueue* q)
{
	// front�� rear�� ���� ������ ����Ű�� ������ ť�� ����ִ�.
	return q->front == q->rear;
}

void enqueue(CircleQueue* q, int data)
{
	if (isFull(q))
	{
		printf("ť�� ���� á���ϴ�.\n");
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
		printf("ť�� ������ϴ�.\n");
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
