#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct computer
{
	char* brand;
}Computer;

int main()
{
	char tmp[20];

	Computer com;

	printf("��ǻ���� �귣�� : ");
	scanf_s("%s", tmp, sizeof(tmp));

	// strlen�� ���ڿ��� ���̸� �����ִ� �Լ� +1�� NULL���� ������ ���ذŴ�.
	//strcpy_s : ���ڿ��� �������ִ� �Լ�
	com.brand = (char*)malloc(strlen(tmp) + 1);
	strcpy_s(com.brand, strlen(tmp) + 1, tmp);

	printf("��ǻ���� �귣��� %s�Դϴ�.\n", com.brand);
}