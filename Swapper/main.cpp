#include <iostream>

int main()
{
	int vara = 0, varb = 0, varc = 0;
	
	printf("Insert two integers: ");
	scanf_s("%d %d", &vara, &varb); //assign var a value from console
	getchar(); //inappropriate way to clear buffer
	printf("var currently stores: %d %d \n", vara, varb);
	
	varc = vara;
	vara = varb;
	varb = vara;
	
	
	printf("%d %d", vara, varb);

	getchar();
}