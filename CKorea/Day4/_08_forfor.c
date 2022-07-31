#include <stdio.h>

void main8() {
	// 반복문 안에 반복문 사용 가능
	// 조건문 안에 조건문 사용 가능
	// 조거문 안에 반복문 사용 가능
	// 반복문 안에 조건문 사용 가능

	// 반복문 안에서 조건문 사용
	//for (int i = 0; i < 3; i++)
	//{
	//	if (i == 0) {
	//		printf("시작!! \n");
	//	}
	//	printf("%d \n", i);
	//}

	// 중첩 반복문 : 반목문 안에 반복문 사용
	for (int i = 0; i < 3; i++)
	{
		printf("시작!%d \n", i);
		for (int j = 0; j < 3; j++) {
			printf("%d \n", j);
		}
		printf("끝!%d \n", i);
	}

}