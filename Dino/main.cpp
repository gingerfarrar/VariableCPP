#include "Dino.h"
#include <iostream>

void main()
{
	const int array_size = 2;
	Qualities dinosaur[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		dinosaur[i] = makedino();
		printname(dinosaur[i]);
		modifyDino(dinosaur[i]);
		printInfo(dinosaur[i]);
	}
	system("pause");
}

