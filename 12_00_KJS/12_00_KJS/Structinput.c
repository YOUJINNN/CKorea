#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct computer
{
	char* brand;
}Computer;

int main()
{
	char tmp[20];

	Computer com;

	printf("컴퓨터의 브랜드 : ");
	scanf_s("%s", tmp, sizeof(tmp));

	// strlen은 문자열의 길이를 구해주는 함수 +1은 NULL문자 때문에 해준거다.
	//strcpy_s : 문자열을 복사해주는 함수
	com.brand = (char*)malloc(strlen(tmp) + 1);
	strcpy_s(com.brand, strlen(tmp) + 1, tmp);

	printf("컴퓨터의 브랜드는 %s입니다.\n", com.brand);
}