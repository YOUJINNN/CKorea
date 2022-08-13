#pragma once
#include "Myhead.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Node : ����Ʈ�� �ϳ��� �߰��� �������� ���¸� �����Ѵ�.
typedef struct node
{
	int data; // ��忡 ����� ��
	struct node* next; // ���� ��带 ����ų ������
}Node;

// LinkedList : �ܼ� ���� ����Ʈ�� �����Ѵ�.
typedef struct linkdelist
{
	Node* head; // ����Ʈ�� ���� ��带 ������ head
	int size; // ����Ʈ�� ��� ������ ������ ����
}LinkedList;

LinkedList* init_List(); // ���� ����Ʈ�� �ʱ�ȭ���ִ� �Լ�
static Node* init_Node(int data); // ����Ʈ�� �� ��带 �ʱ�ȭ�ϴ� �Լ� (������)
void insert_Data(LinkedList* list, int data, int n); // ����Ʈ�� head�κ��� n��° ��ġ�� ��带 �߰�
void remove_Data(LinkedList* list, int n); // ����Ʈ�� head�κ��� n��° ��ġ�� ��带 ����
void search_Data(LinkedList* list, int n); // ����Ʈ�� head�κ��� n��° ��ġ�� ��带 ���
void print_List(LinkedList* list); // ����Ʈ ���� ��� ����� �����͸� ���
void destory_List(LinkedList* list); // ����Ʈ ���� ��� ���� ����Ʈ�� �޸𸮸� ����/����

LinkedList* init_List()
{
	LinkedList* newList; // ���ο� ����Ʈ ����
	newList = (LinkedList*)malloc(sizeof(LinkedList)); // ���ο� ����Ʈ�� �޸� �Ҵ�
	newList->head = NULL; // ���ο� ����Ʈ�� head���� �ʱ�ȭ
	newList->size = 0; // ���ο� ����Ʈ�� size���� �ʱ�ȭ

	return newList; // ���ο� ����Ʈ�� ����
}

static Node* init_Node(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node)); // ���ο� ����� �޸� �Ҵ�
	newNode->data = data; // ���ο� ����� data ����
	newNode->next = NULL; // ���ο� ����� ���� ��ġ �����͸� NULL�� ����

	return newNode; // ���ο� ��� ����
}

void insert_Data(LinkedList* list, int data, int n)
{
	Node* newNode = init_Node(data); //���ο� ��带 ����� newNode ������ �Ҵ�
	Node* selectNode = list->head; // head����� �ּҰ��� �����Ͽ� �˻��� �����Ѵ�.

	// ����Ʈ�� ��尡 ���ų�, �μ� n�� ���� �ùٸ��� ���� ���
	// ����Ʈ�� �������� ��带 �߰��Ѵ�.
	if (list->size == 0 || n < 0 || list->size - 1 < n)
	{
		// ����Ʈ�� ��尡 ���� ���
		if (list->head == NULL)
		{
			list->head = newNode; // ����Ʈ�� head�� ���ο� ���� ����
		}
		// ����Ʈ�� ��尡 �ִ� ���
		else
		{
			// while������ ����Ʈ�� head�κ��� ������ ������ �̵�
			while (selectNode->next != NULL)
			{
				selectNode = selectNode->next; // head����� ���� ����� �ּҰ��� �����Ѵ�.
			}
			selectNode->next = newNode; // ������ ����� next�� ���ο� ���� ����
		}
	}
	// n == 0, �� ����Ʈ�� head �κп� ���ο� ������ �߰�
	else if (n == 0)
	{
		newNode->next = list->head; // ���ο� ����� next�� ���� head�� ����
		list->head = newNode; // ���ο� ��带 ����Ʈ�� head�� ����
	}
	else
	{
		// ����Ʈ�� head���� �����ؼ� �߰��� n��° ��ġ ������ ���(n-1)���� �̵�
		for (int i = 0; i < n - 1; i++)
		{
			selectNode = selectNode->next;
		}
		newNode->next = selectNode->next; // ���ο� ����� next�� ������ n��° ���� ����
		selectNode->next = newNode; // ������ n-1��° ����� next�� ���ο� ���� ����
	}

	list->size++; // ����Ʈ�� ��尡 �߰��Ǿ����� +1
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
