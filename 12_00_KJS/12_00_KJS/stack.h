#pragma once
#include "Myhead.h"

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10

// Stack ����ü ����
typedef struct stack
{
	int top; // ���� �ֱٿ� ������ �ε���
	int data[STACK_SIZE]; // �����Ͱ� ������ �����
}Stack;

void init(Stack* s); // ������ �ʱ�ȭ ���ִ� �Լ�
int isFull(Stack* s); // ������ �� á���� Ȯ���ϴ� �Լ�
int isEmpty(Stack* s); // ������ ����ִ��� Ȯ���ϴ� �Լ�
void push(Stack* s, int data); // ���ÿ� ���� �����ϴ� �Լ� (���� ���� �����Ѵ�.)
int pop(Stack* s); // ���ÿ��� ���� ������ �Լ�(���� ���� ���� ������.)
int peek(Stack* s); // ������ �� ���� ���Ҹ� �����ִ� �Լ�
void view(Stack* s); // ������ ����ϴ� �Լ�

void init(Stack* s)
{
	// ���� �ʱ�ȭ������ top�� -1�� �����Ѵ�.
	s->top = -1;
}

int isFull(Stack* s)
{
	// top + 1 �� ���� ũ��� ������ �� �� �����̴�.
	return (s->top + 1) == STACK_SIZE;
}

int isEmpty(Stack* s) 
{
	// top - 1�̸� ������ �� �����̴�.
	return s->top == -1;
}

void push(Stack* s, int data)
{
	if (isFull(s)) // ������ ���� á�ٸ�
	{
		printf("������ ����á���ϴ�.\n");
	}
	else // ������ ���� ���� �ʾҴٸ�
	{
		// ������ ���� (top���� 1 ����)
		s->top++;
		s->data[s->top] = data;
	}
}

int pop(Stack* s)
{
	if (isEmpty(s)) // ������ ����ִٸ�
	{
		printf("������ ����ֽ��ϴ�.\n");
		return;
	}
	else // ������ ������� �ʴٸ�
	{
		// top �ε����� ������ ���� re�� ���� (top�� 1 ����)
		int re = s->data[s->top--];
		return re;
	}	
}

int peek(Stack* s)
{
	if (isEmpty(s))
	{
		printf("������ ����ֽ��ϴ�.\n");
		return;
	}
	else
	{
		return s->data[s->top];
	}
}

void view(Stack* s)
{
	if (isEmpty(s))
	{
		printf("������ ����ֽ��ϴ�.\n");
	}
	else
	{
		for (int i = s->top; i >= 0; i--)
		{
			printf("|  %d  |\n", s->data[i]);
		}
		printf("========\n");
	}
}

#endif // !STACK_H
