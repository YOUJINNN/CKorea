#include <stdio.h>

void Swap1(int num1, int num2)
	{
	int backup = num1;			// num1안에 값을 백업해둔다
	num1 = num2;				// num12의 값으로 num1에 저장한다
	num2 = backup;				// 백업된 값을 num2에 넣는다.

	}

void Swap2(int* num1, int* num2)
{
	// num1 == &n1;
	// num2 == &n2;
	int backup = *num1;
	*num1 = *num2;
	*num2 = backup;
}

int main7()
{
	int n1 = 3;
	int n2 = 2;
	printf("바꾸기 전 : %d, %d\n", n1, n2);
	
	// swap이라는 함수를 통해서 n1과 n2의 값을 바꿔주고 싶음
	//Swap2(n1, n2);
	Swap2(&n1,&n2 );			// 주소값을 넘겨줌

	printf("바꾼 후 : %d, %d\n", n1, n2);


	return 0;
}

//only sw(소프트웨어) : 포인터 필요X (웹, 앱 : Java, Python)
// HW+SW : 하드웨어 동작을 위해선 포인터 필요(펌웨어, IOT : C언어)
