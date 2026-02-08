#include <iostream>
using namespace std;

const char* MONTH_NAME[] ={
	"睦月","如月","弥生","卯月","皐月","水無月","文月","葉月","長月","神無月","霜月","師走"
};

const char* ERROR = "エラー";
const char* GetOldMonthName(int month)
{
	if (1 <= month && month <= 12)
	{
		return MONTH_NAME[month - 1];
	}
	else
	{
		return ERROR;
	}
}

int main()
{
	int month;

	cout << "今は何月ですか？ > " << flush;
	cin >> month;

	const char* name = GetOldMonthName(month);
	if (name == ERROR)
	{
		cout << "範囲外の月" << endl;
	}
	else
	{
		cout << name << endl;
	}
}