#pragma once

//0以上の値を順次取得していくための基底クラス
class Stream
{
public:
	Stream();
	virtual ~Stream();
	double m_n;

public:
	double Get() const;
	bool Set(); //値を設定

protected:
	virtual void SetBase() = 0;
};