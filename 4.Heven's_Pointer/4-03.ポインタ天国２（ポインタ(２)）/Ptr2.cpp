#include <iostream>
using namespace std;

int main()
{
	int  a;
	int  b;
	int* p = &a;

	a = 0;
	b = a;
	cout << " a = " <<  a << endl
		 << " b = " <<  b << endl
		 << "*p = " << *p << endl;

	int* p = &b;

	*p = 5;
	 b = a;
	cout << " a = " <<  a << endl
		 << " b = " <<  b << endl
		 << "*p = " << *p << endl;
}