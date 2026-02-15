//\から始まる特殊な文字はエスケープシーケンスという。
//エスケープシーケンスを使うと特殊な文字の文字コードや数値を表すことができる。
//エスケープシーケンスはソースファイル上でのみ必要となるものであり、コンパイル後は対応する文字コードに変換される。

#include <iostream>
#include <cstdio>
using namespace std;

//文字コードを16進数で表示する
void DumpCode(const char* str)
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		printf("%02X ", (unsigned char)str[i]);
	}
	cout << endl;
}

int main()
{
	DumpCode("\"\'\?\\");
	DumpCode();
	DumpCode();
	DumpCode();
	DumpCode();
}
