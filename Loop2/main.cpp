#include <iostream>

int main()
{
	for (int i = 0; i < 100; i++)
	{
		printf("%d \n", i);
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("fizzbuzz \n");
		}
		else if ((i % 3) == 0)
		{
			printf("fizz \n");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz \n");
		}
		
	}

	getchar();
}