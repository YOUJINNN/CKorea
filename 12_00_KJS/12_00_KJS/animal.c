#include "animal.h"

int main()
{
	// 동물 3마리 만들고
	// 전부 자게 하기

	//Animal camel = { "사막짐꾼", "수컷", 3 };
	//Animal lion = { "심바", "수컷", 2 };
	//Animal iguana = { "니코", "암컷", 10 };
	
	Animal arrAnimal[3] = { { "사막짐꾼", "수컷", 3 }, { "심바", "수컷", 2 } ,{ "니코", "암컷", 10 } };

	for (int i = 0; i < 3; i++)
	{
		sleep(&arrAnimal[i]);
		breath(&arrAnimal[i]);
		printf("\n");
	}
}