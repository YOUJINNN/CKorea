#include <stdio.h>

int main()
{
	// 4 ���� ��� (������ �߿��ϴ�.)
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i == 4)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//}

	// 1���� 10���� ¦���� ����ϱ�
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		printf("%d ", i);
	}
}