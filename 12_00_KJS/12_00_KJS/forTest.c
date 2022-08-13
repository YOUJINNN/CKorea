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
		A = N / 10; // 십의 자리
		B = N % 10; // 일의 자리
		C = (A + B) % 10; // 새로운 수의 일의 자리
		D = (B * 10) + C; // 새로운 수 만들기
		N = D;
		cnt++;
		if (D == result)
		{
			break;
		}
	}
	printf("%d", cnt);
}