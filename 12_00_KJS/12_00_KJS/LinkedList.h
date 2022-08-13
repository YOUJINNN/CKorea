#pragma once
#include "Myhead.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Node : 리스트에 하나씩 추가될 데이터의 형태를 정의한다.
typedef struct node
{
	int data; // 노드에 저장될 값
	struct node* next; // 다음 노드를 가리킬 포인터
}Node;

// LinkedList : 단순 연결 리스트를 정의한다.
typedef struct linkdelist
{
	Node* head; // 리스트의 시작 노드를 지정할 head
	int size; // 리스트의 노드 갯수를 저장할 변수
}LinkedList;

LinkedList* init_List(); // 연결 리스트를 초기화해주는 함수
static Node* init_Node(int data); // 리스트에 들어갈 노드를 초기화하는 함수 (내수용)
void insert_Data(LinkedList* list, int data, int n); // 리스트의 head로부터 n번째 위치에 노드를 추가
void remove_Data(LinkedList* list, int n); // 리스트의 head로부터 n번째 위치의 노드를 삭제
void search_Data(LinkedList* list, int n); // 리스트의 head로부터 n번째 위치의 노드를 출력
void print_List(LinkedList* list); // 리스트 안의 모든 노드의 데이터를 출력
void destory_List(LinkedList* list); // 리스트 안의 모든 노드와 리스트의 메모리를 삭제/해제

LinkedList* init_List()
{
	LinkedList* newList; // 새로운 리스트 선언
	newList = (LinkedList*)malloc(sizeof(LinkedList)); // 새로운 리스트에 메모리 할당
	newList->head = NULL; // 새로운 리스트의 head값을 초기화
	newList->size = 0; // 새로운 리스트의 size값을 초기화

	return newList; // 새로운 리스트를 리턴
}

static Node* init_Node(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node)); // 새로운 노드의 메모리 할당
	newNode->data = data; // 새로운 노드의 data 삽입
	newNode->next = NULL; // 새로운 노드의 다음 위치 포인터를 NULL로 지정

	return newNode; // 새로운 노드 리턴
}

void insert_Data(LinkedList* list, int data, int n)
{
	Node* newNode = init_Node(data); //새로운 노드를 만들어 newNode 변수에 할당
	Node* selectNode = list->head; // head노드의 주소값을 저장하여 검색을 시작한다.

	// 리스트에 노드가 없거나, 인수 n의 값이 올바르지 않은 경우
	// 리스트에 마지막에 노드를 추가한다.
	if (list->size == 0 || n < 0 || list->size - 1 < n)
	{
		// 리스트의 노드가 없는 경우
		if (list->head == NULL)
		{
			list->head = newNode; // 리스트의 head를 새로운 노드로 설정
		}
		// 리스트의 노드가 있는 경우
		else
		{
			// while문으로 리스트의 head로부터 마지막 노드까지 이동
			while (selectNode->next != NULL)
			{
				selectNode = selectNode->next; // head노드의 다음 노드의 주소값을 저장한다.
			}
			selectNode->next = newNode; // 마지막 노드의 next를 새로운 노드로 지정
		}
	}
	// n == 0, 즉 리스트의 head 부분에 새로운 데이터 추가
	else if (n == 0)
	{
		newNode->next = list->head; // 새로운 노드의 next를 현재 head로 설정
		list->head = newNode; // 새로운 노드를 리스트의 head로 설정
	}
	else
	{
		// 리스트의 head부터 시작해서 추가할 n번째 위치 이전의 노드(n-1)까지 이동
		for (int i = 0; i < n - 1; i++)
		{
			selectNode = selectNode->next;
		}
		newNode->next = selectNode->next; // 새로운 노드의 next를 현재의 n번째 노드로 설정
		selectNode->next = newNode; // 현재의 n-1번째 노드의 next를 새로운 노드로 설정
	}

	list->size++; // 리스트에 노드가 추가되었으니 +1
}

void remove_Data(LinkedList * list, int n)
{
	Node* selectNode = list->head;

	if (list->head == NULL || n < 0 || list->size - 1 < n)
	{
		return;
	}
	else if (n == 0)
	{
		list->head = list->head->next;
		free(selectNode);
		list->size--;
	}
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			selectNode = selectNode->next;
		}
		Node* deleteNode = selectNode->next;
		selectNode->next = selectNode->next->next;
		free(deleteNode);
		list->size--;
	}
}

void search_Data(LinkedList* list, int n)
{
	Node* selectNode = list->head;

	if (n == 0)
	{
		printf("Data[%d] = %d\n", n, selectNode->data);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			selectNode = selectNode->next;
		}
		printf("Data[%d] = %d\n", n, selectNode->data);
	}
}

void print_List(LinkedList* list)
{
	Node* selectNode = list->head;
	printf("List = ");

	while (selectNode != NULL)
	{
		printf("%d ", selectNode->data);
		selectNode = selectNode->next;
	}

	printf("(Total = %d)\n", list->size);
}

void destory_List(LinkedList* list)
{
	Node* selectNode = list->head;

	while (selectNode != NULL)
	{
		list->head = list->head->next;
		free(selectNode);
		selectNode = list->head;
	}

	free(list);
}

#endif // !LINKED_LIST_H
