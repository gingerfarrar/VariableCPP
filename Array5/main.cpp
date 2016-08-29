#include <iostream>

int main()
{
	int var[10];
	int temp = 0;
	int smol = 10000;
	
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &var[0], &var[1], &var[2], &var[3], &var[4], &var[5], &var[6], &var[7], &var[8], &var[9]);

	for (int i = 0;i < 10;i++)
	{
		if (var[i] > temp)
		{
			temp = var[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (var[i] < smol)
		{
			smol = var[i];
		}
	}

	printf("%d %d \n", temp, smol);

	system("pause");
}