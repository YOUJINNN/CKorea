#include "animal.h"

int main()
{
	// ���� 3���� �����
	// ���� �ڰ� �ϱ�

	//Animal camel = { "�縷����", "����", 3 };
	//Animal lion = { "�ɹ�", "����", 2 };
	//Animal iguana = { "����", "����", 10 };
	
	Animal arrAnimal[3] = { { "�縷����", "����", 3 }, { "�ɹ�", "����", 2 } ,{ "����", "����", 10 } };

	for (int i = 0; i < 3; i++)
	{
		sleep(&arrAnimal[i]);
		breath(&arrAnimal[i]);
		printf("\n");
	}
}