#include <stdio.h>

int main()
{
	// 1���� 100������ ��
	//int i = 1;
	//int sum = 0;
	//while (i <= 100)
	//{
	//	sum += i++;
	//}
	//printf("���� : %d\n", sum);

	// 1���� 100������ �� ���� ���� Ȱ��
	//int i = 1;
	//int sum = 0;
	//while (1)
	//{
	//	sum += i++;
	//	if (i == 101)
	//	{
	//		break;
	//	}
	//}
	//printf("���� : %d\n", sum);

	// ���� : ������ ��� �Է¹޴ٰ� 0�� �ԷµǸ�
	// 0 �� �����ϰ� ������ �Էµ� �ڷ��� ���� �հ�, ����� ����ϴ� ���α׷� �ۼ�
	int num;
	int sum = 0;
	int cnt = 0;
	while (1)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		cnt++;
		sum += num;
	}
	printf("�Էµ� �ڷ��� ���� : %d\n", cnt);
	printf("�Էµ� �ڷ��� ���� : %d\n", sum);
	printf("�Էµ� �ڷ��� ��� : %d\n", sum/cnt);

}