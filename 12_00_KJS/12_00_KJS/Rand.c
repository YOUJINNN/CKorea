#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", (rand() % 100) + 1);
	//}

	// 1���� 45���� �ִ� �ζǹ�ȣ ��÷�� �����
	// �ζ� ��ȣ�� 6��
	// ���� �� �ζ� ����, �ߺ� ���� ����
	//int save[6];
	//int cnt = 0;
	//int tmp;
	//for (int i = 0; i < 6; i++)
	//{
	//	while (cnt < 6)
	//	{
	//		// 1���� 45���� ���� �������� ����ִ´�.
	//		tmp = (rand() % 45) + 1;
	//		save[cnt++] = tmp;
	//	}
	//	for (int j = 0; j < i; j++)
	//	{
	//		if (save[i] == save[j])
	//		{
	//			i--;
	//			break;
	//		}
	//	}
	//}

	int save[6];
	int cnt = 0;
	int tmp;
	while (cnt < 6)
	{
		tmp = (rand() % 45) + 1;
		save[cnt++] = tmp;
	}

	printf("��÷ ���� : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", save[i]);
	}
}