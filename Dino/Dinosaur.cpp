#include <iostream>
#include "Dino.h"

Qualities makedino()
{
	Qualities dinosaur;

	// name
	printf(" enter qualities for your dino\n name:");
	scanf_s("%s", &dinosaur.name, 80);

	// health
	printf(" how strong? ");
	scanf_s("%d", &dinosaur.health);

	// teeth
	printf(" how many teeth: ");
	scanf_s("%d", &dinosaur.teeth);

	getchar();
	return dinosaur;
}
void printname(const Qualities dinosaur)
{
	printf(" name: %s \n", dinosaur.name);
	printf(" health: %d \n", dinosaur.health);
}
void modifyDino(Qualities &dinosaur)
{
	printf(" how tall: ");
	scanf_s("%d", &dinosaur.hight);
}
void printInfo(const Qualities dinosaur)
{
	printf(" hight: %d \n", dinosaur.hight);
	printf(" teeth: %d \n", dinosaur.teeth);
}