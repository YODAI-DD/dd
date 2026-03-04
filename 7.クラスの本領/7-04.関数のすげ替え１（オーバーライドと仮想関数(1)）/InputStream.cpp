#include "InputStream.h"
#include <iostream>
using namespace std;

InputStream::InputStream(double n) : Stream(n)
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