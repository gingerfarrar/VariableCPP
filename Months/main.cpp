#include <iostream>

int main()
{
	int month;

	printf("input a month as an integer: \n");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		printf("31 days in january \n");
		break;
	case 2:
		printf("28 days in february \n");
		break;
	case 3:
		printf("31 days in march \n");
		break;
	case 4:
		printf("30 days in april \n");
		break;
	case 5:
		printf("31 days in may \n");
		break;
	case 6:
		printf("30 days in june \n");
		break;
	case 7:
		printf("31 days in july \n");
		break;
	case 8:
		printf("31 days in august \n");
		break;
	case 9:
		printf("30 days in september \n");
		break;
	case 10:
		printf("31 days in october \n");
		break;
	case 11:
		printf("30 days in november \n");
		break;
	case 12:
		printf("31 days in december \n");
		break;
	default:
		printf("error \n");
	}

	system("pause");
}



//8.a true
//8.b false
//8.c false !20
//8.d true
//8.e true
//8.f false
//8.g true
//8.h true
//8.i true
//8.j true

//9.a true
//9.b true
//9.c false
//9.d true
//9.e false