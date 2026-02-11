#include <iostream>
#include <algorithm>  //fill_nを使うためのヘッダファイル
using namespace std;

/////////////////////////////////////////////////
//アドレスが常に一定であるかのチェック

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress()
{
	cout << "アドレスが常に一定であるかのチェック" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

//静的関数 a と動的変数 b のアドレスを出力
void CheckAddress_Sub()
{
	static int a;
	int        b;
	cout << "&a = " << (size_t)&a << endl
		 << "&b = " << (size_t)&b << endl;
}

//この関数の中から CheckAddress_Sub を呼んだときに
//変数 a と b のアドレスがどうなるかのチェック
void CheckAddress_Sub2()
{
	cout << "in Sub2" << endl;
	CheckAddress_Sub();
}

/////////////////////////////////////////////////
//初期化が１回しかされないのかのチェック

void CheckInitOnce_Sub();

void CheckInitOnce()
{
	cout << endl << "初期化が１回しかされないかのチェック" << endl;

	CheckInitOnce_Sub();
	CheckInitOnce_Sub();
}

//++a と ++b の影響が2度目以降の呼び出しに影響するかのチェック
void CheckInitOnce_Sub()
{
	static int a = 3;
	int        b = 3;
	cout << "a = " << a << endl
		 << "b = " << b << endl;
	++a;
	++b;
}

/////////////////////////////////////////////////
// 0で初期化されるかのチェック
// 偶然0だったときのために、4つ変数を作って確かめる
// 動的変数も一緒に確認

void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit()
{
	cout << endl << "0で初期化されるのかのチェック" << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

//静的変数が何で初期化されているかのチェック
void CheckZeroInit_Sub()
{
	static int a, b, c, d;
	cout << a << ',' << b << ',' << c << "," << d << endl;
}

//動的変数が何で初期化されているかのチェック
void CheckZeroInit_Sub2()
{
	int a{}, b{}, c{}, d{};
	cout << a << ',' << b << ',' << c << "," << d << endl;
}

/////////////////////////////////////////////////
//値が保証されるのかのチェック

void CheckInvariant_Sub(int*& pas, int*& pbs);
void CheckInvariant_Sub2();

void CheckInvariant()
{
	cout << endl << "値が保証されるかのチェック" << endl;

	int* pa{}, * pb{};  //*は両方につけないとダメ
	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();
	//CheckInvariant_Sub2を呼んでもaとbの値が保持されてるかチェック
	cout << "*pa = " << &pa << endl
		 << "*pb = " << &pb << endl;
}

//静的変数 a と動的変数 b のアドレスを引数を通して渡す
//int*& は int* への参照です
void CheckInvariant_Sub(int*& pas, int*& pbs)
{
	static int a = 9;
	int        b = 9;
	pas = &a;
	pbs = &b;
}

//大きな変数を作って、それをすべて 0 で埋めます
//fill_nは指定したデータで配列などを埋める関数のようなものです
void CheckInvariant_Sub2()
{
	int dummy[100];
	fill_n(dummy, 100, 0);
}

/////////////////////////////////////////////////
//main関数

int main()
{
	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();
}