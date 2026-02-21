#include "private_class.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

//コンストラクタ
IntArray::IntArray()
{
	//fill_n関数を使い、配列を0で初期化
	fill_n(m_array, INTARRAYSIZE, 0);
}

//メンバへのアクセス関数
int IntArray::Get(int i)
{
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value)
{
	CheckIndex(i);
	m_array[i] = value;
}

//インデックスのチェック
void IntArray::CheckIndex(int i)
{
	if (0 <= i && i < INTARRAYSIZE)
	{
		//インデックスは有効
	}
	else
	{
		cout << "インデックスが不正です！" << endl
			<< "値 : " << i << endl;
		exit(EXIT_FAILURE);
	}
}