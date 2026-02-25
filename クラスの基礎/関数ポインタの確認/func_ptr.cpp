#include "func_ptr.h"
#include <iostream>
using namespace std;

int* func1(int i)
{
	int* s = new int;
	*s = 20;
	*s += i;
	cout << "s : " << *s << endl;
	return s;
}