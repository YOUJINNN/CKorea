#include <stdio.h>

int main()
{
	//int input;
	//printf("�� �Է� : ");
	//scanf_s("%d", &input);

	//switch (input)
	//{
	//case 1:
	//	printf("1�Դϴ�.");
	//	break;

	//case 2:
	//	printf("2�Դϴ�.");
	//	break;

	//case 3:
	//	printf("3�Դϴ�.");
	//	break;

	//default:
	//	printf("��Ÿ");
	//	break;
	//}

	// ������ switch��

	//int input;
	//printf("�� �Է� : ");
	//scanf_s("%d", &input);

	//switch (input)
	//{
	//case 1:	case 2:	case 3:
	//	printf("%d�Դϴ�.", input);
	//	break;

	//default:
	//	printf("��Ÿ");
	//}

	// 1�� ����
	int month;
	printf("�� �Է� : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		printf("31�ϱ��� �ֽ��ϴ�.");
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		printf("30�ϱ��� �ֽ��ϴ�.");
		break;
	}
	case 2:
	{
		printf("28�ϱ��� �ֽ��ϴ�.");
	}
	default:
		printf("��Ȯ�� ���� �Է����ּ���.");
	}
	

	// 2�� ����
	int score;
	printf("���� �Է� : ");
	scanf_s("%d", &score);

	switch (score/10)
	{
	case 10: case 9:
	{
		printf("A���� �Դϴ�.");
		break;
	}
	case 8:
	{
		printf("B���� �Դϴ�.");
		break;
	}
	case 7:
	{
		printf("C���� �Դϴ�.");
		break;
	}
	case 6:
	{
		printf("D���� �Դϴ�.");
		break;
	}
	default:
		printf("F���� �Դϴ�.");
	}
}