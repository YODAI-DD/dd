#include <iostream>
using namespace std;

int b{ 2 };

void Func(int a = b) { cout << (size_t)&a << endl; }
void Func2()         { Func(); }

int main()
{
	Func();
	Func2();
	Func();
}