#include <stdio.h>

int main()
{
	//int a = 10;
	//int b = 20;

	//// �� ������
	////printf("%d\n", a > b && a < b);
	////// ������ �����̸� ������ ���� �����Ѵ�.
	////printf("%d\n", a > b && a / 0);

	////printf("%d\n", a > b || a < b);
	////// ������ ���̸� ������ ���� �����Ѵ�.
	////printf("%d\n", a < b || a / 0);

	////printf("%d\n", !(a > b));

	//// ���� ������
	//int total = 20 > 15 ? 1 : 2;
	//printf("%d\n", total);

	// �� 4��и� �����
	int x, y;
	printf("x, y �� �Է� : ");
	scanf_s("%d %d", &x, &y);
	int result = (x > 0) && (y > 0) ? 1 : (x < 0) && (y > 0) ? 2 : (x < 0) && (y < 0) ? 3 : 4;
	printf("�� %d��и� �Դϴ�.", result);
}