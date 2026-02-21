#pragma once

class IntArray
{
private:
	static constexpr int INTARRAYSIZE = 100;
	int m_array[INTARRAYSIZE];  //配列

	void CheckIndex(int i);  //インデックスのチェック

public:
	IntArray();  //コンストラクタ
	int Get(int i);  //メンバへのアクセス関数（取得）
	void Set(int i, int value);  //メンバへのアクセス関数（変更）
};