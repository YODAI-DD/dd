#include <iostream>
using namespace std;

static int a = 2;

static void Func1()
{
	cout << "a = " << a << endl;
}

void Func2()
{
	Func1();
}