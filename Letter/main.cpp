#include <iostream>

int main()
{
	char charA, charB, charC;
	printf("enter two letters \n");

	scanf_s("%c %c",&charA, 1, &charB, 1);
	int asciival = charA;
	int asciival2 = charB;



	int asciival3 = ((asciival + asciival2) / 2);
	charC = asciival3;

	printf("average: %c \n", charC);

	system("pause");
}