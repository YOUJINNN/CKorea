#include <stdio.h>

int main()
{
	int a;
	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &a);

	int b;
	printf("�� ��° ���� �Է� : ");
	scanf_s("%d", &b);

	//// ��� ������
	//printf("%d �� %d = %d\n", a, b, a + b);
	//printf("%d �� %d = %d\n", a, b, a - b);
	//printf("%d �� %d = %d\n", a, b, a * b);
	//printf("%d �� %d = %d.....%d\n", a, b, a / b, a % b);

	// �� ������
	// C���� ���� ������ �������� �ʴ´�.
	// ��, 0�� �����̶�� ���̰�, 1�� ���̶�� ���̴�.
	printf("%d > %d : %d\n", a, b, a > b);
	printf("%d >= %d : %d\n", a, b, a >= b);
	printf("%d < %d : %d\n", a, b, a < b);
	printf("%d <= %d : %d\n", a, b, a <= b);
	printf("%d == %d : %d\n", a, b, a == b);
	printf("%d != %d : %d", a, b, a != b);
}