#include "private_class.h"
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;

	IntArray arrays[SIZE];

	//Set関数のループ
	for (int i = 0; i < SIZE; ++i)
	{
		arrays[i].Set(i, (i + 1) * 10);
	}

	//Get関数のループ
	for (int i = 0; i < SIZE; ++i)
	{
		int num = arrays[i].Get(i);
		cout << i << "番目の配列の値は" << num << endl;
	}

}