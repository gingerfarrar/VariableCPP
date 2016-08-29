#include <iostream>

void main()
{
	int num = 0;
	

	printf("input a number to evaluate the collatz: ");
	scanf_s("%d", &num);
	getchar();
	printf("%d ", num);
		while (num > 1)
		{
			if (num % 2 == 0) num = num / 2;
			else num = 3 * num + 1;
			
			printf("%d ", num);
		}
	
		getchar();
}