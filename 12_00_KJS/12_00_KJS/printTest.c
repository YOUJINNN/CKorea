#include <stdio.h>

int main()
{
	// ���� ����
	// \n : Enter
	// \t : Tap(����)
	// \" : " ����� �� ����Ѵ�.
	// \' : ' ����� �� ����Ѵ�.
	// \\ : \ ����� �� ����Ѵ�.

	printf("�ȳ��ϼ���.\n");
	printf("\"�ڸ��� IT ��ī����\" �Դϴ�.\n");
	printf("\'������\'\t: C���\n");
	printf("\\o/\n");

	// ���� ���� (�����ִ°� �߿��ϴ�. ������ �� ����Ѵ�.)
	// %d : ������ ���
	// %f : �Ǽ��� ���
	// %s : ���ڿ� ���
	// %c : ���� ���
	int age = 10;
	float avg = 10.234324f; // �Ҽ��� ���ڸ����� ���� �� �� �ִ�.
	// ex) %.2f : 10.234324�� 10.23���� �ٲ��ش�.
	// ex) %.3f : 10.234324�� 10.234�� �ٲ��ش�.

	printf("���� : %d, ��� : %.2f\n", age, avg);
}