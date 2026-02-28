#pragma once

//入力クラス
class InputStream
{
public:
	double Get() const; //設定された値を取得
	bool Set();         //新しい値を設定

private:
	double m_n; //入力された値
};