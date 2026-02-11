#include <iostream>
using namespace std;

int main()
{
	int a{}, b{};

	cout << "二つの値を入力してください > " << flush;
	cin >> a >> b;

	cout << "大きい方の値は " << (a > b ? a : b) << "です。" << endl;
}