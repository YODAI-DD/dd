#include "func_ptr.h"
#include <iostream>
using namespace std;

int main()
{
	int* (*ptr)(int);
	ptr = func1;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << &ptr << endl;
	cout << &*ptr << endl;
	cout << *&ptr << endl;

	int q = 10;

	int* a = func1(q);
	cout << " a : " << a << endl //戻り値のアドレスが出る？
		<< "&a : " << &a << endl //aというポインタ変数のアドレスが出る？
		<< "*a : " << *a << endl;//戻り値のアドレスに格納されてる値が出る？
	delete a;
	cout << endl;

	int* b = (*ptr)(q);
	cout << " b : " << b << endl //戻り値のアドレスが出る？
		 << "&b : " << &b << endl //bというポインタ変数のアドレスが出る？
		 << "*b : " << *b << endl;//戻り値のアドレスに格納されてる値が出る？
	delete b;
}