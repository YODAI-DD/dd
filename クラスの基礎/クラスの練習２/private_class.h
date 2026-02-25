#pragma once

class IntArray
{
private:
	//インデックスのチェック
	void CheckIndex(int i);

	int* m_array; //動的配列へのポインタ
	int m_size;   //配列の要素数

public:
	//コンストラクタ・デストラクタ
	IntArray(int size);
	~IntArray();

	//メンバへのアクセス関数
	int Get(int i);
	void Set(int i, int value);
};