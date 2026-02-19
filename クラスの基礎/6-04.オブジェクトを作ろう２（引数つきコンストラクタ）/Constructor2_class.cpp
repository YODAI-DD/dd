#include "Constructor2_class.h"
#include <iostream>
using namespace std;

//コンストラクタ
Integer::Integer()
{
	m_value = 0;
}
Integer::Integer(int num)
{
	m_value = num;
}

//メンバ変数の表示
void Integer::Show()
{
	cout << m_value << endl;
}