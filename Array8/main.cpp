#include <iostream>

int main()
{
	int var[5] = {100};
	int damage = 40;

	printf("enter a number from 0 to 4");
	scanf_s("%d", &var[5]);

	switch (var[5])
	{
	case 0:
		if (var[0] > 0)
			(var[0] - damage);
		printf("villager 0 has %d health left", var[0]);
		break;
	case 1:


	}

	system("pause");
}