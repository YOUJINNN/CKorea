#include <stdio.h>

int myFunc(int* address)		//(4)
{
	int num = 50;				// 지역변수 (1)
	*address = num;				// 받아온 주소값을 역참조하여  num값 대입 (6)
}

int main1()
{	
	int num = 30;				// 지역변수 (2)
	int* p_num = &num;				// 포인터변수에 주소값대입 (3)
	myFunc(p_num);				// 함수에 주소값을 전달 (5)

	printf("%d \n", num);		// 주소값을 역참조해서 값을 변경했으니 원본의 값이 바뀜 (7)

	return 0;
}