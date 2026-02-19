#include "New2.h"
#include <iostream>
using namespace std;

void CalcMultiples(int* array, const int size, const int n)
{
	for (int i = 0; i < size; ++i)
	{
		array[i] = n * (i + 1);
	}
}

void ShowArray(const int* array, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}