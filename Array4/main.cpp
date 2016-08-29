#include <iostream>

int main()
{
	
	int numbers[5] ;


	printf("enter 5 numbers \n");

	scanf_s("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

	printf("%d %d %d %d %d \n", numbers[4], numbers[3], numbers[2], numbers[1], numbers[0]);
	system("pause");
}