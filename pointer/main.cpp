#include <iostream>

using namespace std;

void main()
{
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;

	p3 = &d;
	cout << "*p3 = " << *p3 << endl; //1

	p3 = p1;
	cout << "*p3 = " << *p3 << endl; //2
	cout << ", p3 = " << p3 << endl; //3

	*p1 = *p2;
	cout << "*p1 = " << *p1 << endl; //4
	cout << ", p3 = " << p1 << endl; //5
	getchar();


	// exercise 2 and 3
	int *p;
	int i;
	int k;

	i = 42;
	k = i;
	p = &i;
	*p = 75;
	cout << "i = " << *p << endl;
	getchar();

	int var = 2147483500;
	float far = var;
	printf("%f\n", far);
	far = *(float*)&var;
	printf("%f\n", far);
	getchar();
}