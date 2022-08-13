#include "stack.h"

int main()
{
	// 접시 쌓기 프로그램
	// 1. 접시 쌓기
	// 접시를 너무 많이 쌓아올리면 "접시를 더 이상 올릴 수 없습니다." 출력
	// "접시를 하나 추가했습니다." 출력
	// 2. 접시 빼기
	// 접시가 하나도 없으면 "뺄 접시가 없습니다." 출력
	// "접시를 하나 뺐습니다." 출력
	// 3. 쌓은 접시의 개수
	// "현재 접시가 n개 쌓여있습니다." 출력
	// 4. 나가기
	// 프로그램 종료
	Stack s;
	Stack* ptr = &s;
	init(ptr);

	int choice;
	int cnt = 1;

	while (1)
	{
		printf("1. 접시 쌓기 2. 접시 빼기 3. 쌓은 접시의 개수 4. 나가기\n");
		scanf_s("%d", &choice);
		// 나가기
		if (choice == 4)
		{
			printf("프로그램 종료.");
			break;
		}

		switch (choice)
		{
		case 1:
			// 접시 쌓기
			if (isFull(ptr))
			{
				printf("접시를 더 이상 올릴 수 없습니다.\n");
			}
			else
			{
				printf("접시를 하나 추가했습니다.\n");
				push(ptr, cnt++);
			}
			break;
		case 2:
			// 접시 빼기
			if (isEmpty(ptr))
			{
				printf("뺄 접시가 없습니다.\n");
			}
			else
			{
				printf("접시를 하나 뺐습니다.\n");
				pop(ptr);
				cnt--;
			}
			break;
		case 3:
			// 쌓은 접시의 개수
			if (isEmpty(ptr))
			{
				printf("현재 접시가 없습니다.\n");
			}
			else
			{
				printf("현재 접시가 %d개 쌓였습니다.\n", peek(ptr));
			}
			break;
		default:
			printf("그런 항목은 존재하지 않습니다. 다시 선택해주세요.\n");
		}
	}
}