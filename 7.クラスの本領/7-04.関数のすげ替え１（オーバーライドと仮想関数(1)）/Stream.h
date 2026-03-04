#pragma once

class Stream
{
public:
	double Get() const;
	bool Set(); //値を設定

protected:
	virtual void SetBase() = 0; //値を設定する基本関数

public:
	Stream(double n);
	~Stream();
	double m_n;
};