#include <iostream>

int val(float anum, float bnum)
{
	if (anum > bnum)
	{
		return bnum;
	}
	else if (bnum > anum)
	{
		return anum;
	}
	
}


int main()
{	
	
	float var1, var2;
	printf("enter value 1: \n");
	scanf_s("%f", &var1);

	printf("enter value 2: \n");
	scanf_s("%f", &var2);

	float lower = val(var1, var2);
	printf("the smaller number is: %f", lower);

	getchar();
	getchar();
	

}