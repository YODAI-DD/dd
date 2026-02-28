#include "InputStream.h"
#include <iostream>
using namespace std;

int main()
{
	InputStream stream;
	cout << "> " << flush;

	stream.Set();

	//参照
	const Stream& ref = stream;
	ref.Set(); //refが使えるのはStreamのメンバだけ
	cout << ref.Get() << endl;

	//ポインタ
	const Stream* ptr = &stream;
	cout << ptr->Get() << endl;
}