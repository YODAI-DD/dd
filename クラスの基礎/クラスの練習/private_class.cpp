#include "private_class2.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

IntArray::IntArray()
{
	fill_n(m_array, INTARRAYSIZE, 0);
}

void IntArray::CheckIndex(int i)
{
	if (0 <= i && i < INTARRAYSIZE)
	{
		//インデックスは正常
	}
	else
	{
		cerr << "不正なインデックスです！ 値" << i << endl;
		exit(EXIT_FAILURE);
	}
}

void IntArray::Set(int i, int value)
{
	CheckIndex(i);
	m_array[i] = value;
}

int IntArray::Get(int i)
{
	CheckIndex(i);
	return m_array[i];
}