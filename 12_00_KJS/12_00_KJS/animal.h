#pragma once
#include <stdio.h>

typedef char* String;

// ���� ����ü ����
// �̸�, ����, ����

typedef struct animal
{
	String name;
	String gender;
	int age;
}Animal;

// ���� �̸��� �̿��Ͽ�
// ��԰�, ������ �ڴ� �Լ� ����
// "�̸�"��(��) �ڰ� �ֽ��ϴ�.
// "�̸�"��(��) eat�� �԰� �ֽ��ϴ�.
// "�̸�"��(��) ������ �ֽ��ϴ�.

void eat(Animal* a, String eat);
void breath(Animal* a);
void sleep(Animal* a);

void eat(Animal* a, String eat)
{
	printf("%s(��)�� %s��(��) �԰� �ֽ��ϴ�.\n", a->name, eat);
}

void breath(Animal* a)
{
	printf("%s(��)�� ������ �ֽ��ϴ�.\n", a->name);
}

void sleep(Animal* a)
{
	printf("%s(��)�� �ڰ� �ֽ��ϴ�.\n", a->name);
}