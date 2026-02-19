#include <iostream>
#include <new> //nothrowを使う場合には必要
using namespace std;

int main()
{
	int* p = new(nothrow) int;

	if (p != nullptr)
	{
		*p = 0;
		cout << *p << endl;

		delete p;
	}
}