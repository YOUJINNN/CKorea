#include <stdio.h>

int main()
{
	int H = 0;
	int M = 0;
	printf("�˶��� �����ּ��� : ");
	scanf_s("%d %d", &H, &M);
	printf("����̰� �˶��� ������ �ð� : %d�� %d��\n", H, M);
	M -= 45;
	if (M < 0)
	{
		M += 60;
		H -= 1;

		if (H < 0)
		{
			H = 23;
		}
	}

	printf("�Է��� �˶��� 45�� �� �ð� : %d�� %d��", H, M);
}