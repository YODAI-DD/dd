#include <iostream>
using namespace std;

int StrCount(const char* const str, const char ch)
{
	int num = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ch)
		{
			++num;
		}
	}
	return num;
}

int main()
{
	char path[] = "/home/robert/documents/const.txt";

	cout << "ファイル" << path << "は" << StrCount(path, '/') << endl
		 << "重のフォルダの中に入っています。" << endl;
}