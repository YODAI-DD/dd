#include "private_class.h"
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	const int COUNT = 10;

	IntArray my_arrays[COUNT];

	for (int i = 0; i < COUNT; ++i)
	{
		//直接my_arrays[i]に対して操作を行う
		for (int j = 0; j < SIZE; ++j)
		{
			my_arrays[i].Set(j, (j + 1) * 10);
		}

		//Get関数のループ
		for (int j = 0; j < SIZE; ++j)
		{
			int num = my_arrays[i].Get(j);
			cout << j << "番目の配列の値は" << num << endl;
		}
	}
}