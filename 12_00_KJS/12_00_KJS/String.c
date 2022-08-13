#include <stdio.h>

int main()
{
	// 크기를 지정하지 않은 문자열 변수 선언
	char str[] = "hello world!";

	// 크기를 지정한 문자열 변수 선언
	char str2[7] = "string";

	printf("%s\n", str);

	int str_len = 0;
	char str3[] = "string";
	while (str3[str_len] != '\0')
	{
		str_len++;
	}
	printf("문자열의 길이는 %d이다.", str_len);
}