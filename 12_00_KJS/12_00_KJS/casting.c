#include <stdio.h>

int main()
{
	// 1. 아스키 코드를 이용한 변환
	int c_num = 65;
	printf("%c\n", (char)c_num);

	char i_str = 'A';
	printf("%d\n", (int)i_str);

	// 2. 실수 -> 정수
	double d_num = 10.9999;
	printf("%d\n", (int)d_num);

	// 3. 정수 -> 실수
	int i_num = 10;
	double value = (double)i_num;
	printf("%f\n", value);
}