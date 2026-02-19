#include "New2.h"
#include <iostream>
#include <new>
using namespace std;

int main()
{
	int* array;
	int size;
	int num;

	cout << "どこまで計算しますか？ > " << flush;
	cin >> size;
	cout << "何の倍数を計算しますか？ > " << flush;
	cin >> num;

	array = new(nothrow) int[size];

	if (array != nullptr)
	{
		CalcMultiples(array, size, num);
		ShowArray(array, size);

		delete[] array;
	}
}