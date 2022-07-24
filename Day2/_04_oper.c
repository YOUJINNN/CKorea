#include <stdio.h>

void main4() {
	int num = 0;

	// 대입
	num = 3;

	// 연산 후 대입
	num = 3 + 5;

	printf("%d \n", num);

	// 내가 갖고 있는 값에서 5를 더한다. (누적연산자)
	num = 3;					// 3
	num = num + 5;				// =왼쪽 : 공간, =오른쪽 : 안에 들어있는 값
	printf("%d \n", num);

	num = 3;					// 대입연산자는 안에 있는 값을 지우고 들어감
	num += 5;					// num = num + 5;		//누적연산

	num -= 5;					// num = num - 5 ;
	num *= 2;					// num = num * 2 ;
	num /= 2;					// num = num / 2 ;

	num += 1;					// 1누적 덧셈 ==> num++;
	num -= 1;					// 1누적 덧셈 ==> num--;  / +1의 개념

	num++;				//증감연산자 (1은 자주쓰여서)
	num--;

	// C언어 ==> 조금만 업그레이드 했다 C++

}

