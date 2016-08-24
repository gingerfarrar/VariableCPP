#include <iostream>

int main()
{		//question1
	int x;
	int y = 0;

	if (y == 0)
	{
		x = 100;
	}

	//question2
	int varA = 0, varB = 0;

	printf("This will print the largest number \n");
	scanf_s("%d %d", &varA, &varB);
	getchar();

	if (varA < varB)
	{
		int tswap = varA;
		varA = varB;
		varB = tswap;
	}

	printf("%d >= %d", varA, varB);

	getchar();
	
	

}