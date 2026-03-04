#include "Stream.h"
#include <iostream>
using namespace std;

Stream::Stream(double n) : m_n(n)
{
	cout << "Streamコンストラクタ" << endl;
}

Stream::~Stream()
{
	cout << "Streamデストラクタ" << endl;
}

double Stream::Get() const
{
	return m_n;
}

//値を設定
bool Stream::Set()
{
	SetBase();
	return m_n >= 0;
}