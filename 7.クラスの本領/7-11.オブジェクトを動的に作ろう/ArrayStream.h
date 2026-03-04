#pragma once
#include "stream.h"

//配列から順に値を取得していくクラス
class ArrayStream : public Stream
{
public:
	ArrayStream(const double* array, int size);
	~ArrayStream();

protected:
	void SetBase() override;

private:
	double* m_array;
	int m_i;
};
