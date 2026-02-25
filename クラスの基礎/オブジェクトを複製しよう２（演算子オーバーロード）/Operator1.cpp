#include "IntArray.h"
#include <iostream>
using namespace std;

int main()
{
	IntArray a(5);
	IntArray b(5);

	//aに値を入力していく
	for (int i = 0, size = a.Size(); i < size; ++i)
	{
		int n;
		cin >> n;
		a.Set(i, n);
	}

	//aの値をbにコピーして各値を2倍する
	b = a;
	for (int i = 0, size = b.Size(); i < size; ++i)
	{
		b.Set(i, b.Get(i) * 2);
	}

	//aからbで値がどう変化したかを出力する
	for (int i = 0, size = a.Size(); i < size; ++i)
	{
		cout << a.Get(i) << " -> " << b.Get(i) << endl;
	}
}