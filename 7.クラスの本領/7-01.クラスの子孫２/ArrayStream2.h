#pragma once

//配列から順に値を取得していくクラス
class ArrayStream
{
public:
	ArrayStream(const double* array);
	double Get() const; //設定された値を取得
	bool Set();         //新しい値を設定

private:
	const double* m_array; //配列
	int m_i;               //現在のインデックス
	double m_n;            //現在の値
};