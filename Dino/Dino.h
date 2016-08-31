#pragma once
#include <iostream>
//header files are for declarations.
//source files are for definitions
struct Qualities
{
	int teeth;
	int hight;
	int health;
	char name[80];

};

Qualities makedino();
void printname(const Qualities dinosaur);
void modifyDino(Qualities &dinosaur);
void printInfo(const Qualities dinosaur);