#include "ArrayStream2.h"

ArrayStream::ArrayStream(const double* array)
{
	m_array = array;
	m_i = 0;
}

//設定された値を取得
double ArrayStream::Get() const
{
	return m_n;
}

//新しい値を設定
bool ArrayStream::Set()
{
	m_n = m_array[m_i];
	if (m_n >= 0)
	{
		++m_i;
		return true;
	}
	else
	{
		return false;
	}
}