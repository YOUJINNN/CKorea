#include <stdio.h>

// ����ü Human (�̸�, ����)
typedef struct Human {
	char name[20];
	int age;
} H;

// �Լ�1 info(Human*) : �̸��� ���� ���
int Info(H* human)
{
	printf("�̸� : %s, ���� : %d \n",human->name, human->age );
}

// �Լ�2 Modify(Human*) : scanf�� ���ؼ� ���̸� ����
int Modify(H* human)
{
	printf("%s ���� �����ϱ�>>", human->age);
	scanf("%d",&(human->age));
	
}

int main()
{
	// ����ü���� �ʱ�ȭ
	H ȫ�浿 = { "ȫ�浿", 20 };

	//  ������� info()
	Info(&ȫ�浿);

	// �����Լ�
	Modify(&ȫ�浿);

	//���� ��� �Լ�
	Info(&ȫ�浿);

	return 0;
}