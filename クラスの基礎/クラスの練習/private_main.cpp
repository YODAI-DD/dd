#include "private_class2.h"
#include <iostream>
using namespace std;

int main()
{
	IntArray A;
	int i{}, value{};

	cout << "値を格納するインデックス番号を入力してください（0～99）" << flush;
	cin >> i;
	cout << "格納する値を入力してください" << flush;
	cin >> value;
	cout << endl;

	A.Set(i, value);

	int num = A.Get(i);
	cout << i << "番目の値は" << num << endl;
}