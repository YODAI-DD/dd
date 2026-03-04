#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

bool Average(Stream& stream)
{
	int count;
	double avr = 0;

	for (count = 0; stream.Set(); ++count)
	{
		avr += stream.Get();
	}
	if (count == 0)
	{
		return false;
	}

	avr /= count;
	cout << "平均値は" << avr << "です" << endl;
	return true;
}

int main()
{
	//Stream stream;

	//stream.Set();
	//cout << stream.Get() << endl;

	InputStream istream;

	cout << "> " << flush;
	istream.Set();
	cout << istream.Get() << endl;

	Average(istream);

	static const double ARRAY[] = { 1.5, 0.5, 2, -1 };
	ArrayStream astream(ARRAY);
	Average(astream);
}