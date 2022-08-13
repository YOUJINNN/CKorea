#include "CQ.h"

// 1. ��ȣǥ �̱�
// ����ο��� ������ ����ο��� �ʹ� �����ϴ�.
// n�� ��ȣǥ�� �̾ҽ��ϴ�. ���
// 2. ��ȣǥ �θ���
// ��� �ο��� ������ ��ȣǥ�� �̾��ּ���
// n�� �մ� â���� ���ʽÿ�. ���
// 3. ����ο� Ȯ��
// ���� 5�� �մԱ��� �ֽ��ϴ�.
// 4. ������
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
		printf("1. ��ȣǥ �̱� 2. ��ȣǥ �θ��� 3. ��� �ο� Ȯ�� 4. ������\n");
		scanf_s("%d", &choice);
		if (choice == 4)
		{
			printf("�ȳ���������.");
			break;
		}
		switch (choice)
		{
		case 1:
			if (isFull(q))
			{
				printf("��� �ο��� �ʹ� �����ϴ�.\n");
			}
			else
			{
				printf("%d�� ��ȣǥ�� �̾ҽ��ϴ�.\n", cnt);
				enqueue(q, cnt++);
			}
			break;

		case 2:
			if (isEmpty(q))
			{
				printf("��� �ο��� �����ϴ�. ��ȣǥ�� �̾��ּ���\n");
			}
			else
			{
				printf("%d�� �մ� â���� ���ʽÿ�.\n", dequeue(q));
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
			printf("%d�� �մԱ��� �ֽ��ϴ�.\n", num);
			break;

		default:
			printf("�׷� �׸��� �������� �ʽ��ϴ�. �ٽ� �������ּ���.\n");
		}
	}
}