#include <stdio.h>
#include "Review.h"			//  Review.h 파일이 복사붙여넣기됨

int main0()
{
	int sum = add(30, 50);
	printf("%d\n", sum);

	float division = Div(30.0f, 50.0f);
	printf("%.2f\n", division);

	return 0;
}

// 자료형 함수명(전달받을 값){ 함수가 사용되면 실행할 코드; }
int add(int n1, int n2)
{
	int result = n1+ n2;
	return result;
}

// 사용자가 직접 만든 기능 : 함수()
float Div(float n1, float n2)
{
	float result = n1 / n2;
	return result;
}