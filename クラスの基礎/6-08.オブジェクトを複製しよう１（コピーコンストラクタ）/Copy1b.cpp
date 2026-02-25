#include "intArray.h"
#include <iostream>
using namespace std;

//Viss関数の定義
void Log(int num)
{
	cout << "Log : No." << num << endl
	     << endl;
}

//Show関数の定義
void Show(const IntArray array)
{
	Log(2);

	for (int i = 0; i < array.Size(); ++i)
	{
		cout << array.Get(i) << ' ';
	}
	cout << endl;

	Log(3);
}

//main関数
int main()
{
	IntArray array0to9(10);

	for (int i = 0; i < array0to9.Size(); ++i)
	{
		array0to9.Set(i, i);
	}

	Log(1);

	Show(array0to9);

	Log(4);
}