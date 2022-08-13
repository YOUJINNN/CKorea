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

void init(Deque* d); // �� �ʱ�ȭ�ϴ� �Լ�
int isFull(Deque* d); // �� ��ȭ ���� Ȯ�� �Լ�
int isEmpty(Deque* d); // �� ���� ���� Ȯ�� �Լ�
void add_Rear(Deque* d, int data); // rear�� �� ���� �Լ�
int delete_Rear(Deque* d); // rear�� �� ���� �Լ�
int get_Rear(Deque* d); // rear�� ���� ��ȯ�ϴ� �Լ�
void add_Front(Deque* d, int data); // front�� �� ���� �Լ�
int delete_Front(Deque* d); // front�� �� ���� �Լ�
int get_Front(Deque* d); // front�� �� ��ȯ�ϴ� �Լ�
void view(Deque* d); // �� ��� �Լ�

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
		printf("���� ��ȭ�����Դϴ�.\n");
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
		printf("���� ��������Դϴ�.\n");
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
		printf("���� ��������Դϴ�.\n");
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
		printf("���� ��ȭ�����Դϴ�.\n");
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
		printf("���� ��������Դϴ�.\n");
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
		printf("���� ��������Դϴ�.\n");
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
