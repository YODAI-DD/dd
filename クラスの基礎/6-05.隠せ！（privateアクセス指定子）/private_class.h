#pragma once

const int INTARRAY_SIZE = 100;

class IntArray
{
private:
	int m_array[INTARRAY_SIZE];  //配列

public:
	IntArray();  //コンストラクタ
	int Get(int i);  //メンバへのアクセス関数（取得）
	void Set(int i, int value);  //メンバへのアクセス関数（変更）
private:
	void CheckIndex(int i);  //インデックスのチェック
};