#include "CQ.h"

// 1. 번호표 뽑기
// 대기인원이 많으면 대기인원이 너무 많습니다.
// n번 번호표를 뽑았습니다. 출력
// 2. 번호표 부르기
// 대기 인원이 없으면 번호표를 뽑아주세요
// n번 손님 창구로 오십시오. 출력
// 3. 대기인원 확인
// 현재 5번 손님까지 있습니다.
// 4. 나가기
int main()
{
	CircleQueue qq;
	CircleQueue* q = &qq;

	init(q);

	int choice;
	int cnt = 1;
	int i;
	int num;

	while (1)
	{
		printf("1. 번호표 뽑기 2. 번호표 부르기 3. 대기 인원 확인 4. 나가기\n");
		scanf_s("%d", &choice);
		if (choice == 4)
		{
			printf("안녕히가세요.");
			break;
		}
		switch (choice)
		{
		case 1:
			if (isFull(q))
			{
				printf("대기 인원이 너무 많습니다.\n");
			}
			else
			{
				printf("%d번 번호표를 뽑았습니다.\n", cnt);
				enqueue(q, cnt++);
			}
			break;

		case 2:
			if (isEmpty(q))
			{
				printf("대기 인원이 없습니다. 번호표를 뽑아주세요\n");
			}
			else
			{
				printf("%d번 손님 창구로 오십시오.\n", dequeue(q));
			}
			break;

		case 3:
			i = q->front;
			do
			{
				i = (i + 1) % QUEUE_SIZE;
				num = q->data[i];
				if (i == q->rear)
				{
					break;
				}
			} while (i != q->front);
			printf("%d번 손님까지 있습니다.\n", num);
			break;

		default:
			printf("그런 항목은 존재하지 않습니다. 다시 선택해주세요.\n");
		}
	}
}