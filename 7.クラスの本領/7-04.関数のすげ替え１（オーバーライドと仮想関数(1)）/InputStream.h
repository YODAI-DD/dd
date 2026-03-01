#pragma once
#include "Stream.h"

//入力クラス
class InputStream : public Stream
{
public:
	virtual bool Set() override; //入力関数
};