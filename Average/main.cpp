#include <iostream>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, numA = 0, numB = 5, numC = 0;

	printf("input 5 numbers \n");
	scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	getchar();
	numA = num1 + num2 + num3 + num4 + num5;
	numC = numA / numB;
	
	//
	printf("Average: %d", numC);
	getchar();
}