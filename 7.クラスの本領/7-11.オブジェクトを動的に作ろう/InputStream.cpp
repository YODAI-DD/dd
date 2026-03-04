#include "InputStream.h"
#include <iostream>
using namespace std;

InputStream::InputStream()
{
	cout << "InputStreamコンストラクタ" << endl;
}

InputStream::~InputStream()
{
	cout << "InputStreamデストラクタ" << endl;
}

//入力関数
void InputStream::SetBase()
{
	cin >> m_n;
}