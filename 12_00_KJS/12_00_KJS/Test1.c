#include <stdio.h>

int main()
{
	// 1. ����, ����, ����, ����, ���� ���� ������ �Է¹ް�, ������ ��հ��� ����Ѵ�.
	// ��հ��� �Ҽ��� ��°�ڸ����� ����Ѵ�.

	int kor, eng, math, his, sci;
	//int b;
	//int c;
	//int d;
	//int e;
	printf("���� ���� : ");
	scanf_s("%d", &kor);

	printf("���� ���� : ");
	scanf_s("%d", &eng);

	printf("���� ���� : ");
	scanf_s("%d", &math);

	printf("���� ���� : ");
	scanf_s("%d", &his);

	printf("���� ���� : ");
	scanf_s("%d", &sci);

	printf("���� : %d��\n", kor);
	printf("���� : %d��\n", eng);
	printf("���� : %d��\n", math);
	printf("���� : %d��\n", his);
	printf("���� : %d��\n", sci);

	int total = kor + eng + math + his + sci;
	double ave = (double)total / 5;

	printf("���� : %d��\n", total);
	printf("��� : %.2f��", ave);
}