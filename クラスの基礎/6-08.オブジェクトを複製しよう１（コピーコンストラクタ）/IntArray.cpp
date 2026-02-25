#include "IntArray.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

//コンストラクタ
IntArray::IntArray(int size)
{
	m_array = new int[size];
	m_size = size;

	fill_n(m_array, m_size, 0);

	cout << "コンストラクタが呼ばれました。" << endl
		<< "要素数は" << m_size << "です" << endl;
}

//デストラクタ
IntArray::~IntArray()
{
	delete[] m_array;

	cout << "デストラクタが呼ばれました。" << endl
		<< "要素数は" << m_size << "でした。" << endl;
}

//コピーコンストラクタ
IntArray::IntArray(const IntArray& other)
{
	m_array = new int[other.m_size];
	m_size = other.m_size;

	copy(other.m_array, other.m_array + m_size, m_array);

	cout << "コピーコンストラクタが呼ばれました。" << endl;
}

//インデックスのチェック
int IntArray::CheckIndex(int i) const
{
	if (0 <= i && i < m_size)
	{
		//インデックスは正常です
	}
	else
	{
		cerr << "不正なインデックスです" << endl
			<< "値" << i << endl;

		exit(EXIT_FAILURE);
	}
}

//要素数を返す関数
int IntArray::Size() const
{
	return m_size;
}

//メンバへのアクセス関数
void IntArray::Set(int i, int value)
{
	CheckIndex(i);
	m_array[i] = value;
}

int IntArray::Get(int i) const
{
	CheckIndex(i);
	return m_array[i];
}