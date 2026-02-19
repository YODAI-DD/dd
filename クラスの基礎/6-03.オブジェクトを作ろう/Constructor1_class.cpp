#include "Constructor1_class.h"
#include <iostream>
using namespace std;

//コンストラクタ
Integer::Integer()
{
	m_value = 0;
}

void Integer::Show()
{
	cout << m_value << endl;
}