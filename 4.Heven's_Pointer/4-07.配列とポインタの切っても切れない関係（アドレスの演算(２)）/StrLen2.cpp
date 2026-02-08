#include <iostream>
using namespace std;

size_t StrLen(const char* str)
{
	const char* p;
	for (p = str; *p != '\0'; ++p)
	{
		cout << p << endl;
	}
	return p - str;
}

void ShowLength(const char* str)
{
	cout << "文字列「" << str << "」の長さは"
		<< StrLen(str) << "バイトです。" << endl;
}

int main()
{
	ShowLength("Hello");
}