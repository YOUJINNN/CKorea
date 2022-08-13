#pragma once
#include "Myhead.h"

#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 10

// Queue ����ü ����
typedef struct queue
{
	int front; // �����Ͱ� �����Ǵ� �κ�
	int rear; // �����Ͱ� ���ԵǴ� �κ�
	int data[QUEUE_SIZE]; // �����Ͱ� ����Ǵ� �κ�
}Queue;

void init(Queue* q); // ť�� �ʱ�ȭ�ϴ� �Լ�
int isFull(Queue* q); // ť�� ���� á���� Ȯ���ϴ� �Լ�
int isEmpty(Queue* q); // ť�� ������� Ȯ���ϴ� �Լ�
void enqueue(Queue* q, int data); // ť�� ���� �����ϴ� �Լ� (rear�� ����)
int dequeue(Queue* q); // ť�� ���� ������ �Լ� (front�� ����)
void view(Queue* q); // ť�� ����ϴ� �Լ�

void init(Queue* q)
{
	// front�� rear���� ��� -1�� �ʱ�ȭ
	q->front = q->rear = -1;
}

int isFull(Queue* q)
{
	// rear+1�� �迭 ����� �������� ť�� ���� �� ���̴�.
	return (q->rear + 1) == QUEUE_SIZE;
}

int isEmpty(Queue* q)
{
	// rear�� front�� ��ġ�� ������ q�� �� �����̴�.
	return q->front == q->rear;
}

void enqueue(Queue* q, int data)
{
	if (isFull(q)) // ť�� ���� á�ٸ�
	{
		printf("ť�� ���� á���ϴ�.\n");
	}
	else // �� ���� ���� �ʾҴٸ�
	{
		// rear���� �ϳ� ������Ű�� �� �ȿ� �Է¹��� ������ ����
		q->rear++;
		q->data[q->rear] = data;
	}
}

int dequeue(Queue* q)
{
	if (isEmpty(q)) // ť�� ����ٸ�
	{
		printf("ť�� ������ϴ�.\n");
		return;
	}
	else // ť�� ��� ���� �ʴٸ�
	{
		// front���� �ϳ� ������Ű�� �� �ȿ� �ִ� ���Ҹ� �����ش�.
		int re = q->data[++q->front];
		return re;
	}
}

void view(Queue* q)
{
	// fornt + 1 ���� rear + 1 ���� for�� �ݺ�
	for (int i = q->front + 1; i < q->rear + 1; i++)
	{
		printf("%d ", q->data[i]);
	}
	printf("/ front = %d, rear = %d\n", q->front + 1, q->rear + 1);
}

#endif // !QUEUE_H
