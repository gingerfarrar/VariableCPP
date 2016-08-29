#include <iostream>
//question 3
int main()
{
	int sum = 0;
	int i = 0;

	while (i < 999)
	{
		++i;
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum);

	getchar();
}