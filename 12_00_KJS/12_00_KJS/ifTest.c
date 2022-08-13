#include <stdio.h>

int main()
{
	int H = 0;
	int M = 0;
	printf("알람을 맞춰주세요 : ");
	scanf_s("%d %d", &H, &M);
	printf("상근이가 알람을 설정한 시간 : %d시 %d분\n", H, M);
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

	printf("입력한 알람에 45분 뺀 시간 : %d시 %d분", H, M);
}