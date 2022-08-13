#pragma once
#include "Myhead.h"

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10

// Stack 구조체 정의
typedef struct stack
{
	int top; // 가장 최근에 보관한 인덱스
	int data[STACK_SIZE]; // 데이터가 보관될 저장소
}Stack;

void init(Stack* s); // 스택을 초기화 해주는 함수
int isFull(Stack* s); // 스택이 꽉 찼는지 확인하는 함수
int isEmpty(Stack* s); // 스택이 비어있는지 확인하는 함수
void push(Stack* s, int data); // 스택에 값을 보관하는 함수 (제일 위에 보관한다.)
int pop(Stack* s); // 스택에서 값을 꺼내는 함수(제일 위의 값을 꺼낸다.)
int peek(Stack* s); // 스택의 맨 위의 원소를 돌려주는 함수
void view(Stack* s); // 스택을 출력하는 함수

void init(Stack* s)
{
	// 스택 초기화에서는 top을 -1로 설정한다.
	s->top = -1;
}

int isFull(Stack* s)
{
	// top + 1 이 스택 크기와 같으면 꽉 찬 상태이다.
	return (s->top + 1) == STACK_SIZE;
}

int isEmpty(Stack* s) 
{
	// top - 1이면 스택이 빈 상태이다.
	return s->top == -1;
}

void push(Stack* s, int data)
{
	if (isFull(s)) // 스택이 가득 찼다면
	{
		printf("스택이 가득찼습니다.\n");
	}
	else // 스택이 가득 차지 않았다면
	{
		// 데이터 보관 (top값이 1 증가)
		s->top++;
		s->data[s->top] = data;
	}
}

int pop(Stack* s)
{
	if (isEmpty(s)) // 스택이 비어있다면
	{
		printf("스택이 비어있습니다.\n");
		return;
	}
	else // 스택이 비어있지 않다면
	{
		// top 인덱스에 보관한 값을 re에 설정 (top을 1 감소)
		int re = s->data[s->top--];
		return re;
	}	
}

int peek(Stack* s)
{
	if (isEmpty(s))
	{
		printf("스택이 비어있습니다.\n");
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
		printf("스택이 비어있습니다.\n");
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
