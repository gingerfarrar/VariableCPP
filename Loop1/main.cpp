#include <iostream>

int main()
{
	int i = 100;
	//while loop
	while (i > 0)
	{
		i -= 2;
		printf("%d \n", i);
	}
	//for loop
	for (int i = 100; i > 0; i-= 2)
	{
		printf("%d \n", i);
	}

	getchar();
}