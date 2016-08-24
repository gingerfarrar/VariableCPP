#include <iostream>

int main()
{

	int choice = 0;
	scanf_s("%d", &choice);
	getchar();

	switch (choice)
	{
	case 1: 
		printf("1");
		break;
	case 2: 
		printf("2 or 3");
		break;
	case 3: 
		printf("2 or 3");
		break;
	default: 
		printf("Invalid");
	}
	getchar();
}