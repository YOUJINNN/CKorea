#include <stdio.h>

void main4() {
	
	int flag = 0;
	while (flag < 5) {
		// 횟수를 위해 만든 flag도 다른 곳에 사용 가능 (flag도 어차피 변수)
		printf("지금은 %d번째 수행 중\n", flag + 1);

		// while 안에서 if 사용 가능
		if (flag > 2) {
			printf("2을 초과했습니다. \n");
		}
		flag++;
	}

}