#pragma once

//0以上の値を順次取得していく基底クラス
class Stream
{
public:
	double Get() const; //設定された値を取得

protected:
	double m_n; //現在の値
};