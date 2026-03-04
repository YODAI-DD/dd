#include "InputStream.h"
#include <iostream>
using namespace std;

int main()
{
	InputStream stream(5);
	cout << stream.Get() << endl;
}