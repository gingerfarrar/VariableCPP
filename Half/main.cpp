#include <iostream>

float half(int num)
{
	return num / 2;
}



int main()
{
	float number = 0;
	scanf_s("%f", &number);
	float result = half(number);
	printf("halfed: %f", result);
	getchar();
	getchar();
}