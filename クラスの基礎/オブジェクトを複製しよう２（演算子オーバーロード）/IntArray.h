#pragma once

class IntArray
{
	//メンバ変数
private:
	int* m_array; //動的配列へのポインタ
	int m_size; //配列の要素数

	//メンバ関数
private:
	int CheckIndex(int i); //インデックスが有効かのチェック。Set関数とGet関数で使用。

public:
	//コンストラクタ。m_arrayによる動的配列を作り、fill_nで要素を初期化する。
	IntArray(int size);

	//デストラクタ。動的配列m_arrayのメモリ開放。
	~IntArray();

	//コピーコンストラクタ。引数で受け取ったIntArrayオブジェクトのm_sizeをコピーし、m_arrayも同じ要素数の動的配列を作る。そして、fill_nで要素を初期化する。
	IntArray(const IntArray& other);

	//代入演算子のオーバーロード。
	void operator=(const IntArray& other);

	void Set(int i, int value); //引数で受け取った値でm_arrayのインデックスを指定し、そこにvalueをぶち込む
	int Get(int i); //Showで値を出すための関数
	int Size(); //配列の要素数を返す関数
};