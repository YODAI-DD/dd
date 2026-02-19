#include <iostream>
using namespace std;

enum CompareResult
{
	CR_LESS_THAN = 0,
	CR_EQUAL_TO = 1,
	CR_GREATER_THAN = 2
};

CompareResult Compare(int a, int b) //条件演算子 -> 条件式 ? 真の場合の返したい値1:真の場合2:真の場合n...:偽の場合;
{
	return
		a < b ? CR_LESS_THAN:
		a > b ? CR_GREATER_THAN:
				CR_EQUAL_TO;
}

bool Compare()
{
	static const char* const message[] =
	{
		"前者は後者より小さいです。",
		"前者は後者より大きいです。",
		"両者は等しいです。"
	};

	int a{}, b{};

	cout << "数字を二つ入力してください > " << flush;
	cin >> a >> b;

	if (a == -1)
	{
		return false;
	}

	cout << message[Compare(a, b)] << endl;

	return true;
}

int main()
{
	while (Compare())
	{
		//何もしない
	}
}
