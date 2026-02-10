#include <iostream>
using namespace std;

enum CompareResult
{
	CR_LESS_THAN,
	CR_EQUAL_TO,
	CR_GREATER_THAN,
};

CompareResult Compare(int a, int b)
{
	if (a < b)
	{
		return CR_LESS_THAN;
	}
	else if (a == b)
	{
		return CR_EQUAL_TO;
	}
	else if (a > b)
	{
		return CR_GREATER_THAN;
	}
}

bool Result()
{
	int a{}, b{};

	cout << "数値を二回入力してください。（ENTER区切り）" << flush;
	if (!(cin >> a >> b))
	{
		cout << "無効な入力です" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}

	switch (Compare(a, b))
	{
	case CR_LESS_THAN:
		cout << a << "は" << b << "よりも小さいです" << endl;
		break;

	case CR_EQUAL_TO:
		cout << a << "と" << b << "は等しいです" << endl;
		break;

	case CR_GREATER_THAN:
		cout << a << "は" << b << "よりも大きいです" << endl;
		break;
	}

	return true;
}

int main()
{
	while (Result())
	{
		int c;
		cout << "終了する場合は1を入力、続ける場合は任意のボタンを入力" << flush;
		cin >> c;
		if (c == 1)
		{
			break;
		}
		else
		{
			continue;
		}
	}
}