#include <iostream>




struct player
{
	char name[80];
	int health;
	int score;
	int position;
	int velocity;
};


void main()
{
	
	printf("enter name: \n");
	char name[80] = { 0 };
	scanf_s("%s", &name, 80);
	printf("name: %s \n", name, 80);

	

	system("pause");
}