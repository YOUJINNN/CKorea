#include <stdio.h>

int myFunc(int* address)		//(4)
{
	int num = 50;				// �������� (1)
	*address = num;				// �޾ƿ� �ּҰ��� �������Ͽ�  num�� ���� (6)
}

int main1()
{	
	int num = 30;				// �������� (2)
	int* p_num = &num;				// �����ͺ����� �ּҰ����� (3)
	myFunc(p_num);				// �Լ��� �ּҰ��� ���� (5)

	printf("%d \n", num);		// �ּҰ��� �������ؼ� ���� ���������� ������ ���� �ٲ� (7)

	return 0;
}