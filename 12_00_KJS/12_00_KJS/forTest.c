#include <stdio.h>

int main()
{
	int N;
	int result;
	int A, B, C, D;
	int cnt = 0;

	scanf_s("%d", &N);
	result = N;

	while (1)
	{
		A = N / 10; // ���� �ڸ�
		B = N % 10; // ���� �ڸ�
		C = (A + B) % 10; // ���ο� ���� ���� �ڸ�
		D = (B * 10) + C; // ���ο� �� �����
		N = D;
		cnt++;
		if (D == result)
		{
			break;
		}
	}
	printf("%d", cnt);
}