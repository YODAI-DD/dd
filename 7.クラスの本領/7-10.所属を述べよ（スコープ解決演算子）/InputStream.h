#pragma once
#include "Stream.h"

//入力クラス
class InputStream : public Stream
{
public:
	InputStream();
	~InputStream();

protected:
	virtual void SetBase() override; //入力関数
};