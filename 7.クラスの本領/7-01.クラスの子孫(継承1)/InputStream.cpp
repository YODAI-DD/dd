#include "InputStream.h"
#include <iostream>
using namespace std;

//入力関数
bool InputStream::Set()
{
	cin >> m_n;
	return m_n >= 0;
}